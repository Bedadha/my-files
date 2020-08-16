#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countSort(vector<int>&arr){
     int Max=*max_element(arr.begin(),arr.end());
     int Min=*min_element(arr.begin(),arr.end());
     int range=Max-Min+1;

     vector<int>Count(range),output(arr.size());
     for(int i=0;i<arr.size();i++){
        Count[arr[i]-Min]++;
     }
      for(int i=1;i<Count.size();i++){
        Count[i]+=Count[i-1];
      }
    for(int i=arr.size()-1;i>=0;i--){
        output[Count[arr[i]-Min]-1]=arr[i];
        Count[arr[i]-Min]--;
    }
   for(int i=0; i < arr.size(); i++)
            arr[i] = output[i];
}

void printArray(vector <int> & arr)
{
    for (int i=0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "\n";
}

 int main()
{
    vector<int> arr = {15,13,9,7,55,4};
    countSort (arr);
    printArray (arr);
    return 0;
}
