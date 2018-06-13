IDIR = ../include
CC = gcc
CFLAGS = -g -Wall -I$(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS=list.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = DeleteFromBeginning.o InsertAtBeginning.o Main.o Memory.o PrintNode.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
        $(CC) -c -o $@ $< $(CFLAGS)

List.exe: $(OBJ)
        $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
        rm -rf $(ODIR)/*.o *~ core $(INCDIR)/*~ ListExecutable

run: List.exe
        ./List.exe
