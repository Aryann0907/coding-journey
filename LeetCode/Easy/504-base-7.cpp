class Solution {
public:
    string convertToBase7(int num) {
        string answer="";
        
        //for negative numbers
        bool negative=0;
        if (num<0){
            num=-num;
            negative=1;
        }

        //for handling num=0
        if(num==0){
            return "0";
        }

        //for positive numbers
        while(num>0){
            int rem=num%7;
            int quot=num/7;
            answer+=to_string(rem);
            num=num/7;
        }
        reverse(answer.begin(),answer.end());
        
        if (negative){
            answer= "-"+answer;
            return answer;
        }
        else{
            return answer;
        }
        
    }
};