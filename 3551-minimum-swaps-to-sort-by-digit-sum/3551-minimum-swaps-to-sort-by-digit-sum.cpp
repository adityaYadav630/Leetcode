class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<pair<int,int>> a;
        for (int x : nums) {
            int s = 0, y = x;
            while (y) {
                s += y % 10;
                y /= 10;
            }
            a.push_back({s, x});
        }
        sort(a.begin(), a.end());
        unordered_map<int,int> pos;
        for (int i = 0; i < n; i++) pos[a[i].second] = i;
        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;
            int j = i, cnt = 0;
            while (!vis[j]) {
                vis[j] = true;
                j = pos[nums[j]];
                cnt++;
            }
            ans += max(0, cnt - 1);
        }
        return ans;
    }
};