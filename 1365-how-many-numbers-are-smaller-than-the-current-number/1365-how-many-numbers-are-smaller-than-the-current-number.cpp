class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> output;
        for(int i :nums){
            int count=0;
            for(int j:nums){
                if(j<i){
                    count++;
                }
            }
            output.push_back(count);

        }
        return output;
    }
};