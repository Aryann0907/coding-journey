class Solution {
public:
    int mySqrt(int x) {
        if (x<2){
            return x;
        }
        int st=0;
        int end=x;
        int ans;
        while(st<=end){
            int mid=(st+end)/2;
            if(mid==x/mid){
                ans=mid;
                break;
            }
            else if(mid<x/mid){
                    ans=mid;
                    st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
        
    }
};