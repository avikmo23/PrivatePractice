SOURCEDIR = source
IDIR = include
CC = gcc
CFLAGS = -g -Wall -I$(IDIR)

ODIR = $(SOURCEDIR)/obj
LDIR = lib

LIBS = -lm


_SOURCE=DeleteFromBeginning.c InsertAtBeginning.c Main.c Memory.c PrintNode.c
SOURCE = $(patsubst %,$(SOURCEDIR)/%,$(_SOURCE))

_DEPS=list.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = DeleteFromBeginning.o InsertAtBeginning.o Main.o Memory.o PrintNode.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: $(SOURCEDIR)/%.c $(DEPS)
    $(CC) -c -o $@ $< $(CFLAGS)

List.exe: $(OBJ)
    $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
    rm -rf $(ODIR)/*.o *~ core $(INCDIR)/*~ List.exe

run: List.exe
    ./List.exe
