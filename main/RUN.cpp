#include "RUN.h"
#include "class.h"

void run(int key)
{
	if(key==1)
	{
		cout<<"Welcome to First Come First Serve Scheduling"<<endl;
		class scheduling FCFS;
		FCFS.get_input();
		FCFS.fcfs();
		FCFS.get_output();
	}		
	if(key==2)
	{
		cout<<"Welcome to Shortest Job First Scheduling"<<endl;
		class scheduling SJF;
		SJF.get_input();
		SJF.sjf();
		SJF.get_output();
	}	
	if(key==3)
	{
		cout<<"Welcome to Shortest Remaining Time First Scheduling"<<endl;
		class scheduling SRTF;
		SRTF.get_input();
		SRTF.srtf();
		SRTF.get_output();
		
	}
	if(key==4)
	{
		cout<<"Welcome to Round Robin Scheduling"<<endl;
		class scheduling RR;
		RR.get_input();
		RR.rr();
		RR.get_output();
		
	}	
	if(key==5)
	{
		cout<<"Welcome to Priority Without Premtion"<<endl;
		class scheduling PwithoutP;
		PwithoutP.get_input_Priority();
		PwithoutP.Priority_Without_Premtion();
		PwithoutP.get_output();
	}	
	if(key==6)
	{
		cout<<"Welcome to Priority With Premtion"<<endl;
		class scheduling PwithP;
		PwithP.get_input_Priority();
		PwithP.Priority_With_Premtion();
		PwithP.get_output();
	}
}