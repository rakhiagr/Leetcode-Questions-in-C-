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

bool isArmstrong(int n)
{
    long long int num = n, sum = 0;

    string s = to_string(n);
    int x = s.size();
    while (num != 0)
    {
        sum += pow(num % 10, x);
        num /= 10;
    }

    return sum == n;
}

int32_t main()
{
    int n = 153;
    cout << isArmstrong(n);
}