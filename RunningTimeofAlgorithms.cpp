#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,val,c=0;
    vector <int> a;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        a.push_back(val);
    }
    for(int i=1;i<n;i++)
    {
        int value=a[i];
        int j=i-1;
        while(j>=0 && value<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
            c++;
        }
        a[j+1]=value;
    }
    cout<<c;
    return 0;

}