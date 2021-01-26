#include<iostream>
using namespace std;

int main()
{
    int n;
    float avg=0;
    cout<<"\nEnter the total number of tests : ";   
    cin>>n;

    int *a = new int[n];     //dynamic memory allocation
    cout<<"\nEnter the test scores : ";
    int i,j,temp;
    
    for(i=0;i<n;i++)    //input & average 
    {   
        cin>>a[i];
        avg+=a[i];
    }
    avg/=n;
    for(i=0;i<n-1;i++)      //Sorting (Bubble sort)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"\nTest scores :\n";
    for(i =0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<"\n\nAverage : "<<avg;
    delete a;   //deallocated the memory
}