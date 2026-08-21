#include<iostream>
using namespace std;
int main(){

    //Add digit
    int num=83;
    int sum;
    while(num>9){
        sum=0;
        while(num>0){
            int digit=num%10;
            sum+=digit;
            num=num/10;
        }
        num=sum;
    }
    cout<<sum;
}