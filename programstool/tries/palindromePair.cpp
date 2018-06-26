Palindrome Pair
Send Feedback
Givan n number of words, you need to find if there exist any two words which can be joined to make a palindrome or any word itself is a palindrome.
Return true or false.
Input Format :
Line 1 : Integer n
Line 2 : n words (separated by space)
Output Format :
true ot false
Sample Input 1 :
4
abc def ghi cba
Sample Output 2 :
true
Sample Output 1 Expalanation :
"abc" and "cba" forms a palindrome
Sample Input 2 :
4
abc def ghi hg
Sample Output 2 :
true
Sample Output 2 Expalanation :
"ghi" and "hg" forms a palindrome

#include <string>
#include <vector> 
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;
	int childCount;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
		childCount = 0;
	}
};

class Trie {
	TrieNode *root;

	public :
	int count;

	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}

	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			if (!root->isTerminal) {
				root -> isTerminal = true;
				return true;	
			} else {
				return false;
			}
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
			root->childCount++;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}

	

	bool findIfPalindromePair(vector<string> arr) {
		// Complete this function
		// Return true or false.
	}
};
