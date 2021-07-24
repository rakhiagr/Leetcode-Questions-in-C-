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

int heightChecker(vector<int> &heights)
{
    vector<int> arr = heights;
    sort(arr.begin(), arr.end());
    int count = 0;

    for (int i = 0; i < heights.size(); i++)
    {
        if (arr[i] != heights[i])
            count++;
    }
    return count;
}

int32_t main()
{
    vector<int> v = {1, 5, 3, 7, 3, 2, 1};
    cout << heightChecker(v);
}