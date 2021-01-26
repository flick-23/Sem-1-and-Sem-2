//Roll number : 1339
//USN : 2GI19CS175
//PART B - Q1
//Name : Venkatesh G Dhongadi
#include <iostream> 

using namespace std; 

// Class to implement operator overloading 
class Compare 
{ 

public:
	float a;

	// Parametrized Constructor 
	Compare(float x)    //str1=x
	{ 
	
		a=x;
	} 

	// Overloading '==' under a function 
	int operator==(Compare b) 
	{ 
		if (a==b.a) 
			return 1; 
		else
			return 0; 
	} 

	// Overloading '<=' under a function 
	int operator<=(Compare c) 
	{ 
		if (a <= c.a) 
			return 1; 
		else
			return 0; 
	} 

	// Overloading '>=' under a function 
	int operator>=(Compare d) 
	{ 
		if (a >= d.a) 
			return 1; 
		else
			return 0; 
	} 
}; 

void compare(Compare s1, Compare s2) 
{ 

	if (s1 == s2) 
		cout << s1.a << " is equal to "<< s2.a << endl; 
	else 
    { 
		if (s1 >= s2) 
			cout << s1.a << " is greater than "<< s2.a << endl; 
		else
			cout << s2.a << " is greater than "<< s1.a << endl; 
	} 
} 


int main() 
{
    float i,j;
    int n,d;
    cout<<"\nEnter numerator and denominator of 1st number : ";
    cin>>n>>d;
    i=(float)n/d;

    cout<<"\nEnter numerator and denominator of 2nd number : ";
    cin>>n>>d;
    j=(float)n/d;

    cout<<"\nGiven fractions are : \n1) "<<i<<"\n2) "<<j<<endl<<endl;
	Compare s1(i); 
	Compare s2(j); 

	compare(s1, s2); 

	return 0; 
} 
