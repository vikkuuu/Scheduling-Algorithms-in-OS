#include "class.h"

void scheduling::rr()
{
	cout<<"Enter TQ ";
	cin>>TQ;
	
	int time=0,ax=0,bx=0,cx=0;
	Point p=AB.top();
	if(time<p.A())
		time=p.A();
	int n=N;
	while(n>0)
	{
		p=AB.top();
		ax=p.A();
		bx=p.B();
		cx=p.C();
		
		if(bx<=TQ)
		{
			time+=bx;
			CT[cx]=time;
			TAT[cx]=time-A[cx];
			WT[cx]=TAT[cx]-B[cx];
			
			n--;
		}
		else
		{
			bx=bx-TQ;
			time+=TQ;
			AB.push(Point(time+0.5,bx,cx,1));
		}
		AB.pop();
	}
}

