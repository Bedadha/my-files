#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void Merge(int arr[],int l,int m,int r){

          int n1=m-l+1;
          int n2=r-m;
          int L[n1],R[n2];
          for(int i=0;i<n1;i++){
            L[i]=arr[l+i];

          }
       for(int i=0;i<n2;i++){
            R[i]=arr[m+i+1];
          }
       int i=0,k=l,j=0;
       while(i<n1&&j<n2){

        if(L[i]>=R[j]){
            arr[k]=R[j];
            j++;
        }
        else {
            arr[k]=L[i];
            i++;
        }
        k++;
       }

       if(i<n1){
            arr[k]=L[i];
            i++;
            k++;
       }
       if(j<n2){
            arr[k]=R[j];
            j++;
            k++;
       }

}
void mergesort(int arr[],int l,int r){
  if(l<r){
    int m=(l+(r-1))/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    Merge(arr,l,m,r);
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
    mergesort(arr,0,n-1);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
