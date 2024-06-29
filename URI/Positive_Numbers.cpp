#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    int pos=0;
    while(scanf("%f",&n)!=EOF)
    {
        if(n>0)
        pos++;
    }
    cout<<pos<<" "<<"valores positivos"<<endl;

    return 0;

}