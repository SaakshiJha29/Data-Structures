class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        for (int i = 0; i < n; i++) {
            int newIndex = ((i + nums[i]) % n + n) % n; // handle negative
            result[i] = nums[newIndex];
        }
        
        return result;
    }
};//3379 transformed array
