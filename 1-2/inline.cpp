#include<bits/stdc++.h>
using namespace std;

int x = 0;

inline void f1(){x++;}
inline void f2(){x+=4; f1();}

void main()
{
    f2();
    cout<<x<<endl;
    
}
