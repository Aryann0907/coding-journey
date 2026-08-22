class Solution {
public:
    int thirdMax(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                arr.erase(arr.begin()+i);
                i--;
            }
        }
        if(arr.size()<3){
            return arr[arr.size()-1];
        }
        else{
            return arr[arr.size()-3];
        }
    }
};