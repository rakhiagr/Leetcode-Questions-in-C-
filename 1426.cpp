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

int countElements(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        auto it = find(arr.begin(), arr.end(), arr[i] + 1);
        if (it != arr.end())
            count++;
    }
    return count;
}

int32_t main()
{
    vector<int> v = {1, 3, 2, 3, 5, 0};
    cout << countElements(v);
}