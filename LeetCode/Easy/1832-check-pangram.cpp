class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> check(26,0);
        for(int i=0;i<sentence.size();i++){
            int index=sentence[i]-'a';
            check[index]=1;
        }

        for(int i=0;i<26;i++){
            if(check[i]==0){
                return 0;
            }
        }
        return 1;
    }
}; 