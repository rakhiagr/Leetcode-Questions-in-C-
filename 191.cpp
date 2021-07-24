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

int hammingWeight(uint32_t n) {
        
        int count = 0;
        while(n){
            if(n&1)
                count++;
            n >>= 1;
        }
        return count;
    }

int32_t main()
{
    uint32_t n = 453;
    cout<<hammingWeight(n);

}