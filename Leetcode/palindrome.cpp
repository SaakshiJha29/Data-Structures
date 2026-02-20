#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindrome
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        // Reverse only half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For even digits: x == reversedHalf
        // For odd digits: x == reversedHalf / 10
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};

int main() {
    Solution obj;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (obj.isPalindrome(num))
        cout << num << " is a Palindrome number." << endl;
    else
        cout << num << " is NOT a Palindrome number." << endl;

    return 0;
}