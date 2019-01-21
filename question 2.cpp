#include <iostream>
#include <fstream>
using namespace std;

int power(int x, int y)
{
	int temp=x;
	for(int j=1;j<y;j++)
	{
		x=x*temp;
	}

	return x;
}
int main()
{
	int elements, value, x, y;


	ifstream inputfile("input.txt");
	ofstream outputfile("output.txt");
	cout<<"the number of elements are:"<<endl;
	inputfile>>value;
	cout<<value;
	cout<<endl;

	for(int i=0;i<value;i++)
	{
		inputfile>>x;
		inputfile>>y;
		cout<<power(x,y);
		cout<<endl;
		outputfile<<power;
	}
	inputfile.close();
	outputfile.close();




	return 0;
}
