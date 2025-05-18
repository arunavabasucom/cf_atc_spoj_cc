#Compiler and compiler flags
CXX = g++-14
CXXFLAGS = -Wall -Wno-attributes -std=c++14 -Iheaders

#Source files
# SRCS =  $(wildcard utils/*.cpp) bst/predecessor_and_successor.cpp
SRCS ?= prac/bitma_02.cpp
# Object files (automatically generated from .cpp files)
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = a.out
# Default rule (first target)
all: $(EXEC)
	./$(EXEC)

# Rule to build the executable
$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC)

# Rule to build object files from source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up build artifacts
# Rule to clean up build artifacts and unnecessary files
clean:
	find . -name '*.o' -delete
	find . -name '*.out' -delete
	find . -name '*.bin' -delete
	find . -name '*.dSYM' -exec rm -rf {} +
	rm -rf $(EXEC)

# Rule to format the code
lint:
	clang-format -i $(SRCS)