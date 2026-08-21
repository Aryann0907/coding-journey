#include<iostream>
using namespace std;

int main(){

    int arr[]={111,4,2,18,5,9};
    int n=sizeof(arr)/sizeof(int);

    // search
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"target found at index: "<<i;
            break;
        }
    }
}