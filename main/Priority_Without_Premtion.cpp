#include "class.h"

void scheduling::get_input_Priority()
{
	cout<<"Enter The Number of Process Plz"<<endl;
	cin>>N;
	
	cout<<"Enter Arrival Time and Burst Time and Priority"<<endl;
	for(int i=0;i<N;i++)
	{
		cin>>A[i]>>B[i]>>P[i];
		t[i]=B[i];
		AB.push(Point(A[i],B[i],i,P[i]));
	}
}

void scheduling::Priority_Without_Premtion()
{
	Point p=AB.top();
	int time=p.A();
	for(int i=0;i<N;i++)
	{
		priority_queue <Point,vector<Point>,Arrange> Q=AB;

		int pri=0;
		int n=0;
		for(int i=0;i<N;i++)
		{
			p=Q.top();
			if(t[p.C()]!=0&&pri<p.P()&&p.A()<=time)
			{
				pri=p.P();
				n=p.C();
			}
			if(p.A()>time)
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