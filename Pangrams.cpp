#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[1000];
    cin.getline(str,sizeof(str));
    int check[26],flag=1;
    for(int i=0;i<26;i++)
    	check[i]=0;
    for(int i=0;i<strlen(str);i++)
     {
     	if(str[i]!=' ')
     	{
     		if(str[i]>='a' && str[i]<='z')
     			check[(int)str[i]-'a']++;
     		else if(str[i]>='A' && str[i]<='Z')
     			check[(int)str[i]-'A']++;
     	}
        else 
            continue;
     }   
     for(int i=0;i<26;i++)
     {
     	if(check[i]==0)
     	{
     		flag=0;
     		break;
     	}
     }
     if(flag==1)
     	cout<<"pangram";
     else
     	cout<<"not pangram";
    return 0;
}