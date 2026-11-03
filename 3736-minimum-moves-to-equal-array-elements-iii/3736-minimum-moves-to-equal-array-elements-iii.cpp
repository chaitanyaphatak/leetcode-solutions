class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0,max_el=INT_MIN;
        int n =nums.size();
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            max_el = max(max_el,nums[i]);
        }  
        return ( n * max_el ) - sum ;
    }
};