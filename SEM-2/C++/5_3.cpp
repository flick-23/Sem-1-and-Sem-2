#include<iostream>
#include<cstring>
using namespace std;
class User
{
    string name;
    int age;
    public :
    void set(string n, int a)       //set values
    {
        name=n;
        age=a;
    }
    void display();
    int friend count(User[],int);
};


void User ::display()       //display
{
    cout<<"\nName : "<<name;
    cout<<"\nAge  : "<<age;
}

int count(User a[],int n)       //friend function
{
    int c=0;
    for(int i=0;i<n;i++)
        if(a[i].age<18)
            c++;
    return c;
}

int main()
{
    int n,age;
    string name;
    cout<<"\nEnter the number of users : ";
    cin>>n;
    
    User u[n];
    cout<<"\nEnter the details :";
    
    for(int i = 0; i < n; i++)          //input
    {
        cout<<"\n\nUser "<<(i+1)<<":"<<"\n\nName : ";
        cin>>name;
        cout<<"\nAge : ";
        cin>>age;
        u[i].set(name,age);         //function call 
    }

    cout<<"\nEntered details : ";   //output
    for(int i=0;i<n;i++)
    {
        cout<<"\nUser"<<(i+1)<<":";
        u[i].display(); 
    }

    cout<<"\nCount of users below 18 : "<<count(u,n);
}