#include<iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void insertionsort(int arr[],int n){


for(int i=1;i<n;i++){
int key =arr[i];
        int j=i-1;
while(j>=0&&arr[j]>key){
    arr[j+1]=arr[j];
    j=j-1;
}
 arr[j+1]=key;
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
    insertionsort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
