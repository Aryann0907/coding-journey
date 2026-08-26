class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]-1)*(nums[j]-1)>max){
                    max=(nums[j]-1)*(nums[i]-1);
                }
            }
        }
        return max;
    }
};