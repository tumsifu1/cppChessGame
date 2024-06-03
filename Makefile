# Path to SFML
SFML_PATH = /opt/homebrew/Cellar/sfml/2.6.1

# Compiler and flags
CXX = g++
CXXFLAGS = -I$(SFML_PATH)/include -std=c++17
LDFLAGS = -L$(SFML_PATH)/lib -lsfml-graphics -lsfml-window -lsfml-system

# Source files (add more as needed)
SRCS = $(wildcard *.cpp)

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
TARGET = chessApp

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(TARGET) $(OBJS)

# Phony targets
.PHONY: all clean
