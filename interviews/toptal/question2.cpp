#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <sstream>
#include <iterator>
#include <array>

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long ll;
#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL

// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define REP(i, j, n) for (int i = (j); i<= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)

#include <math.h>
#include <vector>
#include <iostream>

vector<int> solution(vector<int> &A) {
    vector<int> result;

    result.push_back(A.front());

    int carry = 0;

    for (int i = 0; i < A.size() - 1; i++) {
        int n = A[i] + A[i + 1] + carry;
        result.push_back(n % 2);

        if (n > 1) {
            carry = -1;
        } else {
            carry = 0;
        }
    }

    result.push_back(A.back() + carry);

    while (result.back() == 0) {
        result.pop_back();
    }

    return result;
}


void printVector(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

vector<int> createVector(int nums[], int n) {
    vector<int> vec;

    rep(i, n) {
        vec.push_back(nums[i]);
    }

    return vec;
}

void solve(int nums[], int n) {
    vector<int> input = createVector(nums, n);

    vector<int> result = solution(input);

    printVector(input);
    printVector(result);
}

int main() {
    int nums[] = {1, 0, 0, 1, 1}, n = 5;

    solve(nums, n);

    cout << "----" << endl;

    int nums2[] = {1, 0, 0, 1, 1, 1}, n2 = 6;

    solve(nums2, n2);

    return 0;
}
