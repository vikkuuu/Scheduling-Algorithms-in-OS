#include "class.h"

void scheduling::Priority_With_Premtion()
{
	
	Point p=AB.top();
	int time=0,i=0,j=0;
	if(time<p.A())
		time=p.A();
		
	for(i=0;i<N;i++)
	{
		priority_queue <Point,vector<Point>,Arrange> P=AB;
		priority_queue <Point,vector<Point>,Arrange> Q;
		int pri=0;
		int burst=0;
		int n=0;
		for(j=0;j<N;j++)
		{
			p=P.top();
			if(time>=p.A()&&t[p.C()]!=0&&pri<p.P())
			{
				n=p.C();
				pri=p.P();
				burst=t[n];
			}
			if(time<p.A())
				break;
			if(t[p.C()]!=0)
				Q.push(Point(p.A(),t[p.C()],p.C(),p.P()));
			P.pop();
		}
		if(j<N)
		{
			if(t[n]<=p.A()-burst)
			{
				time+=t[n];
				CT[n]=time;
				TAT[n]=time-A[n];
				WT[n]=TAT[n]-B[n];
				t[n]=0;
			}
			else
			{
				t[n]=t[n]-p.A()+time;
				time=p.A();
				i--;
			}
			
			
		}
		else
		{
			Point p=Q.top();
	for(int j=0;j<N-i;j++)
	{
		priority_queue <Point,vector<Point>,Arrange> Q1=Q;

		for(int l=0;l<N-i;l++)
		{
			p=Q1.top();
			//cout<<"A="<<p.A()<<" B="<<p.B()<<" C="<<p.C()<<" P="<<p.P()<<endl;
			Q1.pop();
		}

		int pri=0;
		int n=0;
		Q1=Q;
		for(int k=0;k<N-i;k++)
		{
			p=Q1.top();
			if(t[p.C()]!=0&&pri<p.P())
			{
				pri=p.P();
				n=p.C();
			}
			
			Q1.pop();
			
		}
		time+=t[n];
		t[n]=0;
		CT[n]=time;
		TAT[n]=time-A[n];
		WT[n]=TAT[n]-B[n];
		
	}
        	break;
        }
    }
}
