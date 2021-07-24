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

bool isPerfectSquare(int num)
{

    if (num == 1)
        return true;
    for (long int i = 1; i * i <= num; i++)
    {
        if (num % i == 0 && i * i == num)
        {
            return true;
        }
    }
    return false;
}

int32_t main()
{
    int n = 456;
    cout << isPerfectSquare(n);
}