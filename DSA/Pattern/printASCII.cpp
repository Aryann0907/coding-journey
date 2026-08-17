#include<iostream>
using namespace std;
int main(){
    //ASCII printing

    for(int row=1;row<=5;row++){
        char ch='a';
        for(int col=1;col<=5;col++){
            cout<<ch+col-1<<" ";
        }
        cout<<endl;
    }

    
}