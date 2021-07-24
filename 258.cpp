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

int addDigits(int num)
{
    long long int x = num, sum = 0;
    while (1)
    {
        if (num / 10 == 0)
            return num;
        sum = 0;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
}

int32_t main()
{
    int n = 34;
    cout << addDigits(n);
}