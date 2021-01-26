//Roll number : 1339
//USN : 2GI19CS175
//PART A - Q2
//Name : Venkatesh G Dhongadi
#include<iostream>
#include<cstring>
using namespace std;

class Product       //Parent class
{
    //data members
    string name;        
    float price;
    //memeber functions
    public :
    void readProduct()
    {
        cout<<"\nEnter Product name : ";
        cin>>name;
        cout<<"\nEnter Product price : ";
        cin>>price;
    }
    void displayProduct()
    {
        cout<<"\nProduct name : "<<name<<endl;
        cout<<"\nProduct price : "<<price<<" $"<<endl;
    }
};

class book : public Product     //Derived Class
{
    //data members
    string author;
    //member functions
    public :
    void readAuthor()
    {
        cout<<"\nEnter the name of Author for the book : ";
        cin>>author;
    }
    void displayAuthor()
    {
        cout<<"\nAuthor of the book : "<<author<<endl;
    }
};

class movie : public Product
{
    //data members
    float rating;
    //member functions
    public :
    void readRating()
    {
        cout<<"\nEnter the rating for the movie : ";
        cin>>rating;
    }
    void displayRating()
    {
        cout<<"\nRating of the movie : "<<rating<<endl;
    }
};

int main()
{
    //object instantiation
    book b1;
    b1.readProduct();
    b1.displayProduct();
    b1.readAuthor();
    b1.displayAuthor();
    
    movie m1;
    m1.readRating();
    m1.displayRating();
}