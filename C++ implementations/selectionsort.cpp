#include<iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void swap(int *x,int *y){
       int t=*x;
       *x=*y;
       *y=t;

}

void selectionsort(int arr[],int n){

for(int i=0;i<n-1;i++)
{
        int min_idx=i;
    for(int j=i+1;j<n;j++){
        if(arr[min_idx]>arr[j])
        {
            min_idx=j;
            swap(&arr[min_idx],&arr[i]);
        }

    }



}
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

  int main()
{
    int arr[] = {42,52,842,266,41,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
