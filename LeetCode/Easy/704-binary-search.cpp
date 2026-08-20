class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0;
        int n = nums.size();
        int end=n-1;
        for(int i=0;i<n;i++){
            int mid=(st+end)/2;
            if(nums[mid]==target){
                return mid;
                break;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};