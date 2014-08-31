CPP_COMPILE=g++ src/* -Wall -Wextra

all: clean linkedlist-test

clean:
	@rm -rf build/
	@mkdir -p build/

test: all
	@./build/*

linkedlist-test:
	$(CPP_COMPILE) test/LinkedListTest.cpp -o build/linkedlist-test
	./build/linkedlist-test

.PHONY: all test-build test
