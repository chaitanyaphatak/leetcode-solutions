class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            sum=sum+(digit*digit);
            n/=10; 
        }
        if(sum>9){
            return isHappy(sum);
        }else{
            return (sum==1 || sum==7) ? true:false; 
        }
    }
};