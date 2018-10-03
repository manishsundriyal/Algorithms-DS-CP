#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int n,int search)
{
    int start=0;
    int end=n-1; // Because indexing start from 0.
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]>search)
            end=mid-1;
        if(arr[mid]<search)
            start=mid+1;
        if(search==arr[mid])
            return mid;
    }
    return -1;

}
int main()
{
    // Binary Search, Binary search works on a sorted array.
    int n;
    cin>>n;
    int search;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>search; // Element to search in array.
    int ans=bsearch(arr,n,search);
    cout<<"The element is found at position "<<ans+1;

}