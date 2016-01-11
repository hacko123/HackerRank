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
    int row,col,k=0;
    string str;
    std::getline(std::cin, str);
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    col = ceil(sqrt(str.size()));
    row = floor(sqrt(str.size()));
    while(row*col < str.size() && row<=col)
        row++;
    char a[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            a[i][j] = ',' ;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            if(k<str.size())
                a[i][j] = str[k++];
        
    /*for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout << a[i][j];
        cout<<"\n";
    }
    cout<<"\n";*/
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(a[j][i] != ',')
                cout<<a[j][i];
        }
        cout<<" ";
    }
    return 0;
}
