#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        // for round 1 to n-1;

        for(int j=0;j<n-1;j++){
            // process element till n-i th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}