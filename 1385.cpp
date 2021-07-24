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

int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
{
    int ans = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        ++ans;
        for (int j = 0; j < arr2.size(); j++)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
            {
                --ans;
                break;
            }
        }
    }
    return ans;
}

int32_t main()
{
    vector<int> a = {1, 3, 6};
    vector<int> b = {3, 4, 6, 8, 9};
    int d = 2;

    cout << findTheDistanceValue(a, b, d);
}