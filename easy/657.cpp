/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   657.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:12:42 by mikim             #+#    #+#             */
/*   Updated: 2019/11/12 11:13:02 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 657. Robot Return to Origin [easy]
*/

class Solution {
	public:
		bool judgeCircle(string moves) {
			int vertical = 0, horizontal = 0;

			for (auto c : moves) {
				if (c == 'U') vertical++;
				else if (c == 'D') vertical--;
				else if (c == 'R') horizontal++;
				else if (c == 'L') horizontal--;
			}
			return vertical == 0 && horizontal == 0;
		}
};
