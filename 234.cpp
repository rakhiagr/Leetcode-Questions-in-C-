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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *fast, *slow, *curr, *prev;
        prev = NULL;
        fast = slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            curr = slow;
            slow = slow->next;
            curr->next = prev;
            prev = curr;
        }

        slow = (fast != NULL) ? slow = slow->next : slow;

        ListNode *p1, *p2;
        p1 = slow;
        p2 = prev;

        while (p1)
        {
            cout << p1->val << " " << p2->val << endl;
            p1 = p1->next;
            p2 = p2->next;
        }

        while (slow)
        {
            if (slow->val != prev->val)
                return false;
            slow = slow->next;
            prev = prev->next;
        }
        return true;
    }
};

int32_t main()
{
}