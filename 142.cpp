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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        if (!head || !head->next || !head->next->next)
            return NULL;

        ListNode *first, *second;
        first = head;
        second = head;
        while (second != NULL && second->next != NULL)
        {

            first = first->next;
            second = second->next->next;
            if (first == second)
                break;
        }
        if (first != second)
            return NULL;

        first = head;

        while (second != first)
        {
            first = first->next;
            second = second->next;
        }

        return first;
    }
};

int32_t main()
{
}