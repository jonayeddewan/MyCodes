#include <bits/stdc++.h>
using namespace std;
const int   mod = (int) 1000000007;
int c[10];
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        long long int sum = 0;
        
        sort(s.begin(),s.end());
        
        for(int i=0; i<s.size(); i++)
        {
            c[s[i]-'0']++;
        }
        
        for(int i=0; i<10; i++)
        {
            sum += (i*c[i])%mod;
        }
        cout<<sum<<endl;
        cout<<s<<endl;
    }
}