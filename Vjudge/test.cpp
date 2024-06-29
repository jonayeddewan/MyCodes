#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     cin>>n;

     long long int a[n+4];
     for(int i=0; i<n; i++)cin>>a[i];

     long long x=0;
     for(int i=0; i<n; i++){
        x= __gcd(x,a[i]);
     }

     long long z,cnt=1;
     for(long long i=2; i*i<=x; i++){

        if(x%i == 0)
        {
            cnt++;
            z=x/i;
            if(z!=i)cnt++;
        }
     }
     if(x == 1)cout<<1<<endl;
     else
     cout<<cnt+1<<endl;
 }