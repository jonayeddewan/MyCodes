#include<bits/stdc++.h>
using namespace std;
class Ractangle{
    public: int length, width;
    public: int id;
    public: static int cnt;

    Ractangle(int l, int w)
    {
        length = l;
        width = w;
        id = cnt++;
    }

    public: static int multiply(int a, int b)
    {
        return a*b;
    }

    public: int get_area()const
    {
        return length*width;
    }

};

int Ractangle:: cnt = 0;

int main()
{

    Ractangle r1(2,5);
    Ractangle r2(5,10);
    Ractangle r3(2,10);

    cout<<r1.id<<" "<<r1.cnt<<endl;
    cout<<r2.id<<" "<<r2.cnt<<endl;
    cout<<r3.id<<" "<<r3.cnt<<endl;

    cout<<r1.get_area()<<endl;
    cout<<Ractangle::multiply(2,3);

    return 0;
}
