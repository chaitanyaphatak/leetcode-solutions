class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);

        for(int i = 2;i<nums.size();i++){
             if(*(v1.end()-1) > *(v2.end()-1)){
                v1.push_back(nums[i]);
             }else{
                v2.push_back(nums[i]);
             }
        }
         
         vector<int> result(v1.size()+v2.size());
         for(int i = 0 ;i<v1.size();i++){
            result[i] = v1[i];
         }
         for(int i=0;i<v2.size();i++){
            result[v1.size()+i] = v2[i];
         }

         return result;
        
        return result;
    }
};