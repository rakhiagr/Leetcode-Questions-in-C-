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

int countPrimes(int n)
{
    if (n <= 2)
        return 0;

    vector<int> vec(n, 0);
    vec[0] = vec[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if (!vec[i])
        {
            for (int j = 2 * i; j < n; j += i)
            {
                vec[j] = i;
            }
        }
    }

    // for(int i : vec)
    //     cout<<i<<" ";

    int count = 0;
    for (int i : vec)
    {
        if (i == 0)
            count++;
    }

    return count;
}

int32_t main()
{
    int n = 20;
    cout << countPrimes(n);
}