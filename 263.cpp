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

vector<int> primes{2, 3, 5};
bool isUgly(int n)
{
    if (n <= 0)
        return false;

    else
    {
        for (int i : primes)
        {
            while (n % i == 0)
            {
                n = n / i;
            }
        }
    }
    return n == 1;
}

int32_t main()
{
    int n = 43;
    cout << isUgly(n);
}