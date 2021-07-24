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

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> arr;

    for (int i = 0; i < nums.size(); i++)
    {
        arr.insert(arr.begin() + index[i], nums[i]);
    }
    return arr;
}

int32_t main()
{
    vector<int> arr = {0, 1, 1, 2};
    vector<int> nums = {0, 1, 3, 5};

    vector<int> a = createTargetArray(arr, nums);
}