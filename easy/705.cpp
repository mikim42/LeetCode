/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   705.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 17:22:13 by mikim             #+#    #+#             */
/*   Updated: 2019/12/19 17:22:37 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 705. Design HashSet [easy]
*/

struct HashNode {
	int val;
	HashNode *next;

	HashNode(int n) : val(n), next(NULL) {}
};

class MyHashSet {
	private:
		HashNode *array[55];

	public:
		/** Initialize your data structure here. */
		MyHashSet() {
			for (int i = 0; i < 55; i++)
				array[i] = NULL;
		}

		int
			hash(int key) {
				int idx = 0;
				while (key > 0) {
					idx += key % 10;
					key /= 10;
				}
				return idx;
			}

		void
			add(int key) {
				int idx = hash(key);
				HashNode *tmp = array[idx];
				if (tmp) {
					while (tmp->next) {
						if (tmp->val == key)
							return;
						tmp = tmp->next;
					}
					if (tmp->val != key)
						tmp->next = new HashNode(key);
				}
				else {
					array[idx] = new HashNode(key);
				}
			}

		void
			remove(int key) {
				int idx = hash(key);
				HashNode *parent = array[idx];
				HashNode *tmp = NULL;
				if (!parent)
					return;
				tmp = parent->next;
				if (parent->val == key) {
					delete parent;
					array[idx] = tmp;
					return;
				}
				while (tmp) {
					if (tmp->val == key) {
						parent->next = tmp->next;
						delete tmp;
						return;
					}
					tmp = tmp->next;
					parent = parent->next;
				}
			}

		/** Returns true if this set contains the specified element */
		bool contains(int key) {
			int idx = hash(key);
			HashNode *tmp = array[idx];
			while (tmp) {
				if (tmp->val == key)
					return true;
				tmp = tmp->next;
			}
			return false;
		}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
