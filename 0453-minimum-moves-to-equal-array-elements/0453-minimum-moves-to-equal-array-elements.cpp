class Solution {
public:
   
    int minMoves(vector<int>& nums) {
        int sum = 0,min_el = INT_MAX;
        for(int  i =0;i<nums.size();i++){
            sum+=nums[i];
            min_el = min(min_el,nums[i]);
        }
        return sum-(nums.size()*min_el);
    }
};