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

int minStartValue(vector<int> &nums)
{
    int sum = 0, temp = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        temp = temp + nums[i];
        if (temp < sum)
            sum = temp;
    }
    return abs(sum) + 1;
}

int32_t main()
{
    vector<int> nums = {-3, 2, -1, 5};
    cout << minStartValue(nums);
}