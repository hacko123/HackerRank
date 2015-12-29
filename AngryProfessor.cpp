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
    int t,c=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int c=0;
        cin >> n >> k;
        vector<int> a(n);
        vector <int> :: iterator j;
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        for(j=a.begin();j != a.end();j++)
            {
            if( *j <= 0 )
              c++;
        }
        if(c>=k)
            cout << "NO" <<"\n";
        else
            cout << "YES" << "\n";
        a.clear();
    }
    return 0;
}
