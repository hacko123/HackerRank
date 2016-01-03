#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    int cnt=0;
    string s;
    cin>>s;
    int check[26];
    for(int i=0;i<26;i++)
        check[i]=0;
    for(int i=0;i<s.length();i++)
        check[s[i]-'a']++; 
    for(int i=0;i<26;i++)
    {
        if(check[i]%2==1)
            cnt++;
    }
    if(cnt>1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
