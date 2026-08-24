#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string num1="123";
    string num2="29";
    int x=0,y=0;
    //convert num1 to integer
    for(int i=0;i<num1.size();i++){
        int dig=num1[i]-'0';
        x=(x*10)+dig;
    }
    //convert num2 to integer
    for(int i=0;i<num2.size();i++){
        int dig=num2[i]-'0';
        y=(y*10)+dig;
    }
    int sum=x+y;
    string ans;
        while(sum>0){
            char dig=sum%10+'0';
            ans.push_back(dig);
            sum/=10;
        }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}