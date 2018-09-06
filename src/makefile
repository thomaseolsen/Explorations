IDIR =../include
LDIR =../lib
ODIR=obj

CC=gcc
CFLAGS=-g

DC=gdc
DFLAGS=-g

# Ada Dependencies and Objects
# Skipping these variables, as we're using gnatmake rather than gcc
_HELLOADA_DEPS = 
HELLOADA_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOADA_DEPS))

_HELLOADA_OBJ = helloada.o
HELLOADA_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOADA_OBJ))

# C++ Dependencies and Objects

_HELLOCPP_DEPS = 
HELLOCPP_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOCPP_DEPS))

_HELLOCPP_OBJ = helloCPP.o
HELLOCPP_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOCPP_OBJ))

# D Dependencies and Objects

_HELLOD_DEPS = 
HELLOD_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOD_DEPS))

_HELLOD_OBJ = helloD.o
HELLOD_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOD_OBJ))

# Compile Ada objects
# Skipping this step, as we're using gnatmake rather than gcc
$(ODIR)/%.o: %.adb $(HELLOADA_DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Compile C++ objects

$(ODIR)/%.o: %.cpp $(HELLOCPP_DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Compile D objects

$(ODIR)/%.o: %.d $(HELLOD_DEPS)
	$(DC) -c -o $@ $< $(CFLAGS)

# Make commands

helloAda: $(HELLOADA_OBJ)
	gnatbind -x obj/helloada.ali
	gnatlink obj/helloada.ali -g

helloCPP: $(HELLOCPP_OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

helloD: $(HELLOD_OBJ)
	$(DC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f $(ODIR)/*.ali
	rm -f b~*
	rm -f helloada
	rm -f helloCPP
	rm -f helloD