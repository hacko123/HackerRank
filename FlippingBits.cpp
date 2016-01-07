#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    for(int a0=0;a0<t;a0++)
    {
        unsigned int n,k;
        cin>>n;
        k = ~n;
        cout<<k<<"\n";
    }
    return 0;
}
