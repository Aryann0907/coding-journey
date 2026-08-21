#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,5};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arrSum=0;
    //sum of numbers in array
    for(int i=0;i<n;i++){
        arrSum+=arr[i];
    }
    //sum of all numbers
    int tSum=0,st=arr[0];

    while(st<=arr[n-1]){
        tSum=tSum+st;
        st++;
    }
    cout<<arrSum<<endl;
    cout<<tSum<<endl;
    cout<<"missing number="<<tSum-arrSum<<endl;
}