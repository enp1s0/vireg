CXX = g++
CXXFLAGS = -std=c++11
SRCDIR=src
TARGET = vreg



$(TARGET): $(SRCDIR)/main.cpp
	$(CXX) $< $(CXXFLAGS) -o $@

clean:
	rm -f $(TARGET)
