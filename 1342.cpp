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

int numberOfSteps(int num)
{

    int steps = 0;
    while (num != 0)
    {
        if (!(num & 1))
            num = num >> 1;
        else
            num -= 1;
        steps++;
    }
    return steps;
}

int32_t main()
{
    int num = 1235;
    cout << numberOfSteps(num);
}