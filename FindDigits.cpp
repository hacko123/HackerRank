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
    int t,n1,digit;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,cnt=0;
        cin >> n;
        n1=n;
    while(n1>0)
    {
        digit = n1%10;
        if(digit!=0 && n%digit == 0)
                cnt++;
        n1/=10;
    }
    cout<<cnt<<"\n";
    }
    return 0;
}
