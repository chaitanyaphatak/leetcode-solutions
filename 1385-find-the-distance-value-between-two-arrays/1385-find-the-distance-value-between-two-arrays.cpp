class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
      //brute force
       int cnt=0;

       for(int i:arr1){

           bool ok=true;
           for(int j:arr2){
               if(abs(i-j)<=d){
                ok=false;
                break;
               }
           }
           if(ok){
            cnt++;
           }
       }
        return cnt;
    }
};