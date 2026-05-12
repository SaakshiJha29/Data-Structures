class Solution {
public:
    bool rotateString(string s, string goal) {
        // lengths must match
        if (s.length() != goal.length()) return false;
        
        // check if goal is substring of s+s
        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};