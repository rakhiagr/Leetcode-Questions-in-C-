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

int arr[38] = {0};
        
        int tribonacci(int n) {
            arr[0] = 0, arr[1] = 1, arr[2] = 1;
            if(n <= 2){
                return arr[n];
            }
            
            if(arr[n] == 0)
                arr[n]= tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
            return arr[n];
        }

int32_t main()
{
    int n = 10;
    cout<<tribonacci(n); 

}