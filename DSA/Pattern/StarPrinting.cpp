#include<iostream>
using namespace std;
int main(){

    //left handed triangle
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //left handed number triangle
    
    // for(int i=1;i<=5;i++){
    //     int count=1;
    //     for(int j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //left handed number like 1 2 3 in each row triangle

    // int count=1;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count<<" ";
    //     }
    //     count++;
    //     cout<<endl; 
    // }

    //printing in reverse number 

    // for(int i=1;i<=5;i++){
    //     for(int j=i;j>=1;j--){
    //         cout<<j<<" ";
            
    //     }
    //     cout<<endl;
    // }

    //alphabet pattern
    // char ch='a';
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    //inverted star printing
    // for(int i=1;i<=5;i++){
    //     for(int j=5;j>=i;j--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //inverted number printing
    // for(int i=1;i<=5;i++){
    //     int count=1;
    //     for(int j=5;j>=i;j--){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //reverse order number printing
    for(int i=1;i<=5;i++){
        int count=5;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
}