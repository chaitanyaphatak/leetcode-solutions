class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evencount=0;
        for(int i:nums){
            int count = log10(i)+1; //trick
            // while(i!=0){
            //     count++;
            //     i/=10;
            // }

            if(count%2==0){
                evencount++;
            }
        }
        return evencount;
    }
};