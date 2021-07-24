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

string defangIPaddr(string address)
{
    string temp = "[.]";

    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            address.erase(address.begin() + i);
            address.insert(i, temp);
            i = i + 2;
        }
    }

    return address;
}

int32_t main()
{
    string s = "1.1.1.1";
    cout << defangIPaddr(s);
}