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
    string time,s1;
    cin >> time;
    if(time[8] == 'A')
    {
        if(time[0] == '1' && time[1] == '2')
        {
           string s2 = "00";
           time.replace(0,2,s2);
        }
    }
    else if(time[8] == 'P')
    {
        if(time[0] == '1' && time[1] == '2')
        {
            int k=1;
        }    
        else
        {
            s1 = time.substr(0,2);
            int n = stoi(s1);
            n+=12;
            s1 = to_string(n);
            time.replace(0,2,s1);
        }
            
    }
    time[8]='X';
    for(int i=0;time[i]!='X';i++)
        cout<<time[i];
    return 0;
}
