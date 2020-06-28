TARGET=dsa.out
INCLUDES = $(wildcard *.h)
DEPS = linked_list.h linked_list_test.h stack_ll.h stack_ll_test.h stack_arr.h stack_arr_test.h
SOURCES = linked_list.c linked_list_test.c stack_ll.c stack_ll_test.c stack_arr.h stack_arr_test.h main.c 
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))
CFLAGS  = -c -g -Wall

%.o: %.c $(DEPS)
	gcc  $(CFLAGS)  $< -o $@

all: $(OBJECTS)
	gcc -pthread $(OBJECTS) -o $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)