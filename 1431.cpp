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

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int m = *max_element(candies.begin(), candies.end());
    vector<bool> result(candies.size(), false);

    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] + extraCandies >= m)
            result[i] = true;
    }
    return result;
}

int32_t main()
{
    vector<int> v = {2, 3, 5, 1, 3};
    int extra = 4;

    vector<bool> result = kidsWithCandies(v, extra);

    for (bool i : result)
    {
        cout << i << endl;
    }
}