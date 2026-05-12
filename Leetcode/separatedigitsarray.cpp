class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        
        for (int num : nums) {
            vector<int> temp;
            
            // extract digits (reverse order)
            while (num > 0) {
                temp.push_back(num % 10);
                num /= 10;
            }
            
            // reverse to maintain original order
            reverse(temp.begin(), temp.end());
            
            // add to result
            for (int digit : temp) {
                result.push_back(digit);
            }
        }
        
        return result;
    }
};