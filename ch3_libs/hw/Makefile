#! /bin/bash
CXX = gcc
CURDIR = $(notdir $(shell pwd))
SRC_PATH =./src
INC_PATH =./inc
LIB_PATH =./lib

SRC = $(wildcard *.c)
#OBJ = $(patsubst %.c %.cpp, %.o, $(SRC))
SRC_STATIC = hello.c #world.c
OBJ = hello.o world.o #func3.o main.o
LIB = libmytest.a
EXE = myapp

all: buildStaticObj #buildLib output 

buildStaticObj: #$(SRC_STATIC)
	
	
	#@cd $(SRC_PATH) & echo $(shell pwd)

	@cd $(SRC_PATH) && $(CXX) -c -fPIC $(SRC_PATH)/$(SRCSRC_STATIC)

	#cd ./src && gcc -c -fPIC hello.c world.c

#buildLib: 
#	ar rcs $(LIB_PATH)/$(LIB) $(SRC_PATH)/$(OBJ) 

#output: $(OBJ)
#	@echo $(OBJ)
#	#$(CXX) -o $(EXE) $(OBJ)
#	$(CXX) main.c -L $(LIB_PATH) -lmytest -I. $(INC_PATH) -o $(EXE)

clean:
	rm -rf $(SRC_PATH)/$(OBJ) $(EXE)