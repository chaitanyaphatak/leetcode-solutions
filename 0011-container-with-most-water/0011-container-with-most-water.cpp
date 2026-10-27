class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0,j=height.size()-1;
         int m = 0;

         while(i<j){
            int s = (j-i) * min(height[i],height[j]);
             m = max(m,s);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        
        }
        return m;
    }    
};