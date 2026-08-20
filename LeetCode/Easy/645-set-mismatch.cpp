class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
    vector<int> vec(n+1,0);
    vector<int> ans;
        for(int i=0;i<n;i++){
            int val=nums[i];
            vec[val]+=1;
        }

    for(int i=1;i<n+1;i++){
        if(vec[i]>=2){
            ans.push_back(i);
        
        }
    }
    for(int i=1;i<n+1;i++){
        if(vec[i]==0){
            ans.push_back(i);
        }
    }
        return ans;
    }
};