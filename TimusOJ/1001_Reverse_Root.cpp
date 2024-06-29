#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<double>p;
    long long a;
    while(scanf("%lld",&a)!=EOF)
    {
        p.push_back(a);
    }
    for(int i=p.size()-1; i>=0; i--)
    {
        printf("%0.4lf\n",sqrt(p[i]));
    }
    return 0;
}