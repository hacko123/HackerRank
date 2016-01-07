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
    int n,min;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(),arr.begin()+n);
    cout<<n<<"\n";
    while(1)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
            if(arr[i]!=0)
            {
                min=arr[i];
                break;
            }
        for(int i=0;i<n;i++)
            if(arr[i]>0)
                arr[i]-=min;
        for(int i=0;i<n;i++)
            if(arr[i]!=0)
                cnt++;
        if(cnt==0)
            break;
        else
            cout<<cnt<<"\n"; 
    }
    
    return 0;
}
