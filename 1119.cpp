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

string removeVowels(string s)
{
    string res = "";
    for (char c : s)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            res = res + c;
        }
    }
    return res;
}

int32_t main()
{
    string str = "leetcodeisacommunityforcoders";
    string x = removeVowels(str);
    cout << x << endl;
}