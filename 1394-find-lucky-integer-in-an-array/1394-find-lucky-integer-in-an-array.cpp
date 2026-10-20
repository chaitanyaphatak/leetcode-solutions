class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        
        for(int i:arr){
            if(m.find(i)!=m.end()){
                m[i]++;
                
            }else{
               m[i] = 1; 
            }
            
        }
        int ans = -1;
        for(auto [k,v]:m){
            if(k == v){
                ans=max(ans,k);
            }
        }
        

        return ans;
    }
};