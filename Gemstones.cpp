#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,c=0;
    string s;
    int result[26];
    for(int i=0;i<26;i++)
        result[i] = 0;
    int p[26];
    for(int i=0;i<26;i++)
        p[i] = 0;
    vector <string> aux;
    cin>>n;
    for(int a0=0;a0<n;a0++)
    {
        cin >> s;
        aux.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<aux[i].size();j++)
        {
            if(p[(int)(aux[i][j]-'a')] == 0)
            {
                result[(int)(aux[i][j]-'a')]++;
                p[(int)(aux[i][j]-'a')] = 1;
            }
        }
        for(int k=0;k<26;k++)
            p[k] = 0;
    }
    for(int i=0;i<26;i++)
        if(result[i] == n)
            c++;    
    cout<<c;
    return 0;
}
