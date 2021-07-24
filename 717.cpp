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

bool isOneBitCharacter(vector<int> &bits)
{

    bool val;
    for (int i = 0; i < bits.size(); i++)
    {
        if (bits[i] == 1)
        {
            val = false;
            i++;
        }
        else
        {
            val = true;
        }
    }
    return val;
}

int32_t main()
{
    vector<int> a = {1, 0, 1, 1, 0, 0, 1};
    cout << isOneBitCharacter(a);
}