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

bool checkStraightLine(vector<vector<int> > &coordinates)
{

    if (coordinates.size() == 2)
        return true;

    for (int i = 0; i < coordinates.size() - 2; i++)
    {
        if (((coordinates[i + 1][1] - coordinates[i][1]) * (coordinates[i + 2][0] - coordinates[i + 1][0])) != ((coordinates[i + 2][1] - coordinates[i + 1][1]) * (coordinates[i + 1][0] - coordinates[i][0])))
            return false;
    }
    return true;
}

int32_t main()
{
    vector<vector<int> > arr = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}};
    cout << checkStraightLine(arr);
}