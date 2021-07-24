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

int sumOfDigits(vector<int> &A)
{
    int smallest = *min_element(A.begin(), A.end());
    int sum = 0;
    while (smallest)
    {
        sum += smallest % 10;
        smallest /= 10;
    }
    cout << sum;
    return !(sum & 1);
}

int32_t main()
{
    vector<int> v = {3, 53, 56, 87, 23};
    cout << sumOfDigits(v);
}