#include<bits/stdc++.h>
using namespace std;

// Hold
void printArray(int arr[],int size){
    cout<<" Printing the array "<<endl;
    // printing the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<< " Printing done "<<endl;
}

int main(){
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
    // printArray(third,15);
    
    // Initalising all locations with 0:
    // Fourth Value::
    int fourth[10]={0};
     n =10;
    // printArray(fourth,10);
    // Initialising all locations with 1 (Not possible with below line)

    int fifth[10]={1};
    n=10;
    // printArray(fifth,10);

    int fifthsize= sizeof(fifth)/sizeof(int);
    cout<<" Size of fifth is "<< fifthsize<<endl;

    char ch[5]={'a','s','d','f','e'};
    cout<< ch[3] <<endl;

    cout<<" Printing the array "<<endl;
    // printing the array
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<< " Printing done "<<endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    // printArray(ch); Because it just takes integer value::

    cout<<" Everything is Good "<<endl;
}