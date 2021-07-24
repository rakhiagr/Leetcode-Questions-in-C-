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

class ParkingSystem
{
private:
    int a[3];

public:
    ParkingSystem(int big, int medium, int small)
    {
        a[0] = big;
        a[1] = medium;
        a[2] = small;
    }

    bool addCar(int carType)
    {
        return a[carType - 1] > 0 ? a[carType - 1]-- : false;
    }
};

int32_t main()
{
    int big = 1, medium = 3, small = 2;
    ParkingSystem *obj = new ParkingSystem(big, medium, small);
    bool param_1 = obj->addCar(2);
}