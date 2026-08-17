//sort a string in O(N)

#include <iostream>
using namespace std;
#include<string>
#include<vector>
int main() {
   vector<int> check(26,0);
   string s="ebedabda";
   int n=s.size();

   for(int i=0;i<n;i++){
        int index=s[i]-'a';
        check[index]++;
   }
   string ans;
    for(int i=0;i<26;i++){
        char c='a'+ i;
        while(check[i]){
            ans+=c;
            check[i]--;
        }
    }
    cout<<ans;
}