class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> m;
        
        for(int i :nums){

            if(m.contains(i)){
                return true;
            }

            m.emplace(i);


        }
        return false;
    }
};