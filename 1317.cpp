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

bool checkIfZero(int x)
{
    while (x)
    {
        int a = x % 10;
        if (a == 0)
            return false;
        x /= 10;
    }
    return true;
}

vector<int> getNoZeroIntegers(int n)
{

    vector<int> arr;

    for (int i = 1; i <= n / 2; i++)
    {
        if (checkIfZero(i) == true)
        {
            if (checkIfZero(n - i) == true)
            {
                arr.push_back(i);
                arr.push_back(n - i);
                return arr;
            }
        }
    }
    return arr;
}

int32_t main()
{
    int n = 1010;

    vector<int> a = getNoZeroIntegers(n);
}