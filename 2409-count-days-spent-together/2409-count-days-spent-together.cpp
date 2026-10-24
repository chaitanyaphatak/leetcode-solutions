class Solution {
public:

    int toDay(string s,vector<int>& prefix){

        int month,days;

        month = stoi(s.substr(0,2));

        days = stoi(s.substr(3,5));

        return (month==1)?0+days:prefix[month-2]+days;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> m = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i=1;i<m.size();i++){
            m[i] += m[i-1];
        }

        int start_alice = toDay(arriveAlice,m);   
        int start_bob = toDay(arriveBob,m);   
        int end_alice = toDay(leaveAlice,m);   
        int end_bob = toDay(leaveBob,m);
        
        int start = max(start_alice,start_bob);
        int end =min(end_alice,end_bob);

        return max(0,end-start+1);


    }
};
