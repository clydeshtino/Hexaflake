CC = g++
CFLAGS = -std=c++17 -Wall -Werror -pedantic -g
LIB = -lboost_unit_test_framework -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

DEPS = hexa.hpp
OBJ = hexa.o 

all : Hexa Hexa.a 

Hexa: main.o $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LIB)

Hexa.a: hexa.o $(OBJ)
	ar rcs hexa.a hexa.o

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

clean: 
	rm *.o Hexa 

lint:
	cpplint *.cpp *.hpp 