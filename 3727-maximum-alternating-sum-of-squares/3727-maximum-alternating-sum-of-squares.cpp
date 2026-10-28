class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        } 

        sort(nums.begin(),nums.end());

        int i=0,j=nums.size()-1;

        long long score=0;

        while(i<j){
            score+=nums[j]-nums[i];
            i++;
            j--;
        }
        if(i==j){score+=nums[i];}
        return score;

    }
};