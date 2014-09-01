CPP_COMPILE=g++ src/* -Wall -Wextra

all: clean binarytree-test linkedlist-test stack-test trie-test

clean:
	@rm -rf build/
	@mkdir -p build/

test: all
	@./build/*

binarytree-test:
	$(CPP_COMPILE) test/BinaryTreeTest.cpp -o build/binarytree-test
	./build/binarytree-test

linkedlist-test:
	$(CPP_COMPILE) test/LinkedListTest.cpp -o build/linkedlist-test
	./build/linkedlist-test

stack-test:
	$(CPP_COMPILE) test/StackTest.cpp -o build/stack-test
	./build/stack-test

trie-test:
	$(CPP_COMPILE) test/TrieTest.cpp -o build/trie-test
	./build/trie-test

.PHONY: all clean test
