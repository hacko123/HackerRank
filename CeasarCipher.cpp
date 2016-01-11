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
    int n,p=0;
    char map1[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char map2[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cin >> n;
    string s;
    vector <int> result;
    cin >> s;
    int k;
    cin >> k;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            result.push_back((s[i]-'a'+k)%26);
        else if(s[i]>='A' && s[i]<='Z')
            result.push_back((s[i]-'A'+k)%26);
    }
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i] = map1[result[j++]];
        else if(s[i]>='A' && s[i]<='Z')
            s[i] = map2[result[j++]];
    }
    cout<<s;
    return 0;
}
