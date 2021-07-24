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

bool isHappy(int n)
{
    int i = 0;
    int digSquareSum = 0;
    while (i < 100)
    {
        digSquareSum = 0;
        while (n)
        {
            digSquareSum += pow((n % 10), 2);
            n = n / 10;
        }
        n = digSquareSum;
        // cout<<digSquareSum<<" ";
        if (digSquareSum == 1)
            return true;
        i++;
    }
    return false;
}

int32_t main()
{
    int n = 43;
    cout << isHappy(n);
}