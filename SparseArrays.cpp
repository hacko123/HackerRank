#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,b=0,cnt=0;
    string a;
    cin >> n;
    vector <std::string> str;
    for(int i=0;i<n;i++)
        {
            cin >> a;
            str.push_back(a);
    }
    //cout << str.at(0);
   //for(int i=0;i<str.size();i++)
       // cout<<str.at(i)<<"\n";
    cin >> q;
    int res[q];
    for(int k =0; k<q;k++)
        res[k] = 0;
    vector <std::string> query;
    for(int i=0;i<q;i++)
        {
            cin >> a;
            query.push_back(a);
    }
    // for(int i=0;i<query.size();i++)
      //  cout<<query.at(i)<<"\n";
    for(int it = 0 ; it < query.size(); it++)
        {
            for(int it1 = 0; it1 < str.size(); it1++ )
                {
                    if( query.at(it).compare(str.at(it1)) == 0 )
                             cnt++;           
            }
            cout<<cnt<<"\n";
            cnt = 0;
    }
    //for(int j = 0;j<q;j++)
      //   cout << res[j] << "\n" ; 
    return 0;
}
