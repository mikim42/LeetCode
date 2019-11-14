/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   706.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:13:53 by mikim             #+#    #+#             */
/*   Updated: 2019/11/12 11:14:24 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 706. Design HashMap [easy]
*/

class MyHashMap {
	private:
		vector<vector<pair<int, int>>> vvp;
		int N = 100;

	public:
		/** Initialize your data structure here. */
		MyHashMap() {
			vvp = vector<vector<pair<int, int>>>(N);
		}

		/** value will always be non-negative. */
		void put(int key, int value) {
			int id = key % N;
			auto &list = vvp[id];
			for (auto &x : list) {
				if (x.first == key) {
					x.second = value;
					return;
				}
			}
			list.push_back(pair<int, int>(key, value));
		}

		/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
		int get(int key) {
			int id = key % N;
			auto &list = vvp[id];
			for (auto &x : list) {
				if (x.first == key)
					return x.second;
			}
			return -1;
		}

		/** Removes the mapping of the specified value key if this map contains a mapping for the key */
		void remove(int key) {
			int id = key % N;
			auto &list = vvp[id];
			for (auto it = list.begin(); it != list.end(); it++) {
				if ((*it).first == key) {
					list.erase(it);
					return;
				}
			}
		}
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
