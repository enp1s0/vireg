CXX=g++
CXXFLAGS=-std=c++11
SRCDIR=src
BINDIR=bin
TARGET=vireg

$(BINDIR)/$(TARGET): $(SRCDIR)/main.cpp
	[ -d "${BINDIR}" ] || mkdir ${BINDIR}
	$(CXX) $< $(CXXFLAGS) -o $@

clean:
	rm -f $(TARGET)
