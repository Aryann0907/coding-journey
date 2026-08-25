class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mostCand=INT_MIN;
        int n=candies.size();
        vector<bool> result;
        //find the most number of candies
        for(int i=0;i<n;i++){
            if(candies[i]>mostCand){
                mostCand=candies[i];
            }
        }
        //checking
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=mostCand){
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
        
    }
};