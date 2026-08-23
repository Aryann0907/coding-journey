#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s="lYmpH";
    // vector<string> vowels(s.size(),"");
    string vowels="";

    for(int i=0;i<s.size();i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            vowels=vowels+s[i];
        }
    }
    
    sort(vowels.begin(),vowels.end());
    cout<<vowels<<endl;
    int j=0;
    for(int i=0;i<s.size();i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            s[i]=vowels[j];
            j++;
        }
    }

    cout<<s;
}