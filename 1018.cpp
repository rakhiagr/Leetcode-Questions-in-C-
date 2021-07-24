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

vector<bool> prefixesDivBy5(vector<int> &A)
{

    vector<bool> lks;
    int n = 0;
    for (auto x : A)
    {
        n = (n * 2 + x) % 5;
        lks.push_back(n == 0);
    }
    return lks;
}

int32_t main()
{
    vector<int> arr = {1, 0, 1, 1, 0, 0, 1};
    vector<bool> a = prefixesDivBy5(arr);
}