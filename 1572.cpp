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

int diagonalSum(vector<vector<int> > &mat)
{
    int sum = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        sum += mat[i][i] + mat[i][mat.size() - 1 - i];
    }

    if (mat.size() & 1 == 1)
        sum -= mat[mat.size() / 2][mat.size() / 2];
    return sum;
}

int32_t main()
{
    vector<vector<int> > arr = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    cout << diagonalSum(arr);
}