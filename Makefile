COMPILER = gcc
CCFLAGS = -o hello
all: main

debug:
	make DEBUG=TRUE

main: calculator.o main.o
	$(COMPILER) -pthread $(CCFLAGS) calculator.o main.o -lm 

ifeq ($(DEBUG), TRUE)
	CCFLAGS += -g
endif

clean:
	rm -f *.o

