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

bool isPowerOfThree(int n)
{
    long long int temp = 1;

    while (temp < n)
    {
        temp *= 3;
    }

    return temp == n;
}

int32_t main()
{
    int n = 729;
    cout << isPowerOfThree(n);
}