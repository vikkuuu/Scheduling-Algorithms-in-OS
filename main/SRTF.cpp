#include "class.h"

void scheduling::srtf()
{
	
	Point p=AB.top();
	int time=0,i=0,j=0,ax=0;
	if(time<p.A())
		time=p.A();
		
	for(i=0;i<N;i++)
	{
		priority_queue <Point,vector<Point>,Arrange> P=AB;
		priority_queue <Point,vector<Point>,Arrange> Q;
		
		for(j=0;j<N;j++)
		{
			p=P.top();
			if(time>=p.A()&&t[p.C()]!=0)
			{
				Q.push(Point(t[p.C()],p.A(),p.C(),1));
				ax=p.A();
			}
			if(time<p.A())
				break;
			P.pop();
		}
		if(j<N)
		{
			Point q=Q.top();
			int n=q.C();
			if(t[n]<=p.A()-q.B())
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
			while (Q.empty() == false)
  			{
        		Point p = Q.top();
       		 	time+=t[p.C()];
       		 	int n=p.C();
       		 	CT[n]=time;
				TAT[n]=time-A[n];
				WT[n]=TAT[n]-B[n];
        		Q.pop();
        	}
        	break;
        }
    }
}
