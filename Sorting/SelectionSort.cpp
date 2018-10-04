#include <iostream>
using namespace std;

int main() {
	// Selection sort has a time complexity of O(n^2)
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for (int i = 0; i < n-1; i++)
		{
			// Find the minimum element in unsorted array
			int min_idx = i;
			for (int j = i+1; j < n; j++)
				if (arr[j] < arr[min_idx])
					min_idx = j;

			// Swap the found minimum element with the first element
            swap(arr[min_idx],arr[i]); 
		}
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}