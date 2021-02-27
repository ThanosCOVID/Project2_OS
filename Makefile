CC=gcc
DEPS = programs.h
OBJ = main.o Answer.o Office.o Question.o Professor.o Student.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $<

test: $(OBJ)
	$(CC) -pthread -o $@ $^
	rm *.o

clean:
	rm test
