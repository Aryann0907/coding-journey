class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                //erase delete the element and shift the index
                nums.erase(nums.begin()+i);
                i--;//check the shifted element
            }
        }
        // sort(nums.begin(),nums.begin()+nums.size()+1);
        return nums.size();
        
    }
};