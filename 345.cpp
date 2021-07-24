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

string reverseVowels(string s)
{
    string t1 = s;
    string t2 = "";
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            t2 = t2 + c;
        }
    }

    reverse(t2.begin(), t2.end());


    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            s[i] = t2[j];
            j++;
        }
    }
    return s;
}

int32_t main()
{
    string str = "leetcode";
    cout << reverseVowels(str) << endl;
}