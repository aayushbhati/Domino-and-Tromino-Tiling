class Solution {
public:
    const int mod = 1e9 + 7;
    int numTilings(int n) {
        array<int, 3> ans = {1, 1, 2};
        if (n < 3) return ans[n];
        for (int i = 3; i <= n; i++) {
            long long val = (2LL * ans[2] + ans[0]) % mod;
            ans = {ans[1], ans[2], (int)val};
        }
        return ans[2];
    }
};
