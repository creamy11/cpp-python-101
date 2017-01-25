CC=g++
CFLAGS=-Wall -O3
SOURCES=main.cpp yfem.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXE=main.x

all: $(SOURCES) $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp .o:
	$(CC) -c $(CFLAGS) $< -o $@

run: $(EXE)
	./$(EXE)

clean:
	rm *.o $(EXE)