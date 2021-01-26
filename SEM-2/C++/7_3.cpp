#include <iostream>
using namespace std;

class Box
{
   public:
      double getVolume(void)
      {
         return(length * breadth * height);
      }

      void setLength(double len)
      {
          length = len;
      }

      void setBreadth(double bre)
      {
          breadth = bre;
      }

      void setHeight(double hei)
      {
          height = hei;
      }

      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }

   private:
      double length;      
      double breadth;    
      double height;      
};

int main( )
{
   Box Box1;                
   Box Box2;                
   Box Box3;                
   double volume=0.0; 
   float l1,b1,h1;
   float l2,b2,h2;    
 
   cout<<"Enter the length, breadth and height of box1: ";
   cin>>l1>>b1>>h1;
   Box1.setLength(l1); 
   Box1.setBreadth(b1); 
   Box1.setHeight(h1);
 
   cout<<"Enter the length, breadth and height of box1: ";
   cin>>l2>>b2>>h2;
   Box2.setLength(l2); 
   Box2.setBreadth(b2); 
   Box2.setHeight(h2);
 
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   Box3 = Box1 + Box2;

   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}   