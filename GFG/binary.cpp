class Solution {
public:
    int binarysearch(vector<int> &arr, int k) {
        int l = 0, h = arr.size() - 1;
        int ans = -1;

        while (l <= h) {
            int m = l + (h - l) / 2;

            if (arr[m] == k) {
                ans = m;
                h = m - 1;   // move left for first occurrence
            }
            else if (arr[m] > k) {
                h = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return ans;
    }
};