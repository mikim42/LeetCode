/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1185.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:07:31 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 11:08:00 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1185. Day of the Week [easy]
*/

class Solution {
	public:
		string dayOfTheWeek(int day, int month, int year) {
			string days[] = {
				"Sunday",
				"Monday",
				"Tuesday",
				"Wednesday",
				"Thursday",
				"Friday",
				"Saturday"
			};
			int yearCode;
			int monthCode[] = {0, 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
			int centuryCode[] = {4, 2, 0, 6, 4, 2, 0};
			int leapCode = 0;

			yearCode = ((year % 100) + (year % 100) / 4) % 7;
			if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month < 3) {
				leapCode = -1;
			}
			int x = (yearCode + monthCode[month] + day +
					centuryCode[(year / 100 + 4) % 7] + leapCode) % 7;
			return days[x];
		}
};
