#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findFloor(vector<long long> v, long long n, long long x) {
        int low = 0, high = n - 1;
        int floorIndex = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (v[mid] == x) {
                return mid; 
            } else if (v[mid] < x) {
                floorIndex = mid; 
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return floorIndex;
    }
};

int main() {
    Solution sol;
    
    vector<long long> v1 = {1, 2, 8, 10, 11, 12, 19};
    long long x1 = 0;
    cout << "Floor index of " << x1 << " is " << sol.findFloor(v1, v1.size(), x1) << endl;

    vector<long long> v2 = {1, 2, 8, 10, 11, 12, 19};
    long long x2 = 5;
    cout << "Floor index of " << x2 << " is " << sol.findFloor(v2, v2.size(), x2) << endl;

    vector<long long> v3 = {1, 2, 8, 10, 11, 12, 19};
    long long x3 = 10;
    cout << "Floor index of " << x3 << " is " << sol.findFloor(v3, v3.size(), x3) << endl;

    vector<long long> v4 = {1, 2, 8, 10, 11, 12, 19};
    long long x4 = 20;
    cout << "Floor index of " << x4 << " is " << sol.findFloor(v4, v4.size(), x4) << endl;

    return 0;
}
