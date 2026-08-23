#include<iostream>
using namespace std;
int main(){
    string s="Myself2 Me1 I4 and3";
   
    vector<string> ans(9,"");
    
    string temp;
    for (int i=0;i<s.size();i++){
        
        temp+=s[i];
        if(s[i]==' ' || i + 1 == s.size()){
            if(s[i]==' '){
                temp.pop_back();
            }
            int index=temp[temp.size()-1]-'1';
            temp.pop_back();
            ans[index]=temp;
            temp="";
        }
    }
    for(int i=0;i<9;i++){
        cout<<ans[i]<<" ";
    }

    
}