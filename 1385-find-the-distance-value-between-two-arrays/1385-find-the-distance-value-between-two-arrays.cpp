class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0 , n=arr2.size();
        sort(arr2.begin(),arr2.end());

        for(int i=0;i<arr1.size();i++){
            int j = lower_bound(arr2.begin(),arr2.end(),arr1[i]) - arr2.begin() ;

            if(j==0){
                if(arr2[0]-arr1[i] > d) cnt++;
            }else if(j>=n){
                if(arr1[i]-arr2[n-1] > d) cnt++;
            }else{
                if(arr2[j]-arr1[i] > d && arr1[i]-arr2[j-1] > d){
                    cnt++;
                }
            }
        }
        return cnt;

    }
};