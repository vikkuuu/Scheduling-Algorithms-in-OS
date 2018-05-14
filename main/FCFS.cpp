#include "class.h"

void scheduling::get_input()
{
	cout<<"Enter The Number of Process Plz"<<endl;
	cin>>N;
	
	cout<<"Enter Arrival Time and Burst Time"<<endl;
	for(int i=0;i<N;i++)
	{
		cin>>A[i]>>B[i];
		t[i]=B[i];
		AB.push(Point(A[i],B[i],i,1));
	}
}

void scheduling::fcfs()
{
	
	int time=0;
	int n=0;
	for(int i=0;i<N;i++)
	{
		Point p=AB.top();
		if(time<p.A())
			time=p.A();
		time+=p.B();  
	    n=p.C();
		CT[n]=time;
		TAT[n]=time-p.A();
		WT[n]=TAT[n]-p.B();
		AB.pop();
	}
}

void scheduling::get_output()
{
	float sum=0;
	cout<<"Arrival_Time   "<<"Burst_Time   "<<"Completion_Time   "<<"Turn_Arround_Time   "<<"Waiting_Time"<<endl;
	for(int i=0;i<N;i++)
	{
		cout<<"     "<<A[i]<<"              "<<B[i]<<"              "<<CT[i]<<"                 "<<TAT[i]<<"                 "<<WT[i]<<endl;
		sum+=WT[i];
	}
	cout<<"Avarage Waiting Time for each Process is "<<sum/N<<endl;
}