#include <iostream>
using namespace std;

struct student
{
    string name;
    int usn;
    int m1;
    int m2;
    int m3;
    float avg;
};

int average(int &m1,int &m2,int &m3,float &avg)
{
    int a,b;
    a=m1<m2?m1:m2;
    b=a<m3?a:m3;
    avg=((m1+m2+m3)-b)/2.0;
}
int main()
{
    int n;
    cout<<"Enter the no. of students: ";
    cin>>n;
    struct student s[n];

    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter the name for student "<<i+1<<" : ";
        cin>>s[i].name;
        cout<<"Enter the usn for student "<<i+1<<" : ";
        cin>>s[i].usn;
        cout<<"Enter the marks of three subjects for student "<<i+1<<" : ";
        cin>>s[i].m1>>s[i].m2>>s[i].m3;
    }
    for(int i=0;i<n;i++)
    {
        s[i].avg=0.0;
        cout<<endl<<"Name of the student "<<i+1<<" : "<<s[i].name<<endl;
        cout<<"USN of the student "<<i+1<<" : "<<s[i].usn<<endl;
        cout<<"Marks of the student "<<i+1<<" : "<<s[i].m1<<" "<<s[i].m2<<" "<<s[i].m3<<endl;
        average(s[i].m1,s[i].m2,s[i].m3,s[i].avg);
        cout<<"Average of the best two marks: "<<s[i].avg<<endl;
    }
    return 0;
}
