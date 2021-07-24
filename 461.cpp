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

int hammingDistance(int x, int y)
{
    int xBits, yBits;
    if (x > 0)
        xBits = (int)log2(x) + 1;
    if (y > 0)
        yBits = (int)log2(y) + 1;
    int count = xBits < yBits ? yBits : xBits;

    int i = 0;
    int flag = 0;
    while (i < count)
    {

        bool a = x & 1;
        bool b = y & 1;
        if (a != b)
            flag++;
        // cout<<i<<" "<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<flag<<endl;
        if (x != 0)
            x >>= 1;
        if (y != 0)
            y >>= 1;

        i++;
    }
    return flag;
}

int32_t main()
{
    int a = 43;
    int b = 24;

    cout << hammingDistance(a, b);
}