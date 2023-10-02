CXX=g++
CXXFLAGS=-std=c++17 -pedantic -Wall -Wextra -Werror -fno-omit-frame-pointer -lrt -pthread


SRCS=balloonStand.cpp
BINS=$(patsubst %.cpp,%.exe,$(SRCS))
DEPS=


all: clean $(BINS)

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.exe: %.cpp $(DEPS)
	$(CXX)  -o $(patsubst %.exe,%,$@) $(CXXFLAGS) $^ $(CXXFLAGS) 


.PHONY: clean

clean:
	rm -f balloonStand


