PHONY: all

all:
	g++ -I/usr/local/include -lcppunit -O0 -g3 -Wall src/tets.cpp