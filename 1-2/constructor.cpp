#include<bits/stdc++.h>
using namespace std;

class constructor
{
    private:
    int width;
    int length;

    public:
    constructor(int w, int l)
    {
        width = w;
        length = l;
    }

    void print_param()
    {
        cout<<"Width = "<<width<<endl;
        cout<<"Length = "<<length<<endl;
    }

};

int main()
{
    constructor c1(40,80);
    constructor c2 = constructor(c1);
    constructor *c3 = new constructor(5,10);

    c1.print_param();
    c2.print_param();
    c3->print_param();
}