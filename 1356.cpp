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

vector<int> sortByBits(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (__builtin_popcount(arr[i]) > __builtin_popcount(arr[j]) || (__builtin_popcount(arr[i]) == __builtin_popcount(arr[j]) && (arr[i] > arr[j])))
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

int32_t main()
{
    vector<int> arr = {2, 5, 8, 3};
    arr = sortByBits(arr);
}