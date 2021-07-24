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

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string first, second;

    for (string i : word1)
    {
        first += i;
    }
    for (string j : word2)
    {
        second += j;
    }

    return first == second;
}

int32_t main()
{
    vector<string> f = {"ab", "c"};
    vector<string> s = {"ac", "b"};

    cout << arrayStringsAreEqual(f, s);
}