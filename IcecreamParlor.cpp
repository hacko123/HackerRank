#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Print (const vector<int>& v){
  //vector<int> v;
  for (int i=0; i<v.size();i++){
    cout << v[i] << " ";
  }
}

int main() {
    int t,m,n,val,val1,val2;
    vector <int> arr;
    vector <int> arr_copy;
    cin>>t;
    for(int a0=0;a0<t;a0++)
    {
        cin>>m;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            arr.push_back(val);
            arr_copy.push_back(val);
        }
        int lptr=0;
        int rptr=arr.size()-1;
        sort(arr.begin(),arr.end());
        while(lptr<rptr)
        {
            if((arr[lptr]+arr[rptr]) == m)
                 { 
                    for(int j=0;j<arr_copy.size();j++)
                    {
                        if(arr[lptr]==arr_copy[j])
                        {
                            val1=j+1;
                            break;
                        }
                    }
                    for(int k=arr_copy.size()-1;k>=0;k--)
                    {
                        if(arr[rptr]==arr_copy[k])
                        {
                            val2=k+1;
                            break;
                        }
                    }
                    if(val1<val2)
                    {
                        cout<<val1<<" "<<val2; 
                        break;
                    }
                    else
                    {   
                       cout<<val2<<" "<<val1; 
                       break;     
                    }
                 }
            else if((arr[lptr]+arr[rptr]) > m)
                rptr--;
            else
                lptr++;
        }
        cout<<"\n";
        arr.clear();
        arr_copy.clear();
    }
    return 0;
}
