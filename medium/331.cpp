/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   331.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:37:44 by mikim             #+#    #+#             */
/*   Updated: 2019/10/08 14:43:23 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 331. Verify Preorder Serialization of a Binary Tree [medium]
*/

class Solution {
	public:
		bool isValidSerialization(string preorder) {
			vector<string> v;
			char *tmp;
			int checker = 1;

			tmp = strtok((char*)preorder.c_str(), ",");
			while (tmp) {
				v.push_back(tmp);
				tmp = strtok(NULL, ",");
			}
			for (auto x : v) {
				if (--checker < 0)
					return false;
				if (x != "#")
					checker += 2;
			}
			return checker == 0;
		}
};
