#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {
    
    string s;cin>>s;
    unordered_map<char,int>mp;
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    char odd_char;
    int c = 0,len=0;
    for(auto x:mp)
    {
        if(x.second&1)
        {
            c++;
            len = x.second;
            odd_char = x.first;
        }
    }
    string firsthalf="",secondhalf="";
    if(c>1)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for(auto x:mp)
        {
            string str(x.second/2,x.first);
            firsthalf = firsthalf+str;
            secondhalf = str+secondhalf;
        }
    }
    if(c==1)
    {
        //string oddchar(len,odd_char) ;
        cout<<firsthalf+odd_char+secondhalf;
    }
    else
    {
        cout<<firsthalf+secondhalf;
    }
}
