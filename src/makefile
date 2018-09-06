IDIR =../include
LDIR =../lib
ODIR=obj

CC=g++
CFLAGS=-g

DC=gdc
DFLAGS=-g

_HELLOCPP_DEPS = 
HELLOCPP_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOCPP_DEPS))

_HELLOCPP_OBJ = helloCPP.o
HELLOCPP_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOCPP_OBJ))

_HELLOD_DEPS = 
HELLOD_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOD_DEPS))

_HELLOD_OBJ = helloD.o
HELLOD_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOD_OBJ))

$(ODIR)/%.o: %.cpp $(HELLOCPP_DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/%.o: %.d $(HELLOD_DEPS)
	$(DC) -c -o $@ $< $(CFLAGS)

helloCPP: $(HELLOCPP_OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

helloD: $(HELLOD_OBJ)
	$(DC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f helloCPP
	rm -f helloD