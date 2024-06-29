#include<bits/stdc++.h>
using namespace std;

class user1
{
    int x;
    public:
        user1()
        {
            x = 0;
        }

        void get_x(int a)
        {
            x = a;
        }
        friend class user2;
};

class user2
{
    int y;

    public:
        user2()
        {
            y = 0;
        }
        void get_y(user1 &p)
        {
            y = p.x+25;
            p.x = 50;
        }

        void show_y(user1 p)
        {
            cout<<"\nValue of x = "<<p.x<<"\n";
            cout<<"\nValue of y = "<<y<<"\n";
        }
};

void main()
{
    user1 u1; 
    user2 u2;

    u1.get_x(30);
    u2.get_y(u1);
    u2.show_y(u1);

}