// Code 01
// Implementations in Array :::::

//  Babbar

#include<bits/stdc++.h>
using namespace std;

// HOLD

void printArray(){

}

int main(){

    // Declare::::

    int number[15];

    cout<<" Value at zero index "<<number[14]<<endl;

    // cout<<" Value at zero index "<<number[20]<<endl;

    // Initalising an array
    int second[3]={5,7,11};

    // accessing an element::
    cout<<" Value at 2 index "<<second[2]<<endl;
// third value::
    int third[15]={2,7};
    int n=15;
    cout<<" printing the array "<<endl;
    // printing the array
    for(int i=0;i<n;i++){
        cout<< third[i] <<" ";
    }
    // Initalising all locations with 0:
    // Fourth Value::
    int fourth[10]={0};
     n =10;
    cout<<" Printing the array "<<endl;
    // print the array::
    for(int i=0;i<n;i++){
        cout<< fourth[i] <<" ";
    }
    // Initialising all locations with 1 (Not possible with below line)

    int fifth[10]={1};
    n=10;
    cout<<" Printing the array "<<endl;
    // printing the array::
    for(int i=0;i<n;i++){
        cout<< fifth[i] <<" ";
    }
 
    cout<< endl <<"Everything is fine"<<endl;
}