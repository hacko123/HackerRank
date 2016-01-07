#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,val;
    vector <int> a;
    cin>>t;
    for(int a0=0;a0<t;a0++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            a.push_back(val);
        }
        int l=0,r=a.size()-1;
        int l_sum=a[l],r_sum=a[r];
        while(l != r)
        {
            if(l_sum < r_sum) 
                l_sum+=a[++l];
            else
                r_sum+=a[--r];
        }
        if(l_sum == r_sum)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        a.clear();   
    }
    return 0;
}
