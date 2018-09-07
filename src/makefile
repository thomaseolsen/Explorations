IDIR =../include
LDIR =../lib
ODIR=obj

CC=g++
CFLAGS=-g
OCFLAGS=-g -lobjc -lgnustep-base -fconstant-string-class=NSConstantString

DC=gdc
DFLAGS=-g

FC=gfortran
FFLAGS=-g

GC=gccgo
GFLAGS=-g

# Ada Dependencies and Objects
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

# Fortran Dependencies and Objects
_HELLOFOR_DEPS = 
HELLOFOR_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOFOR_DEPS))

_HELLOFOR_OBJ = helloFortran.o
HELLOFOR_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOFOR_OBJ))

# Go Dependencies and Objects
_HELLOGO_DEPS = 
HELLOGO_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOGO_DEPS))

_HELLOGO_OBJ = helloGo.o
HELLOGO_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOGO_OBJ))

# Objective-C Dependencies and Objects
_HELLOOBJC_DEPS = 
HELLOOBJC_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOOBJC_DEPS))

_HELLOOBJC_OBJ = helloObjC.o
HELLOOBJC_OBJ = $(patsubst %,$(ODIR)/%,$(_HELLOOBJC_OBJ))

# Compile Ada objects
$(ODIR)/%.o: %.adb $(HELLOADA_DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Compile C++ objects
$(ODIR)/%.o: %.cpp $(HELLOCPP_DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Compile D objects
$(ODIR)/%.o: %.d $(HELLOD_DEPS)
	$(DC) -c -o $@ $< $(DFLAGS)

# Compile Fortran objects
$(ODIR)/%.o: %.f90 $(HELLOFOR_DEPS)
	$(FC) -c -o $@ $< $(FFLAGS)

# Compile Go objects
$(ODIR)/%.o: %.go $(HELLOGO_DEPS)
	$(GC) -c -o $@ $< $(GFLAGS)

# Compile Objective-C objects
$(ODIR)/%.o: %.m $(HELLOOBJC_DEPS)
	$(CC) -c -o $@ $< $(OCFLAGS)

# Make commands
all: helloAda helloCPP helloD helloFortran helloGo helloObjC

helloAda: $(HELLOADA_OBJ)
	gnatbind -x obj/helloada.ali
	gnatlink obj/helloada.ali -g

helloCPP: $(HELLOCPP_OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

helloD: $(HELLOD_OBJ)
	$(DC) -o $@ $^ $(DFLAGS)

helloFortran: $(HELLOFOR_OBJ)
	$(FC) -o $@ $^ $(FFLAGS)

helloGo: $(HELLOGO_OBJ)
	$(GC) -o $@ $^ $(GFLAGS)

helloObjC: $(HELLOOBJC_OBJ)
	$(CC) -o $@ $^ $(OCFLAGS)

.PHONY: clean all

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f $(ODIR)/*.ali
	rm -f b~*
	rm -f helloada
	rm -f helloCPP
	rm -f helloD
	rm -f helloFortran
	rm -f helloGo
	rm -f helloObjC