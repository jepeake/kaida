CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

src/simpleparser.tab.cpp src/simpleparser.tab.hpp : src/simpleparser.y
	bison -v -d src/simpleparser.y -o src/simpleparser.tab.cpp

src/lexer.yy.cpp : src/lexer.flex src/simpleparser.tab.hpp
	flex -o src/lexer.yy.cpp  src/lexer.flex

bin/c_compiler : src/compiler.o src/simpleparser.tab.o src/lexer.yy.o src/simpleparser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^


clean :
	rm -f src/*.o
	rm -f bin/*
	rm -f src/*.tab.cpp
	rm -f src/*.yy.cpp

