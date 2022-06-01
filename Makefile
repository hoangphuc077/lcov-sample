all: unittest

unittest: test.c
	g++ --std=c++17 -fprofile-arcs -ftest-coverage $^ -I/opt/homebrew/Cellar/googletest/1.11.0/include -L/opt/homebrew/Cellar/googletest/1.11.0/lib -lgtest -l gtest_main -o $@

clean:
	rm *.gcda
	rm *.gcno
	rm unittest