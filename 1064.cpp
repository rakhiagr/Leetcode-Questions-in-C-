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

int fixedPoint(vector<int>& arr) {
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] == i)
                return i;
        }
        return -1;
}

int32_t main()
{
    vector<int> arr = {-10,-5,0,3,7};
    cout<<fixedPoint(arr);

}