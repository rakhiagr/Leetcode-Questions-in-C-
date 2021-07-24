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

int divisors(int n)
{

    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            if (n / i == i)
            {

                v.push_back(i);
            }
            else
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
    if (v.size() == 4)
    {

        int sum = accumulate(v.begin(), v.end(), 0);
        return sum;
    }
    return 0;
}
int sumFourDivisors(vector<int> &nums)
{
    int ans = 0;
    for (auto x : nums)
    {

        ans += divisors(x);
    }
    return ans;
}

int32_t main()
{
    vector<int> arr = {34, 98, 45};

    cout << sumFourDivisors(arr);
}