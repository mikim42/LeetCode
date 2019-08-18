/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   223.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 22:17:02 by mikim             #+#    #+#             */
/*   Updated: 2019/08/17 22:23:33 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 223. [medium] Rectangle Area
*/

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        if (min(C, G) < max(A, E) || min(D, H) < max(B, F))
            return (abs(A - C) * abs(B - D)) + (abs(E - G) * abs(F - H));
        else
        return (
            (abs(A - C) * abs(B - D)) -
            abs(min(C, G) - max(A, E)) * abs(min(D, H) - max(B, F)) +
            (abs(E - G) * abs(F - H))
        );
    }
};
