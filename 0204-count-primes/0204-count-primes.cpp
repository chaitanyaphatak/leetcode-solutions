class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        vector<bool> vec(n,true);
        vec[0] = vec[1] = false; //Just for understand actually not needed
        int prime=0;
        for(int i=2;i<n;i++){
            if(vec[i]){
                prime++;
                for(int j = i*2 ;j<n;j+=i){
                    vec[j] = false;
                }
            }
            
        }
        return prime;
    }
};