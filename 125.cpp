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

bool isPalindrome(string s)
{
    string temp = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))
        {
            temp += tolower(s[i]);
        }
    }

    string check = temp;

    reverse(check.begin(), check.end());

    return check == temp;
}

int32_t main()
{
}