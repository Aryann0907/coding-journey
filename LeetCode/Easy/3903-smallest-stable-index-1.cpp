class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();

        vector<int> prefixMax(n);
        vector<int> suffixMin(n);

        // Prefix maximum
        int big = nums[0];

        for (int i = 0; i < n; i++) {
            big = max(big, nums[i]);
            prefixMax[i] = big;
        }

        // Suffix minimum
        int small = nums[n - 1];

        for (int i = n - 1; i >= 0; i--) {
            small = min(small, nums[i]);
            suffixMin[i] = small;
        }

        // Find first stable index
        for (int i = 0; i < n; i++) {
            if (prefixMax[i] - suffixMin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};