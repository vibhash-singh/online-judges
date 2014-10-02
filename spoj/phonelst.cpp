#include <iostream>
#include <vector>

const int EDGE_COUNT = 10;

struct TrieNode
{
	int words;
	int prefixes;
	TrieNode *edges[EDGE_COUNT];
	int charIndex(char c) { return c - '0'; }
	
	TrieNode() : words(0), prefixes(0), edges() {}

};

class Trie
{
 public:
	Trie() : root_(new TrieNode()) {} 
	TrieNode *root() { return root_; }
	bool addWord(TrieNode *, std::string);
	
 private:
	TrieNode *root_;
};

bool Trie::addWord(TrieNode *node, std::string word)
{
	if (word.size() == 0)
	{
		++node->words;
		return node->prefixes <= 1;
	}
	else
	{
		int i = node->charIndex(word.at(0));
		
		if (node->edges[i] == 0)
		{
			node->edges[i] = new TrieNode();
		}
		
		++node->edges[i]->prefixes;
		
		if (node->edges[i]->words > 0 && node->edges[i]->prefixes > 1)
			return false;
		else
			return addWord(node->edges[i], word.substr(1));
	}
}

int main()
{
	int t, n;
	std::string s;
	std::cin >> t;
	
	while (t--)
	{
		Trie trie;
		std::cin >> n;
		
		bool ok = true;
		
		while (n--)
		{
			std::cin >> s;
			
			if (!trie.addWord(trie.root(), s))
			{
				ok = false;
			}
		}	
		
		std::cout << (!ok ? "NO\n" : "YES\n");
	}
	
	return 0;
}

