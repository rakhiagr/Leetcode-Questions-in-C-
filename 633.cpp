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

bool judgeSquareSum(int c)
{
    for (long int i = 0; i * i <= c; i++)
    {
        double x = sqrt(c - i * i);
        if (x == (int)x)
            return true;
    }
    return false;
}

int32_t main()
{
    int c = 5;

    cout << judgeSquareSum(c);
}