#include <iostream>
using namespace std;

/*
    Strassens' Matrix Multiplication algorithm reduces the words case
    time complexity from O(n^3) to O(n^2.8074) which is quite good 
    improvement for very large number of input matrices.

     X           Y                X*Y
 +-------+   +-------+     +-------+-------+
 | A | B |   | E | F |     | AE+BG | AF+BH |
 +---+---+ * +---+---+  =  +-------+-------+
 | C | D |   | G | H |     | CE+DG | CF+DH |
 +---+---+   +---+---+     +---------------+

 Seven products:
 P1 = A(F-H)
 P2 = (A+B)H
 P3 = (C+D)E
 P4 = D(G-E)
 P5 = (A+D)(E+H)
 P6 = (B-D)(G+H)
 P7 = (A-C)(E+F)
    
         +-------------+-------------+ 
         | P5+P4-P2+P6 |    P1+P2    |
 X * Y = +-------------+-------------+ 
         |    P3+P4    | P1+P5-P3+P7 |
         +-------------+-------------+ 

*/


void multiply(int a[2][2], int b[2][2]){
    int A = a[0][0],
    B = a[0][1],
    C = a[1][0],
    D = a[1][1],
    E = b[0][0],
    F = b[0][1],
    G = b[1][0],
    H = b[1][1];

    int p1 = A * (F-H),
    p2 = (A+B) * H,
    p3 = (C+D) * E,
    p4 = D * (G-E),
    p5 = (A + D) * (E + H),
    p6 = (B - D) * (G + H),
    p7 = (A - C) * (E + F);

    int result[2][2] = {
        { (p5 + p4 - p2 + p6), (p1 + p2)},
        { (p3 + p4), (p1 + p5 - p3 - p7)}
    };
    
    cout << "\n" << "Multiplication Result" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            cout << result[i][j] << " ";
        cout << "\n";
    }
    cin.get();
}

int main(){
    int a[2][2], b[2][2];
    
    cout << "Enter elements of first array: " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];
    }

    cout << "Enter elements of second array: " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            cin >> b[i][j];
    }

    multiply(a, b);

    return 0;
}
