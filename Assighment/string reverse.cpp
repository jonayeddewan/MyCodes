#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string S1;
    getline(cin,S1);
    int len=S1.length(),j=0;
    char S2[len+1];
    for(int i=len-1;i>=0;i--)
    {
        S2[j]=S1[i];
        j++;
    }
    cout<<S2;
}
