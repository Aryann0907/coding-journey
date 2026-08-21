#include<iostream>
using namespace std;
int main(){
    //reverse

    int arr[]={111,4,2,18,5,9};
    int n=sizeof(arr)/sizeof(int);
    int st=0,end=n-1;
    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}