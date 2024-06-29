#include<bits/stdc++.h>
using namespace std;
bool is_Prime(int x)
{
    if(x==0 || x==1)
        return false;
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int a[100]={0},n,x,cnt=0;
    cout<<"How many number do you want to check? "<<endl;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(is_Prime(x))
        {
            a[cnt]=x;
            cnt++;
        }
    }
    sort(a,a+cnt);
    for(int i=0; i<cnt; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
