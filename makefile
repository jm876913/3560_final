all: count doczip

count: taskB.o
	g++ taskB.o -o count

taskB.o: taskB.cpp
	g++ -c taskB.cpp

doczip:
	tar cvzf archive_file.tar.gz taskB.cpp taskB.o makefile

myexe:
	./count

doc: 
	doxygen -g index.html
	doxygen index.html

clean:
	rm *.o count
