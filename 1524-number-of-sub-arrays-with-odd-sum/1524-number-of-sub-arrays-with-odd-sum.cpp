class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
       int cur_sum=0;
       int odd_cnt = 0;
       int even_cnt = 0;
       long long res = 0;
       int MOD = 1e9+7;
       for(int i:arr){
        cur_sum+=i;
        if(cur_sum%2!=0){
             res=(res+1+even_cnt) % MOD;
             odd_cnt+=1;
        }else{
            res=(res+odd_cnt) % MOD;
            even_cnt+=1;
        }

       }
       return res;


    }
};