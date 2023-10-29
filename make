# Nome do projecto
PROJ_NAME=trabalho-pratico

# # Ficheiros .c
# C_SOURCE=$(wildcard ./src/*.c)

# # Ficheiros .h 
# H_SOURCE=$(wildcard ./src/*.h)

# # Ficheiros Object
# OBJ=$(C_SOURCE:.c=.o)

# Compilador
CC = gcc

# Flags
CFLAGS=-Wall -Wextra -pedantic -O2 

LIBS=-lm -lcurses -I./src/
SOURCES = ./src/**/*.c

# $(PROJ_NAME): $(OBJ)
#     $(CC) -o $@ $^

# %.o: %.c %.h
#     $(CC) -o $@ $< $(CC_FLAGS)

# main.o: main.c $(H_SOURCE)
#     $(CC) -o $@ $< $(CC_FLAGS)

# Compilação e linkagem
#all: $(PROJ_NAME)

# clean:
#     rm -rf *.o $(PROJ_NAME) *~

all: trabalho run clean

trabalho: 
 	$(CC) $(SOURCES) $(CFLAGS) -o trabalho $< $(LIBS)

run :
 	./trabalho

clean:
 	rm trabalho