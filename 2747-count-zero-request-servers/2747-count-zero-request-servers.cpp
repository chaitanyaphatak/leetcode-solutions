class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int L = logs.size(), Q = queries.size();

        vector<int> li(L), qi(Q);
        iota(li.begin(), li.end(), 0);
        iota(qi.begin(), qi.end(), 0);

        sort(li.begin(), li.end(), [&](int a, int b) { return logs[a][1] < logs[b][1]; });
        sort(qi.begin(), qi.end(), [&](int a, int b) { return queries[a] < queries[b]; });

        vector<int> freq(n + 1), ans(Q);
        int active = 0, l = 0, r = 0;

        for (int k = 0; k < Q; k++) {
            int idx = qi[k], t = queries[idx];

            while (r < L && logs[li[r]][1] <= t) {
                if (freq[logs[li[r]][0]]++ == 0) active++;
                r++;
            }
            while (l < r && logs[li[l]][1] < t - x) {
                if (--freq[logs[li[l]][0]] == 0) active--;
                l++;
            }
            ans[idx] = n - active;
        }
        return ans;
    }
};