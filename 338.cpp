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

vector<int> countBits(int num)
{
    vector<int> nums;

    for (int i = 0; i <= num; i++)
    {
        nums.push_back(__builtin_popcount(i));
    }
    return nums;
}

int32_t main()
{
    int n;
    vector<int> v = countBits(n);
}