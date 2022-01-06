OUTPUT = main

CXX=g++
#CXXFLAGS+=-Wall -O0 $(GXX_FLAGS) -std=c++11
CXXFLAGS+=-g

#Dependency for the output file
#DEP_FLAGS=-MMD
#DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=${SRC:.cpp=.d}

#Add dependency generation to the compiler options
CXXFLAGS+=$(DEP_FLAGS)

all: $(OUTPUT) run clean

$(OUTPUT): $(OBJ)
	@$(CXX) $(OBJ) -o $@

%.o: %.cpp
	@$(CXX) -c $(CXXFLAGS) $<

.PHONY: clean run

clean:
	@rm -f $(OUTPUT) $(OBJ) *.d

run:
	./$(OUTPUT)

check:
	@valgrind ./$(OUTPUT)

debug:
	@gdb ./$(OUTPUT)

ERROR:
	@$(CXX) -DSEGFAULT $(OBJ) -o $@
