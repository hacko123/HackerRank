#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

#define INT_MIN -32000

int max(stack <int> s2)
{
    if(s2.empty())
        return INT_MIN;
    else 
    {
        int val = s2.top();
        return val;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int min = INT_MIN;
    stack <int> s1;
    stack <int> s2;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int query;
        cin>> query;
        if(query == 1)
        {
            int x;
            cin >> x;
            if(x >= max(s2))
            {
                s1.push(x);
                s2.push(x);
            }
            else
                s1.push(x);
        }
        else if(query == 2)
        {
            if(!s1.empty())
            {
                if(s1.top() == s2.top())
                {
                    s1.pop();
                    s2.pop();
                }
                else
                    s1.pop();
            }
        }
        else
        {
            int val = s2.top();
            cout<<val<<"\n";
        }      
    }
    return 0;
}
