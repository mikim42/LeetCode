/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   122.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:39:15 by mikim             #+#    #+#             */
/*   Updated: 2019/09/16 08:11:02 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 122. Best Time to Buy and Sell Stock II [easy]
*/

class Solution {
	public:
		int maxProfit(vector<int>& prices) {
			int maxprofit = 0;
			for (int i = 1; i < prices.size(); i++) {
				if (prices[i] > prices[i - 1])
					maxprofit += prices[i] - prices[i - 1];
			}
			return maxprofit;
		}
};
