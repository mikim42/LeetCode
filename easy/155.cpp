/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   155.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:48:58 by mikim             #+#    #+#             */
/*   Updated: 2019/10/19 19:50:09 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode:  155. Min Stack [easy]
*/

class MinStack {
	public:
		MinStack() {
		}

		void push(int x) {
			arr.push_back(x);
		}

		void pop() {
			arr.pop_back();
		}

		int top() {
			return *arr.rbegin();
		}

		int getMin() {
			int minimum = arr[0];
			for (auto x : arr) {
				minimum = min(minimum, x);
			}
			return minimum;
		}
	private:
		vector<int> arr;
};
