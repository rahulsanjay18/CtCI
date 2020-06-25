TARGET=dsa
INCLUDES = $(wildcard *.h)
DEPS = linked_list.h
SOURCES = linked_list.c main.c
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))

%.o: %.c $(DEPS)
	gcc  -c $< -o $@

all: $(OBJECTS)
	gcc -pthread $(OBJECTS) -o $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)