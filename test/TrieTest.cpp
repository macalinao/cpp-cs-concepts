#include <iostream>
#include "../src/Trie.h"

using namespace std;

int main() {
  Trie* trie = new Trie();
  trie->add("asparagus");
  trie->add("aspen");
  cout << "This should be true: " << (trie->search("asparagus") != 0) << endl;
  cout << "This should be false: " << trie->search("aaragus") << endl;
  cout << "This should be false: " << trie->search("asparaguse") << endl;
  cout << "This should be false: " << trie->search("asparagu") << endl;
  cout << "Removal should be false: " << trie->remove("asparagu") << endl;
  cout << "Removal should be true: " << trie->remove("asparagus") << endl;
  cout << "This should now be false: " << (trie->search("asparagus") != 0) << endl;
}
