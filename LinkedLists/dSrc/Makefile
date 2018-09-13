DC=gdc
DFLAGS=-g

# IDIR =../include
ODIR=obj

# D Dependencies and Objects
# _HELLOD_DEPS = 
# HELLOD_DEPS = $(patsubst %,$(IDIR)/%,$(_HELLOD_DEPS))

_OBJ = main.o list.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# Compile D objects
$(ODIR)/%.o: %.d
	$(DC) -c -o $@ $< $(DFLAGS)

linkedList: $(OBJ)
	$(DC) -o $@ $^ $(DFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f linkedList