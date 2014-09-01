#include <string>
#include <vector>

using namespace std;

struct TrieNode {
  TrieNode(char val): val(val) {}
  char val;
  vector<TrieNode*> nodes;
};

class Trie {
  public:
    Trie();
    bool add(string val);
    bool remove(string val);
    bool search(string val);
  private:
    TrieNode* top; 
};
