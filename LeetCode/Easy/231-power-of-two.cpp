class Solution {
public:
    bool isPowerOfTwo(int n) {

        long long power=1;
        if (n==1){
            return true;
        }
        for(int i=1;power<=n;i++){
            power=power*2;
            
            if(power==n){
            return true;
        }
        }
            return false;
    
    }
};