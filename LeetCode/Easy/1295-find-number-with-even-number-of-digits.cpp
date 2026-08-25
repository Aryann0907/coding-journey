class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int evenCount=0;
        
        for(int i=0;i<n;i++){
            int count=0;
            int val=nums[i];
            while(val>0){
                val=val/10;
                count++;
            }
            if(count%2==0){
                evenCount++;
            }
        }
        return evenCount;
    }
};