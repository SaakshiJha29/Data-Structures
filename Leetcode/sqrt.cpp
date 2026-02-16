#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        long l = 1, r = x;
        int ans = 0;

        while (l <= r) {
            long mid = l + (r - l) / 2;

            if (mid * mid == x)
                return mid;
            else if (mid * mid < x) {
                ans = mid;
                l = mid + 1;
            } 
            else {
                r = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int x;

    cout << "Enter number: ";
    cin >> x;

    cout << "Square root (floor value): " << obj.mySqrt(x) << endl;

    return 0;
}
