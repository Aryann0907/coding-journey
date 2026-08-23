#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="abaabccddcddAAA";

    vector<int> ans(26,0);
    vector<int> caps(26,0);

    for(int i=0;i<s.size();i++){
        int c=s[i]-'a';
        if(c>=0){
            ans[c]++;
        }
        else{
            int c=s[i]-'A';
            caps[c]++;
        }
    }
    int length=0;
    int odd=0;
    // for small letters
    for(int i=0;i<26;i++){
        if(ans[i]%2==0){
            length+=ans[i];
        }
        else{
            length+=ans[i]-1;
            odd++;

        }
    }

    //for capital letter
    for(int i=0;i<26;i++){
        if(caps[i]%2==0){
            length+=caps[i];
        }
        else{
            length+=caps[i]-1;
            odd++;

        }
    }
    if(odd==0){
        cout<<length<<endl;
    }
    else{
        cout<<length+1;
    }

}