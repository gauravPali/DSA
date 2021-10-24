#include <bits/stdc++.h>
using namespace std;
vector<int> arr{3, 6};
vector<int> res;
int k = 3;

void subsequence(int currIndex) {
    if (currIndex == arr.size()) {
        for (int i : res) {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    res.push_back(arr[currIndex]);
    // 11 22 33
    subsequence(currIndex + 1);
    res.pop_back();
    subsequence(currIndex + 1);
}

int subsequenceDivisible(int currIndex, int sum) {
    int count = 0;
    if (currIndex == arr.size()) {
        cout << (sum % k == 0) << endl;
        return (sum % k == 0);
    }
    sum += arr[currIndex];
    count = subsequenceDivisible(currIndex + 1, sum);
    sum -= arr[currIndex];
    count = count + subsequenceDivisible(currIndex + 1, sum);
    return count;
}

int main() {
    subsequence(0);
    cout << subsequenceDivisible(0, 0) - 1 << endl;
    return 0;
}
