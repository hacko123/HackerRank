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
    int n,nc=0,pc=0,zc=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int i=0;i<n;i++)
        {
        if(arr[i]<0)
            nc++;
        else if(arr[i]>0)
            pc++;
        else
            zc++;
    }
    cout<< (float)pc/(float)n<<"\n";
    cout<< (float)nc/(float)n<<"\n";
    cout<< (float)zc/(float)n;
    return 0;
}
