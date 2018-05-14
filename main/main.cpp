#include<iostream>
using namespace std;

#include "RUN.h"

int main()
{
	
	cout<<"Which type of Scheduling you wanna Perform?"<<endl;
	cout<<"1.First come First Serve"<<endl;
	cout<<"2.Shortest Job First"<<endl;
	cout<<"3.Shortest Remaining Job First"<<endl;
	cout<<"4.Round Robin"<<endl;
	cout<<"5.Priority Without Premtion"<<endl;
	cout<<"6.Priority With Premtion"<<endl;

	
	while(1)
	{
		int key;
		cin>>key;
		switch(key)
		{
			case 1:
				run(1);
				break;
			case 2:
				run(2);
				break;
			case 3:
				run(3);
				break;
			case 4:
				run(4);
				break;
			case 5:
				run(5);
				break;
			case 6:
				run(6);
				break;
			default:
				cout<<"Plz Enter Valid Option"<<endl;
		}

		cout<<endl<<"do you want to perform another process"<<endl;
		cout<<"1.Yes"<<endl<<"2.No"<<endl;
		int n;
		cin>>n;
		if(n==1)
			continue;
		else break;
	}

	return 0;
}