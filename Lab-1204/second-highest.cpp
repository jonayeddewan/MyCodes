#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    if(n<2)
    cout<<"Need atleast 2 element"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        cin>>a[i];

        sort(a,a+n,greater<int>());
        cout<<"Second Large Element is:"<<" "<<a[1]<<endl;
    }
    return 0;
}