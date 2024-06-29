#include<bits/stdc++.h>
using namespace std;

class Student
{
    private: int Admission_Marks;
    protected:
        string Name;
        int Roll;
        string Blood_Group;

    public:
        Student()
        {};
        void set_profile(string n, int r, string bg)
        {
            Name = n;
            Blood_Group = bg;
            Roll = r;
        }

        void convocation_registration()
        {
            cout<<"Successfully registered for convocation"<<endl;
        }
        virtual void course_registration()
        {
            cout<<"Course Registration Successful from Authority"<<endl;
        }

        void show_profile()
        {
            cout<<"Name: "<<Name<<" Roll: "<<Roll<<endl;
        }

};

class EceStudent: public Student
{
    private:
        string section;
        string supervisor;
        string semister;
    public:
        EceStudent()
        {};
        EceStudent(string sec, string sup, string sem)
        {
            section = sec;
            supervisor = sup;
            semister = sem;
        }

    public:
        void course_registration()
        {
            cout<<"Course Registration Successful from ECE"<<endl;
        }

        void name_change(string n)
        {
            Name = n;
        }
};

int main()
{
    EceStudent s1;
    Student *s2;

    
    s1.set_profile("Junayed", 2010006, "A-");
    s1.show_profile();
    s1.convocation_registration();
    s2 = &s1;
    s1.course_registration();
    s1.name_change("Junayed Dewan");
    s1.show_profile();
    s2->show_profile();
    s2->course_registration();


}