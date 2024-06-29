#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,j,n,k;
    cin>>test;
    k=test;
    while(test--)
    {
        cin>>n;
        i=sqrt(n);
        j=0;
        while(i>0)
        {
            if(j*j>n)
            {
                cout<<"No\n";
                break;
            }
            if(i*i+j*j==n)
            {
                cout<<"Yes\n";
                break;
            }
            if(i*i+j*j<n)
            {
                j++;
            }
            else
            {
                i--;
            }
        }
    }

    return 0;
}
