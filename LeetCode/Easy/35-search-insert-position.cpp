class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        int idx=nums.size();
        int mid;
        while(st<=end){
            mid=(st+end)/2;
            if(nums[mid]==target){
                idx=mid;
                break;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else{
                idx=mid;
                end=mid-1;
            }
        }
        return idx;
    }
};