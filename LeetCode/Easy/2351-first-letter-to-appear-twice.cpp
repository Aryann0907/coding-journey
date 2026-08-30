class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> occurance(26,0);
        int index;
        for(int i=0;i<s.size();i++){
            int ch=s[i]-'a';
            occurance[ch]++;
            if(occurance[ch]==2){
                index=i;
                break;
            }
        }
        return s[index];
    }
};