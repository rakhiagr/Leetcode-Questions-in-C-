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

int xorOperation(int n, int start)
{
    int res = start, i = 1;

    while (i <= n - 1)
    {
        int val = start + (2 * i);
        res = res ^ val;
        i++;
    }
    return res;
}

int32_t main()
{
    int n = 5;
    int start = 3;

    cout << xorOperation(n, start);
}