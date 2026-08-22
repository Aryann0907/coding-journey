class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n;
        while(num){
            int n=num;
            int product=1;
            while(n>0){
                int digit=n%10;
                product=product*digit;
                n=n/10;
            }
            if(product%t==0){
                break;
            }
            else{
                num++;
            }
        }
        return num;
    }
};