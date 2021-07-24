#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <stack>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <sstream>
#include <iomanip>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        temp = nums[n + i];
        cout << temp << endl;
        // cout << *(nums.begin() + n + i) << endl;
        nums.erase(nums.begin() + n + i);

        cout << "DELETE" << endl;
        for (int j : nums)
            cout << j << " ";
        cout << endl;
        nums.insert(nums.begin() + 2 * i + 1, temp);

        for (int j : nums)
            cout << j << " ";
        cout << endl;
    }

    return nums;
}

int32_t main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 3, 2, 1};
    int n = 4;

    shuffle(arr, n);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}