#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroup = 0;
        int currGroup = 1;
        int count = 0;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currGroup++;
            } else {
                count += min(prevGroup, currGroup);
                prevGroup = currGroup;
                currGroup = 1;
            }
        }

        count += min(prevGroup, currGroup);
        return count;
    }
};

int main() {
    Solution obj;
    string s;
    cout << "Enter binary string: ";
    cin >> s;

    cout << "Count of binary substrings: "
         << obj.countBinarySubstrings(s) << endl;

    return 0;
}