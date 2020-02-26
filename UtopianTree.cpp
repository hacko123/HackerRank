#ffinclude <map>
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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,height;
        cin >> n;
        if(n==0)
            height=1;
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(i%2==1)
                    height*=2;
                else
                    height+=1;
            }
        }
        cout<<height<<"\n";
        height=1;
    }
    return 0;
}
