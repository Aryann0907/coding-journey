//reverse integer
#include<iostream>
using namespace std;
int main(){
    int num,rNum=0;
    int neg=0;
    cin>>num;

    while(num!=0){
        int digit=num%10;
        rNum=rNum*10+digit;
        num=num/10;
    }
    
    cout<<rNum;
}