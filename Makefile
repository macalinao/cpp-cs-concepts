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

binarytree-test:
	$(CPP_COMPILE) test/BinaryTreeTest.cpp -o build/binarytree-test
	./build/binarytree-test

trie-test:
	$(CPP_COMPILE) test/TrieTest.cpp -o build/trie-test
	./build/trie-test

.PHONY: all clean test
