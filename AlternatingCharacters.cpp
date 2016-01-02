#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    string str;
    cin>>t;
    for(int a=0;a<t;a++)
    {
        int cnt=0;
        cin>>str;
        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i]==str[i+1])
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
