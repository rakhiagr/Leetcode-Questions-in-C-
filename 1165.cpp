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

int calculateTime(string keyboard, string word)
{

    int count = 0, current = 0;
    for (int i = 0; i < word.size(); i++)
    {
        int idx = find(keyboard.begin(), keyboard.end(), word[i]) - keyboard.begin();
        count += abs(idx - current);
        current = idx;
    }
    return count;
}

int32_t main()
{
    string key = "sdhkghsdhslgdjkhgdfj";
    string word = "abcd";

    cout << calculateTime((key, word));
}