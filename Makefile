CXX = g++
CXXFLAGS = -std=c++11
SRCDIR=src
TARGET = vireg

$(TARGET): $(SRCDIR)/main.cpp
	$(CXX) $< $(CXXFLAGS) -o $@

clean:
	rm -f $(TARGET)
