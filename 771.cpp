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

int numJewelsInStones(string jewels, string stones)
{
    unordered_map<char, int> m;

    for (int i = 0; i < stones.size(); i++)
    {
        // if(m.find(stones[i]) == m.end()){
        //     m[stones[i]] = 1;
        // }
        // else{
        //     m[stones[i]]++;
        // }
        m[stones[i]]++;
    }

    int count = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
        if (m.find(jewels[i]) != m.end())
        {
            count = count + m[jewels[i]];
        }
    }

    return count;
}

int32_t main()
{
    string jewels, stones;
    jewels = "aA";
    stones = "aAAbbbb";

    cout << numJewelsInStones(jewels, stones);
}