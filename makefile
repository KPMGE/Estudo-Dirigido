# My first makefile - lembrem-se do tab nas linhas "gcc" ou "rm"
#no windows, tem que dar o nome com o .exe junto

# Name of the project
PROJ_NAME=nativos_opacos
# .c files
C_SOURCE=$(wildcard ./source/*.c)
# .h files
H_SOURCE=$(wildcard ./source/*.h)
# Object files
OBJ=$(subst .c,.o,$(subst source,objects,$(C_SOURCE)))
# Compiler and linker
CC=gcc
# libraries
LIBS = -lm
# Flags for compiler
CC_FLAGS=-c \
 -W \
 -Wall \
 -std=c99 \
 -pedantic
# Command used at clean target
RM = rm -rf
#
# Compilation and linking
#
all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	@ echo 'Building binary using GCC linker: $@'
	$(CC) $^ -o $@ $(LIBS)
	@ echo 'Finished building binary: $@'
	@ echo ' '

./objects/%.o: ./source/%.c ./source/%.h
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@ $(LIBS)
	@ echo ' '

./objects/main.o: ./source/main.c $(H_SOURCE)
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@ $(LIBS)
	@ echo ' '

objFolder:
	@ mkdir -p objects

clean:
	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
	@ rmdir objects

.PHONY: all clean
