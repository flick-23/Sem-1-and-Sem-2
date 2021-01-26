#include <iostream>
using namespace std;

class Manager
{
    public: string name;
            string id;
            float salary;
            void get()
            {
                 cout<<endl<<"\nEnter the name:";
                 cin>>name;
                 cout<<"Enter the ID:";
                 cin>>id;
                 cout<<"Enter the salary:";
                 cin>>salary;
            }
};

class HR_manager : public Manager
{
    float gross;
public:
    void calc()
    {
        gross=salary+0.7*salary+0.2*salary-0.05*salary;
    }
    void display()
    {
        cout<<endl<<"The gross salary of the HR Manager is : "<<gross<<endl;
    }
};

class SALES_manager : public Manager
{
    float gross;
public:
    void calc()
    {
        gross=salary+0.7*salary+0.1*salary+0.5*salary-0.05*salary;
    }
    void display()
    {
        cout<<"The gross salary of the Sales Manager is : "<<gross;
    }
};


int main()
{
    HR_manager h;
    SALES_manager s;
    cout<<"Enter the details of HR Manager: ";
    h.get();
    cout<<"Enter the details of SALES Manager: ";
    s.get();
    h.calc();
    h.display();
    s.calc();
    s.display();
    return 0;
}
