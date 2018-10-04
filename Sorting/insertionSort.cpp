#include <iostream>
using namespace std;

/*
  insertionSort function inserts every key element at its right position
  in the sorted array and prints the sorted array
*/

void insertionSort(int a[], int n){

  int i, key;
  for(int j = 1; j < n; j++){
      key = a[j]; // 3
      int i = j-1;

      while(i > -1 && a[i] > key){
      a[i+1] = a[i];
      i--;
    }
    a[i+1] = key;
  }

  cout << "\nSorted array:\n";

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";
  
  cout << "\n";
}

int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin >> n;
  int a[n];
  cout << "Enter " << n << " elements inside array:" << endl;
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  insertionSort(a, n);

  return 0;
}

