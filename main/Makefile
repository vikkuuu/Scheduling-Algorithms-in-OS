CC=g++

CFLAGS=-c

all: run

run: main.o RUN.o FCFS.o SJF.o SRTF.o ROUND_ROBIN.o Priority_Without_Premtion.o Priority_With_Premtion.o
		$(CC) main.o RUN.o FCFS.o SJF.o SRTF.o ROUND_ROBIN.o Priority_Without_Premtion.o Priority_With_Premtion.o -o  run
	
main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp
		
RUN.o: RUN.cpp
		$(CC) $(CFLAGS) RUN.cpp


FCFS.o: FCFS.cpp
		$(CC) $(CFLAGS) FCFS.cpp

SJF.o: SJF.cpp
		$(CC) $(CFLAGS) SJF.cpp
		
SRTF.o: SRTF.cpp
		$(CC) $(CFLAGS) SRTF.cpp


ROUND_ROBIN.o: ROUND_ROBIN.cpp
		$(CC) $(CFLAGS) ROUND_ROBIN.cpp

Priority_Without_Premtion.o: Priority_Without_Premtion.cpp
		$(CC) $(CFLAGS) Priority_Without_Premtion.cpp

Priority_With_Premtion.o: Priority_With_Premtion.cpp
		$(CC) $(CFLAGS) Priority_With_Premtion.cpp

clean: 
		rm -rf *o run
