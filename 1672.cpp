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

int maximumWealth(vector<vector<int> > &accounts)
{

    int m = 0, temp;
    for (int i = 0; i < accounts.size(); i++)
    {
        for (int j = 0; j < accounts[i].size(); j++)
        {
            temp = temp + accounts[i][j];
        }
        cout << temp << endl;
        if (temp > m)
            m = temp;
        temp = 0;
    }

    return m;
}

int32_t main()
{
    vector<vector<int> > v = {{1, 2, 3}, {4, 5, 6}, {3, 6, 8}};
    cout << maximumWealth(v);
}