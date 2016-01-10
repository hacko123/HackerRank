#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,sum=0,a,b,n;
    set <int> result;
    set<int>::iterator it;
    cin>>t;
    for(int a0=0;a0<t;a0++)
    {
        cin>>n;
        cin>>a;
        cin>>b;
        for(int i=0;i<n;i++)
        {
            sum = i*a + (n-1-i)*b;
            result.insert(sum);
        }
    //for(int i=0;i<result.size();i++)
      //  cout<<result[i]<<" ";
    for (it = result.begin(); it != result.end(); it++) 
          cout<<*it<<" ";
    cout<<"\n";
    result.clear();
    }
    
    return 0;
}
