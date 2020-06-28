TARGET=dsa
INCLUDES = $(wildcard *.h)
DEPS = linked_list.h linked_list_test.h
SOURCES = linked_list.c linked_list_test.c main.c 
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))
CFLAGS  = -c -g -Wall

%.o: %.c $(DEPS)
	gcc  $(CFLAGS)  $< -o $@

all: $(OBJECTS)
	gcc -pthread $(OBJECTS) -o $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)