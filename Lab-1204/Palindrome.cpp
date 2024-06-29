#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    bool ok = true;
    cin>>s1;
    int l = s1.size();
    for(int i=0,j=l-1; i<=l/2; i++,j--)
    {
        if(s1[i]==s1[j])
        {
            continue;
        }
        else
        {
            ok = false;
            break;
        }

    }
    if(ok)
    cout<<"The String is Palindrome"<<endl;
    else
    cout<<"Not a palindrome"<<endl;
}