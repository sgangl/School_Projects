CC = g++
CFLAGS = -g -Wall -std=c++11

all: TestDecorator

TestDecorator: Coffee.o BlackCoffee.o MilkDecorator.o WhipDecorator.o main.o
	$(CC) $(CFLAGS) Coffee.o BlackCoffee.o MilkDecorator.o WhipDecorator.o main.o -o TestDecorator
	
Coffee.o: Coffee.cpp
	$(CC) $(CFLAGS) -c Coffee.cpp
	
BlackCoffee.o: BlackCoffee.cpp
	$(CC) $(CFLAGS) -c BlackCoffee.cpp
	
MilkDecorator.o: MilkDecorator.cpp
	$(CC) $(CFLAGS) -c MilkDecorator.cpp
	
WhipDecorator.o: WhipDecorator.cpp
	$(CC) $(CFLAGS) -c WhipDecorator.cpp
	
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
	
clean:
	$(RM) TestDecorator *.o
