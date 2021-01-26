#include<iostream>
using namespace std;
//Parent class or super class or base class
class Polygon{
public:
   virtual void area()
   {
      cout<<"\n\n----------------------This is a program to calculate Area of Triangle, Rectangle & Square!--------------------------";
   }
};

//child class or sub class or derived class
class Triangle : public Polygon
{
public:
   void area(float b, float h)
   { 
      float t=(0.5*b*h);
      cout<<"\nArea of Triangle : "<<t;
   }
};

class Rectangle : public Polygon
{
public:
   void area(int b,int l)
   { 
      cout<<"\nArea of Rectangle : "<<(b*l);
   }
};

class Square : public Polygon
{
public:
   void area(int s)
   { 
      cout<<"\nArea of Square : "<<s*s;
   }
};


int main()
{
  float B,H;
  int l,b,h,s;
  Polygon base;
  Rectangle rect;
  Triangle trgl;
  Square sqr1;
  Polygon * ppoly1 = &rect;
  Polygon * ppoly2 = &trgl;
  Polygon * ppoly3 = &sqr1;
  Polygon * ppoly4 = &base;

  base.area();
  cout<<"\nEnter the base & height of Triangle :\n";
  cin>>B>>H;
  trgl.area(B,H);

  cout<<"\nEnter the length & breadth of Rectangle :\n";
  cin>>l>>b;
  rect.area(l,b);

  cout<<"\nEnter the side of the Square :\n";
  cin>>s;
  sqr1.area(s);
  
  return 0;
}s