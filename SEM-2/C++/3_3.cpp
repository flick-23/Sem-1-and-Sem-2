#include<iostream>
#include<math.h>
using namespace std;

float interest(int p,int t, int r)    //Simple Interest
{
    return (p + (p * t * r / 100) );
}

float interest(int p, int t, int r, int n)  //Compound Interest
{
    float x = p * ( pow( (1 +( r/n) ),(n * t) ) );
    return x;
}

int main()
{
    int p,t,r,n;
    cout<<"\nEnter the principle amount : ";
    cin>>p;

    cout<<"\nEnter the time in years: ";
    cin>>t;

    cout<<"\nEnter the rate of interest : ";
    cin>>r;

    cout<<"\nEnter the n is the number of times interest is compounded per year (n) :";
    cin>>n;

    cout<<"\nSimple Interest   : "<<interest(p,t,r)<<" $";       //function call 
    cout<<"\nCompound Interest : "<<interest(p,t,r,n)<<" $";
}