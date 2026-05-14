class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDist = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                minDist = min(minDist, abs(i - start));
            }
        }
        
        return minDist;
    }
}; //minimum distance to the largest integer 1848