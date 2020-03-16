CXX = g++
CXXFLAGS = -std=c++11
TARGET = vreg



$(TARGET): main.cpp
	$(CXX) $< $(CXXFLAGS) -o $@

clean:
	rm -f $(TARGET)
