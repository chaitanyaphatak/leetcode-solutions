class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length()){return false;}
       unordered_map<char,int>m;
       int i=0;
       while(i<s.length()){
           m[s[i]]++;
           i++;
       }

       for(char i:t){
           if(m.find(i)!=m.end()){
               m[i]--;
           }
       }
       
       for(auto [k,v]:m){
            if(v==0){
                continue;
            }
            return false;
       }
       return true;
    }
};