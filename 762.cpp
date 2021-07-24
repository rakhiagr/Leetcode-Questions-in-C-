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

bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int countPrimeSetBits(int L, int R)
{
    int count = 0;
    for (int i = L; i <= R; i++)
    {
        int n = __builtin_popcount(i);
        if (checkPrime(n) == true)
        {

            count++;
        }
    }
    return count;
}

int32_t main()
{
    int L = 243, R = 446;
    cout << countPrimeSetBits(L, R);
}