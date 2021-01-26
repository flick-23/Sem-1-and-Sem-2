#include<iostream>
using namespace std;

class intArray
{
    int *a,n;
    public :
    intArray()      //Zero Arg constructor
    {
        n=0;
        cout<<"\nInitialized value of N in Zero Argument constructor!";
    }

    intArray(int x[],int N)     //Parameterised constructor
    {
        a=new int[N];       //allocating memory
        a=x;
        n=N;
        cout<<"\nInitialized array size & array pointer in Parameterised constructor!";
    }

    intArray(intArray &N)   //Copy constructor
    {
        n = N.n;
        cout<<"\nCopied value of N using Copy constructor!";
    }
    void display()
    {
        cout<<"\nArray Elements :\n";
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
    ~intArray()
    {
        delete a;       //deallocating memory
        cout<<"\nDestructor Initialized!";
    }
};

int main()
{
    int n;
    cout<<"\nEnter the array size : ";
    cin>>n;

    cout<<"\nEnter the array Elements : ";
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    intArray ob1, ob2(x,n);     //Calling zero arg, Parameterised constructor
    ob2.display();      //displaying array Elements
    intArray ob3 = ob2; 
}