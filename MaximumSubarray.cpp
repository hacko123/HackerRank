#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maximum(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
int maximum(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,val,n;
    vector <int> a;
    cin >> t;
    for(int a0=0;a0<t;a0++)
    {
        cin >> n;
        for(int i=0;i<n;i++)
        {   
            cin >> val;
            a.push_back(val);
        }
        int max_so_far = a[0];
        int curr_max = a[0];
        for(int i=1;i<a.size();i++)
        {
            curr_max = maximum(a[i], curr_max+a[i]);
            max_so_far = maximum(max_so_far, curr_max);
        }
        int non_conti_sum = a[0]; 
        for(int i=1;i<a.size();i++)
            non_conti_sum = maximum(non_conti_sum,non_conti_sum+a[i],a[i]);
        cout << max_so_far <<" "<<non_conti_sum;
        cout<<"\n";
        a.clear();
    }
    return 0;
}
