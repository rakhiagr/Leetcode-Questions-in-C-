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

int maximum69Number(int num)
{
    string str = to_string(num);
    int i = 0;
    while (i < str.size())
    {
        if (str[i] == '6')
        {
            str[i] = '9';
            break;
        }
        i++;
    }
    return stoi(str);
}

int32_t main()
{
    int n = 999696;
    cout << maximum69Number(n);
}