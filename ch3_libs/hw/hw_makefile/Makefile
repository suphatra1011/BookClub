CFLAGS =-Wall -Werror #-Wl,-rpath,$(shell pwd) 
CC  = gcc
LIB = -L./lib
INC = -I./inc
LIB_SRC = ./lib
SRC =./src
EXE = myapp

DYN_LIBS = $(LIB) -ldyn
#STATIC_LIBS = $(LIB) -lmy_static
STATIC_LIBS = ./lib/libmy_static.a

all: $(SRC)/main.o $(LIB_SRC)/libmy_static.a $(LIB_SRC)/libdyn.so
	@#$(CC) -o $(EXE) $(SRC)/main.o $(STATIC_LIBS) $(CFLAGS)
	$(CC) $(DYN_LIBS) -o $(EXE) $(SRC)/main.o $(STATIC_LIBS) $(CFLAGS)
	@#$(CC) $(DYN_LIBS) $(STATIC_LIBS) $(INC) -o $(EXE) $(SRC)/main.o $(CFLAGS)
	@#$(CC) $(DYN_LIBS) -o my_app main.o libmy_static.a $(CFLAGS)

main.o: $(SRC)/main.c
	$(CC) -c $(SRC)/main.c $(INC) $(CFLAGS) && mv main.o $(SRC)
############################################
libmy_static.a: $(LIB_SRC)/hello.o $(LIB_SRC)/world.o
	ar -rsv libmy_static.a $(LIB_SRC)/hello.o $(LIB_SRC)/world.o ;
	@mv libmy_static.a $(LIB_SRC)

hello.o: $(LIB_SRC)/hello.c
	$(CC) -c $(LIB_SRC)/hello.c -o $(LIB_SRC)/hello.o $(CFLAGS)

world.o: $(LIB_SRC)/world.c
	$(CC) -c $(LIB_SRC)/world.c -o $(LIB_SRC)/world.o $(CFLAGS)
############################################
libdyn.so: $(LIB_SRC)/func3.o
	$(CC) -shared -o libdyn.so $(LIB_SRC)/func3.o ;
	@mv libdyn.so $(LIB_SRC)

func3.o: $(LIB_SRC)/func3.c
	$(CC) -c -fPIC $(LIB_SRC)/func3.c -o $(LIB_SRC)/func3.o


clean:
	rm -rf $(SRC)/*.o $(EXE)

cleanlib:
	cd $(LIB_SRC) && rm -rf *.a *.so *.o

cleanall:
	rm -rf $(SRC)/*.o $(EXE) *.a *.so $(LIB_SRC)/*.o
	#make clean && make cleanlib