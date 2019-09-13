/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   131.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:37:44 by mikim             #+#    #+#             */
/*   Updated: 2019/09/12 18:38:37 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 131. [medium] Palindrome Partitioning
*/

class Solution {
	public:
		vector<vector<string>> partition(string s) {
			vector<vector<string> > ret;
			if(s.empty()) return ret;

			vector<string> path;
			dfs(0, s, path, ret);

			return ret;
		}

		void dfs(int index, string& s, vector<string>& path, vector<vector<string> >& ret) {
			if(index == s.size()) {
				ret.push_back(path);
				return;
			}
			for(int i = index; i < s.size(); ++i) {
				if(isPalindrome(s, index, i)) {
					path.push_back(s.substr(index, i - index + 1));
					dfs(i+1, s, path, ret);
					path.pop_back();
				}
			}
		}

		bool isPalindrome(const string& s, int start, int end) {
			while(start <= end) {
				if(s[start++] != s[end--])
					return false;
			}
			return true;
		}
};
