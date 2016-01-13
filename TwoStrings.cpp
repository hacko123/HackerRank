#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int map1[26], map2[26];
    for(int a0=0;a0<t;a0++)
    {
        int flag = 0;
        string s1,s2;
        cin >> s1 >> s2;
        for(int i=0;i<26;i++)
            map1[i] = 0;
        for(int i=0;i<26;i++)
            map2[i] = 0;
        for(int i=0;i<s1.size();i++)
            map1[s1[i]-'a']++;
        for(int i=0;i<s2.size();i++)
            map2[s2[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(map1[i] > 0 && map2[i] > 0 && (abs(map1[i]-map2[i])>=1))
            {
                cout <<"YES\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout <<"NO\n";
    }
    return 0;
}
