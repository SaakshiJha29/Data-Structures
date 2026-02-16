#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(int nums[], int n) {
        if(n == 0) return 0;

        int i = 0;

        for(int j = 1; j < n; j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution sol;

    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = sol.removeDuplicates(nums, n);

    cout << "Unique length: " << k << endl;
    cout << "Array after removing duplicates: ";

    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }

    return 0;
}
