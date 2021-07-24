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

bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int dif = arr[0] - arr[1];
        for(int i = 1 ; i < arr.size()-1 ; i++){
            int temp = arr[i] - arr[i+1];
            if(temp != dif)
                return false;
        }
        return true;
    }

int32_t main()
{
vector<int> arr = {1, 11, 4, 7};
cout<<canMakeArithmeticProgression(arr);

}