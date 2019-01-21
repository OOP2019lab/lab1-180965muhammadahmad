

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	int *p;
	int *q;
	int *r;
	x=100;
	y=200;
	p=&x;
	q=&y;

	cout<<"The value of x = "<<endl;
	cout<<x<<endl;
	cout<<"The value of y = "<<endl;
	cout<<y<<endl;
	cout<<"The value of p = "<<endl;
	cout<<p<<endl;
	cout<<"The value of q = "<<endl;
	cout<<q<<endl;
	cout<<"The value of *p = "<<endl;
	cout<<*p<<endl;
	cout<<"The value of *q = "<<endl;
	cout<<*q<<endl;
		
	z=x;
	x=y;
	y=z;

	cout<<"The value of x is:"<<endl;
	cout<<x<<endl;
	cout<<"The value of y is:"<<endl;
	cout<<y<<endl;
	cout<<"The value of p is:"<<endl;
	cout<<p<<endl;
	cout<<"The value of q is:"<<endl;
	cout<<q<<endl;
	cout<<"The value of *p is:"<<endl;
	cout<<*p<<endl;
	cout<<"The value of *q is:"<<endl;
	cout<<*q<<endl;
		cout<<endl;
		

	r=p;
	p=q;
	q=r;

	cout<<"The value of x is:"<<endl;
	cout<<x<<endl;
	cout<<"The value of y is:"<<endl;
	cout<<y<<endl;
	cout<<"The value of p is:"<<endl;
	cout<<p<<endl;
	cout<<"The value of q is:"<<endl;
	cout<<q<<endl;
	cout<<"The value of *p is:"<<endl;
	cout<<*p<<endl;
	cout<<"The value of *q is:"<<endl;
	cout<<*q<<endl;
		cout<<endl;
			

	return 0;


}