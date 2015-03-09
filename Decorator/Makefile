CC = g++
CFLAGS = -g -Wall -std=c++11

all: TestDecorator

TestDecorator: BlackCoffee.o MilkDecorator.o WhipDecorator.o main.o
	$(CC) $(CFLAGS) BlackCoffee.o MilkDecorator.o WhipDecorator.o main.o -o TestDecorator
	
BlackCoffee.o: BlackCoffee.cpp Coffee.h
	$(CC) $(CFLAGS) -c BlackCoffee.cpp
	
MilkDecorator.o: MilkDecorator.cpp MilkDecorator.h Coffee.h
	$(CC) $(CFLAGS) -c MilkDecorator.cpp
	
WhipDecorator.o: WhipDecorator.cpp WhipDecorator.h Coffee.h
	$(CC) $(CFLAGS) -c WhipDecorator.cpp
	
main.o: main.cpp Coffee.h MilkDecorator.h WhipDecorator.h BlackCoffee.h
	$(CC) $(CFLAGS) -c main.cpp
	
clean:
	$(RM) TestDecorator *.o
