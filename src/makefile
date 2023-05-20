# Rock Paper Scissors CLI | Arian Goudar
# makefile

SRC1 = rps.c
SRC2 = game_lib.c
SRC3 = print_lib.c
SRC4 = leaderboard_lib.c
SRC5 = input_lib.c

OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)
OBJ4 = $(SRC4:.c=.o)
OBJ5 = $(SRC5:.c=.o)

EXE = $(SRC1:.c=.e)

CFLAGS = -g

all : $(EXE)
$(EXE): $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5)
	gcc $(CFLAGS) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5) -o $(EXE) 
$(OBJ1) : $(SRC1)
	gcc -c $(CFLAGS) $(SRC1)
$(OBJ2) : $(SRC2)
	gcc -c $(CFLAGS) $(SRC2)
$(OBJ3) : $(SRC3)
	gcc -c $(CFLAGS) $(SRC3)
$(OBJ4) : $(SRC4)
	gcc -c $(CFLAGS) $(SRC4)
$(OBJ5) : $(SRC5)
	gcc -c $(CFLAGS) $(SRC5)

.PHONY: clean
clean :
	-rm *.o $(objects) rps.e