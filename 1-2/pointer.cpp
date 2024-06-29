#include<bits/stdc++.h>
using namespace std;

class pointer
{
public:
    int length, width;
    int id;
    static int cnt;
public:
    pointer(int l, int w)
    {
        length = l;
        width = w;
        id = cnt++;
    }
public:

    static int multiply(int a, int b)
    {
        return a*b;
    }

    void set_params(int l, int w)
    {
        length = l;
        width = w;
    }

public:
    int get_area() const
    {
        return length*width;
    }

};

int pointer::cnt = 0;

int main()
{
    pointer p1(2,5);

    pointer *p2;

    p2 = &p1;

    p2->set_params(2,10);

    cout<<p2->get_area()<<" "<<p1.get_area()<<"\n";
}