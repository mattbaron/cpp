CC=g++
CFLAGS=-I.
OBJ = main.o process.o person.o
TARGET = cpp

%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC)  -o $@ $^

clean:
	rm -f *.o *~ core $(TARGET)