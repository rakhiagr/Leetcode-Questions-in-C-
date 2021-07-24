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

string restoreString(string s, vector<int> &indices)
{
    map<int, char> m;

    for (int i = 0; i < s.size(); i++)
    {
        m.insert(make_pair(indices[i], s[i]));
    }

    string a;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        a = a + it->second;
    }

    return a;
}

int32_t main()
{
    string x = "codeleet";
    vector<int> v = [ 4, 5, 6, 7, 0, 2, 1, 3 ];

    cout << restoreString(x, v);
}