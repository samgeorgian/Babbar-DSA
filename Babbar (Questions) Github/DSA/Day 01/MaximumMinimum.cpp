#include<bits/stdc++.h>
using namespace std;

void main(int num[],int n){

    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i] > max){
            max= num[i];
        }
    }
//     return max value::
return max;
}
int main(){
    int size;
    cin>>size;

    int num[size];

    int num[100];

    // taking input in array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
        return 0;
}
