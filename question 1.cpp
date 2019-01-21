// question 1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int num=0,temp=0;
	cout<<"enter the number"<<endl;
	cin>>num;
	temp=num*2;
	for(int i=1,j=0,t=temp-1;i<=num;i++,j++,t--)
	{
		for(int y=0;y<temp;y++)
		{
			if((y<=j) || (y>=t))
			{
				cout<<i;
			}
			else
				cout<<"*";
			
		
		}
		cout<<endl;




	}

	for (int i = 1; i < num; i++)
	{
		for (int x = 0; x < num-i; x++)
			cout << i + num;
		for (int y = 0; y < 2*i; y++)
			cout << "*";
		for (int z = 0; z < num - i; z++)
			cout << i + num;

		cout << endl;
	}



	return 0;
}

	