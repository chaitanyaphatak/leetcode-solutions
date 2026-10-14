class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> m;
        
        for(int i =0;i<nums.size();i++){

            if(m.contains(nums[i])){
                return true;
            }

            m.insert(nums[i]);


        }
        return false;
    }
};