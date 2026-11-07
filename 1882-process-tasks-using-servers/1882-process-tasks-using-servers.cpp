static const int init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n = servers.size(), m = tasks.size();
        const long long MASK = (1 << 18) - 1;

        vector<long long> fr(n), bs;
        bs.reserve(n);
        for (int i = 0; i < n; i++) {
            fr[i] = ((long long)servers[i] << 18) | i;
        }
        make_heap(fr.begin(), fr.end(), greater<long long>());

        vector<int> ans(m);
        long long t = 0;

        for (int j = 0; j < m; j++) {
            if (t < j) t = j;

            if (fr.empty() && (bs.front() >> 18) > t) {
                t = bs.front() >> 18;
            }

            while (!bs.empty() && (bs.front() >> 18) <= t) {
                int idx = bs.front() & MASK;
                pop_heap(bs.begin(), bs.end(), greater<long long>());
                bs.pop_back();
                fr.push_back(((long long)servers[idx] << 18) | idx);
                push_heap(fr.begin(), fr.end(), greater<long long>());
            }

            int idx = fr.front() & MASK;
            pop_heap(fr.begin(), fr.end(), greater<long long>());
            fr.pop_back();

            ans[j] = idx;
            bs.push_back(((t + tasks[j]) << 18) | idx);
            push_heap(bs.begin(), bs.end(), greater<long long>());
        }
        return ans;
    }
};