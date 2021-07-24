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

vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> v;
    v.push_back(first);
    for (auto i : encoded)
    {
        v.push_back(i ^ first);
        first ^= i;
    }
    return v;
}

int32_t main()
{
    vector<int> a = {1, 2, 5, 8};
    int first = 4;

    a = decode(a, first);
}