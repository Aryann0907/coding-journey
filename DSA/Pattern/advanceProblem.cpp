#include<iostream>
using namespace std;
int main(){
    // pyramid
    int n=7;
    for(int row=1;row<=n;row++){
        //print space
        for(int j=1;j<=n-row;j++){
            cout<<"  ";
        }
        //print star
        for(int st=1;st<=((2*row)-1);st++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //number pyramid
    // int n=5;
    // for(int row=1;row<=n;row++){
    //     int count=1;
    //     //print space
    //     for(int j=1;j<=n-row;j++){
    //         cout<<"  ";
    //     }
    //     //print right order number
    //     for(int k=1;k<=row;k++){
    //         cout<<k<<" ";
    //         count++;
    //     }
    //     //print reverse number
    //     for(int l=row-1;l>=1;l--){
    //         cout<<l<<" ";
    //     }
    //     cout<<endl;
    // }

    // inverted pyramid
    // int n=5;
    // for(int row=1;row<=n;row++){
    //     //print space
    //     for(int j=row-1;j>=1;j--){
    //         cout<<"  ";
    //     }
    //     //print star
    //     for(int st=1;st<=((2*(n-row))+1);st++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // //hollow shape
    // int n=4;
    // //upper half
    // for(int row=1;row<=n;row++){
    //     //print star
    //     for(int st=n;st>=row;st--){
    //         cout<<"* ";
    //     }
    //     //print space
    //     for(int sp=1;sp<=2*(row-1);sp++){
    //         cout<<"  ";
    //     }

    //     //print star
    //     for(int st=n;st>=row;st--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // //lower half
    // for(int row=1;row<=n;row++){
    //     //print star
    //     for(int st=1;st<=row;st++){
    //         cout<<"* ";
    //     }
    //     //print space
    //     for(int sp=1;sp<=2*(n-row);sp++){
    //         cout<<"  ";
    //     }
    //     //print star
    //     for(int st=1;st<=row;st++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
}