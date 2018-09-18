IDIR =../include
LDIR =../lib
ODIR=obj

CS=mcs
CSFLAGS=-debug

helloCS:
	$(CS) $(CSFLAGS) main.cs list.cs -o llist.exe

.PHONY: clean

clean:
	rm -f *.o
	rm -f llist.ex*