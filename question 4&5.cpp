#include <iostream>
#include <fstream>
using namespace std;

void notation(int newsize)
{
	int temp=0;
	int *newarr=new int[newsize];
	cout<<"enter elements"<<endl;
	for(int i=0;i<newsize;i++)
	{
		cin>>*(newarr+i);

	}
	for(int y = 0;y<newsize-1;y++)
	{ 
		if(*(newarr+y)>*(newarr+y+1))
		{
			temp=*(newarr+y+1);
			*(newarr+y+1)=*(newarr+y);
			*(newarr+y)=temp;
		}
	}

	ofstream myfile;
	myfile.open ("result.txt");
  
	for(int j=0;j<newsize;j++)
	{
		myfile<<*(newarr+j);

	}
	  myfile.close();
}
int main()
{
	int sizearr=0;

	cout<<"enter the size of the array:"<<endl;
	cin>>sizearr;
	int *arr= new int[sizearr];
	cout<<"enter elements"<<endl;
	for(int i=0;i<sizearr;i++)
	{
		cin>>arr[i];

	}

	int temp;
     for(int i2=0; i2<=4; i2++)
   {
     for(int j=0; j<4; j++)
     {
        //Swapping element in if statement    
           if(arr[j]>arr[j+1])
       {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;        
       }
     }         
   } 
	for(int i=0;i<sizearr;i++)
	{
		cout<<arr[i]<<" ";

	}

	notation(sizearr);


	return 0;

}