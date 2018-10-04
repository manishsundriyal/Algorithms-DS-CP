#include<bits/stdc++.h>
using namespace std;
void prefix(int arr[], int n, int prefixSum[]) // Insertion in Prefixsum array.
{ 
    prefixsum[0] = arr[0]; 
    for (int i = 1; i < n; i++) 
        prefixsum[i] = prefixsum[i-1] + arr[i]; // sum of the previous element with the current element.
} 
int main()
{
	int n; 
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int prefixsum[n];
	prefix(arr,n,prefixsum);
	for(int i=0;i<n;i++)
		cout<<prefixsum[i]<<" ";
}