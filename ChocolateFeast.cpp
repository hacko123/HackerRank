#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t,x,no_choc,no_choc1;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        int cnt=0;
        cin >> n >> c >> m;
        no_choc = n/c;
        if(no_choc<m)
            cout<<no_choc<<"\n";
        else if(no_choc == m)
            cout<<no_choc+1<<"\n";
        else
        {   no_choc1=no_choc;
            while(no_choc1>m)
            {
                 no_choc1 = no_choc1-m;
                 cnt++;
            }
         if(cnt+no_choc1 / m >= 1)
         {
            x= (cnt+no_choc1) / m;
            cout<<no_choc+cnt+x<<"\n";
         }
         else
            cout<<no_choc+cnt<<"\n"; 
        }
    }
    return 0;
}
