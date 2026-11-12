class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       if(nums.size()==1) return 1;
       int inc = 1;
       int ans1=0;
       for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[i-1]){
            inc++;
        }else{
            ans1=max(ans1,inc);
            inc=1;
        }
        ans1=max(ans1,inc);
       } 

       int dec = 1;
       int ans2=0;
       for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            dec++;
        }else{
            ans2=max(ans2,dec);
            dec=1;
        }
        ans2=max(ans2,dec);
       } 
       return max(ans1,ans2);
    }
};