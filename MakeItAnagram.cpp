#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a,b;
    int count=0;
    int c[26] = {0};
    cin >>a>>b;
    for(int i=0;i<a.size();i++)
        c[a[i]-'a']++;
    for(int i=0;i<b.size();i++)
        c[b[i]-'a']--;
    for(int i=0;i<26;i++)
        count += abs(c[i]);
    cout<<count;
    return 0;
}
