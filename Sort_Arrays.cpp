#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/* Write a c++ program to sort a given array of 0s,1s and 2s. In the final array put all 0s 
first, then all 1s and all 2s in last.*/

int main()
{
    int n;
    cout<<"Enter the no. of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array(only 0s,1s and 2s): "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];//1,0,2,0,0,1,1,2,2,1,1,1,0,0,0
    }
    // sort(arr, arr + n);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;            
            }
        }
    }
    cout<<"The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}