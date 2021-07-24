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

int subtractProductAndSum(int n)
{
    int product = 1, sum = 0;

    while (n != 0)
    {
        int x = n % 10;
        product *= x;
        sum += x;

        n /= 10;
    }
    return product - sum;
}

int32_t main()
{
    int n = 123;
    cout << subtractProductAndSum(n);
}