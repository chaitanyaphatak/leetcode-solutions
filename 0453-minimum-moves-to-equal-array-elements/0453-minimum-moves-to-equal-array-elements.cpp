class Solution {
public:
   
    int minMoves(vector<int>& nums) {
        // int sum = 0,min_el = INT_MAX;
        // for(int  i =0;i<nums.size();i++){
        //     sum+=nums[i];
        //     min_el = min(min_el,nums[i]);
        // }
        // return sum-(nums.size()*min_el);

        //new approach
        int sum = accumulate(nums.begin(),nums.end(),0);
        int min_el = *min_element(nums.begin(),nums.end());

        return sum -( nums.size() * min_el);
    }
};