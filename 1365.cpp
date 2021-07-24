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

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> arr = nums;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < arr.size(); i++)
    {
        int idx = find(nums.begin(), nums.end(), arr[i]) - nums.begin();
        arr[i] = idx;
    }

    return arr;
}

int32_t main()
{
    vector<int> nums = {4, 3, 2, 2, 1};
    nums = smallerNumbersThanCurrent(nums);
}