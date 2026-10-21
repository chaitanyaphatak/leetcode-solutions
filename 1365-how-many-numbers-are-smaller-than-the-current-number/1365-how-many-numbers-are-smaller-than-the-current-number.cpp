class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>s = nums;
        sort(s.begin(),s.end());
        vector<int> output;
        for(int x:nums){
            int lwer=lower_bound(s.begin(),s.end(),x)-s.begin();
            output.push_back(lwer);
        }
        return output;
    }
};