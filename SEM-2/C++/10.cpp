#include<iostream>
using namespace std;
 
class Student
{
public: 
    string NAME,USN;
    friend void display(string, string);
    virtual void read(string name,string usn)
    { 
       NAME=name;
       USN=usn;
    }
};
void display(string name,string usn)
{
    cout<<"\nName : "<<name;
    cout<<"\nUSN : "<<usn;
}
class UGStudent: public Student
{
public:
    void Add(int m1,int m2)
    {
        cout<<"\nSum of all scores : "<<m1+m2;
    }
};
 
class PGStudent: public Student
{
public:
    void Avg(int m1,int m2,int m3)
    {
        cout<<"\nAverage of all 3 scores : "<<(m1+m2+m3)/3;
    }
};

int main(void)
{
    Student *st, s;     //bp->st, b->s
    UGStudent u;
    PGStudent p;
    int m1,m2,m3;
    string name,usn;

    cout<<"Enter your name : \n";
    cin>>name;

    cout<<"\nEnter USN : ";
    cin>>usn;

    st=&s;
    st->read(name,usn);
    display(name,usn);

    cout<<"\nEnter your 2 subject marks of UG:\n";
    cin>>m1>>m2;

    st=&u;
    u.Add(m1,m2);

    cout<<"\nEnter your 3 subject marks of PG :\n";
    cin>>m1>>m2>>m3; 
    st = &p;
    p.Avg(m1,m2,m3);
    return 0;
}