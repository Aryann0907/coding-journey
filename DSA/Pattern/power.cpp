#include<iostream>
using namespace std;
int main(){
    int power=4;
    
    int n=5;
    int num=n;
    for(int i=1;i<power;i++){
        num=num*n;
    }
    cout<<num;
}