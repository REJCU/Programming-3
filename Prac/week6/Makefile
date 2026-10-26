CXX = g++
CXXFLAGS = -Wall -g
TARGET = main person.cpp person.h
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

PHONY: all run clean

all: $(TARGET) run

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)




