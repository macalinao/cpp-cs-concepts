all: clean linkedlist-test

clean:
	@rm -rf build/
	@mkdir -p build/

test: all
	@./build/*

linkedlist-test: 
	@g++ src/* test/LinkedListTest.cpp -o build/linkedlist-test -Wall -Wextra

.PHONY: all test-build test
