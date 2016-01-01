#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,a,b,i_dummy;
    float f_dummy;
    cin >> t;
    for(int a0=0;a0<t;a0++)
    {
        cin>>a;
        cin>>b;
        int cnt=0;
        for(int i=1;i<=sqrt(b);i++)
        {   
            if(i*i>=a && i*i <= b)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
