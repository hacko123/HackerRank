#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i,j,flag=0;
    string str;
    cin>>t;
    for(int a0=0;a0<t;a0++)
    {
        cin>>str;
        for(i=1,j=str.length()-1;j>=1;i++,j--)
        {
            if (abs((int)(str[i]-str[i-1])) == abs((int)(str[j]-str[j-1])))
                flag=0;
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            cout<<"Not Funny\n";
        else
            cout<<"Funny\n";
    }
    return 0;
}
