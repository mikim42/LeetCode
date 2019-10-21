/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   412.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:13:18 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 11:13:19 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 412. Fizz Buzz [easy]
*/

class Solution {
	public:
		vector<string> fizzBuzz(int n) {
			vector<string> v;

			for (int i = 1; i <= n; i++) {
				if (i % 15 == 0)
					v.push_back("FizzBuzz");
				else if (i % 3 == 0)
					v.push_back("Fizz");
				else if (i % 5 == 0)
					v.push_back("Buzz");
				else
					v.push_back(std::to_string(i));
			}
			return v;
		}
};
