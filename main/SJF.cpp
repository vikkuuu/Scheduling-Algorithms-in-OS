#include "class.h"

void scheduling::sjf()
{
	cout<<"Welcome to Shortest Job First Sheduling"<<endl;
	Point p=AB.top();
	int time=0;	
	if(time<p.A())
		time=p.A();
		
	for(int i=0;i<N;i++)
	{
		priority_queue <Point,vector<Point>,Arrange> Q=AB;
		int bx=100000,n=0;
		
		for(int j=0;j<N;j++)
		{
			p=Q.top();
			if(time>=p.A()&&bx>p.B()&&t[p.C()]!=0)
			{
				bx=p.B();
				n=p.C();
			}
			if(time<p.A())
				break;
			Q.pop();
		}
		time+=t[n];
		t[n]=0;
		CT[n]=time;
		TAT[n]=time-A[n];
		WT[n]=TAT[n]-B[n];
		if(time<p.A())
			time=p.A();
	}
}

