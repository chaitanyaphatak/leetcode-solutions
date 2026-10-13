class Solution {
public:
    string removeStars(string s) {
        
        string p = ""; 

        for(char i : s){
            
            if(i=='*'){
                p.pop_back();
            }else{
                p+=i;
            }
        }
        return p;
    }
};