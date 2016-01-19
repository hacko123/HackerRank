#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    char str[10000],a;
    cin>>t;
    for(int a0=0;a0<t;a0++)
    {
        int flag=0;
        stack <char> s;
        cin>>str;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[')
                s.push(str[i]);
            else
            {
                if(!s.empty())
                {
                    a = s.top();
                    s.pop();
                }
                else
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
            if(str[i] == ')' && a!='(')
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
            else if(str[i] == '}' && a!='{')
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
            else if(str[i] == ']' && a!='[')
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
            /*else if(s.empty() && i!=strlen(str)-1)
            {
                cout<<"NO\n";
                break;
            }*/
            else if(s.empty() && i==strlen(str)-1)
            {
                cout<<"YES\n";
                flag = 1;
                break;
            } 
        }
        if(!s.empty() && flag!= 1)
            cout<<"NO\n";
    }
    return 0;
}
