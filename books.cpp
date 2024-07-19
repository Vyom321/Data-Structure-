#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int cntStudents(vector<int>& vec, int pages) {
    int n = vec.size();
    int students = 1;
    long long pagesstudents = 0;
    for(int i = 0; i < n; i++) {
        if(pagesstudents + vec[i] <= pages) {
            pagesstudents += vec[i];
        } else {
            students++;
            pagesstudents = vec[i];
        }
    }
    return students;
}

int findPages(vector<int>& vec, int n, int m) {
    if(m > n) {
        return -1;
    }
    int low = *max_element(vec.begin(), vec.end());
    int high = accumulate(vec.begin(), vec.end(), 0);
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int students = cntStudents(vec, mid);
        if(students > m) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

int main() {
    vector<int> vec = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(vec, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
