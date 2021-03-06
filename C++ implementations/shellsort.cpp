#include<iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int shellsort(int arr[],int n){


   for(int gap=n/2;gap>0;gap=gap/2){

        for(int i=0;i<n;i++){
            int temp=arr[i];
            int j;
            for( j=i;j>=gap&&arr[j-gap]>temp;j-=gap)
                {
                arr[j]=arr[j-gap];
            }
            arr[j] = temp;
        }
   }
return 0;
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: \n";
    printArray(arr, n);

    shellsort(arr, n);

    cout << "\nArray after sorting: \n";
    printArray(arr, n);

    return 0;
}
