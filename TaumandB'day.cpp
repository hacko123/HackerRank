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
unsigned long long min(unsigned long long s1,unsigned long long s2,unsigned long long s3)
{
    if(s1<=s2 && s1<=s3)
        return s1;
    else if(s2<=s1 && s2<=s3)
        return s2;
    else
        return s3;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long b;
        unsigned long long w;
        cin >> b >> w;
        unsigned long long x;
        unsigned long long y;
        unsigned long long z;
        cin >> x >> y >> z;
        unsigned long long sum1 = b*x + w*y;
        unsigned long long sum2 = b*x + ((x+z)*w);
        unsigned long long sum3 = w*y + ((y+z)*b);
        cout << min(sum1,sum2,sum3)<<"\n";
    }
    return 0;
}
