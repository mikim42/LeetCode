class Trie {
	private:
		static const int size = 26;
		Trie    *children[size];
		bool    isEnd;

	public:
		/** Initialize your data structure here. */
		Trie() {
			for (int i = 0; i < size; ++i) children[i] = NULL;
			isEnd = false;
		}

		/** Inserts a word into the trie. */
		void insert(string word) {
			Trie *tmp = this;
			for (auto x : word) {
				if (!tmp->children[x - 'a']) tmp->children[x - 'a'] = new Trie();
				tmp = tmp->children[x - 'a'];
			}
			tmp->isEnd = true;
		}

		/** Returns if the word is in the trie. */
		bool search(string word) {
			Trie *tmp = this;
			for (auto x : word) {
				if (!tmp->children[x - 'a']) return false;
				tmp = tmp->children[x - 'a'];
			}
			return tmp->isEnd;
		}

		/** Returns if there is any word in the trie that starts with the given prefix. */
		bool startsWith(string prefix) {
			Trie *tmp = this;
			for (auto x : prefix) {
				if (!tmp->children[x - 'a']) return false;
				tmp = tmp->children[x - 'a'];
			}
			return true;
		}
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
