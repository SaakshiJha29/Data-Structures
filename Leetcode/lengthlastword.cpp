#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter sentence: ";
    getline(cin, s);

    cout << "Length of last word: "
         << obj.lengthOfLastWord(s) << endl;

    return 0;
}