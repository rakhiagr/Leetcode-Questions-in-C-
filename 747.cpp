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

int dominantIndex(vector<int> &nums)
{
    int flag = 0;
    int add = max_element(nums.begin(), nums.end()) - nums.begin();
    int m = nums[add];
    for (int i = 0; i < nums.size(); i++)
    {
        if (i != add && m < 2 * nums[i])
            flag++;
    }
    return flag == 0 ? add : -1;
}

int32_t main()
{
    vector<int> n = {1, 7, 8, 6, 18};
    cout << dominantIndex(n);
}