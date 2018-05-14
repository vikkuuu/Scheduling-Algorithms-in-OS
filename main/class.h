#include "Priority_Queue.h"

class scheduling
{
	priority_queue <Point,vector<Point>,Arrange> AB;
	int TQ;
	int N,A[100],B[100],CT[100],TAT[100],WT[100],t[100],P[100];
	public:
		void get_input();
		void fcfs();
		void sjf();
		void srtf();
		void rr();
		void get_input_Priority();
		void Priority_Without_Premtion();
		void Priority_With_Premtion();
		void get_output();
};