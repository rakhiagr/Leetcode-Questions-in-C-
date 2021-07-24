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

bool containsDuplicate(vector<int> &nums)
{
    set<int> s;

    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    if (s.size() == nums.size())
        return false;
    else
        return true;
}

int32_t main()
{
    vector<int> vec = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << containsDuplicate(vec);
}