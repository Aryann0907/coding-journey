//2nd Maximum
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,6,9,54,75};

    int n=sizeof(arr)/sizeof(int);
    int max=INT_MIN,sMax=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    for(int i=0;i<n;i++){
        if(arr[i]>sMax && arr[i]!=max){
            sMax=arr[i];
        }
        
    }
    cout<<max<<" max"<<endl;
    cout<<sMax<<" sMax"<<endl;
}