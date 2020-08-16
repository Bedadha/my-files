#include<iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void swap(int *x,int *y){
       int t=*x;
       *x=*y;
       *y=t;

}

void bubblesort(int arr[],int n){
           bool swapped;
          for(int i=0;i<n-1;i++){
                swapped=false;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                     swapped=true;
                }
            }
            if(swapped==false)
                break;
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
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
