/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 14:12:52 by wzheng            #+#    #+#             */
/*   Updated: 2018/07/01 23:02:25 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>
# include "check.h"

int		check_row(char **board, int row, char n)
{
	int		c;

	c = 0;
	while (c < 9)
	{
		if (board[row][c] == n)
			return (1);
		c++;
	}
	return (0);
}

int		check_col(char **board, int col, char n)
{
	int		r;

	r = 0;
	while (r < 9)
	{
		if (board[r][col] == n)
			return (1);
		r++;
	}
	return (0);
}

int		check_block(char **board, int s_row, int s_col, char n)
{
	int		r;
	int		c;

	r = 0;
	while (r < 3)
	{
		c = 0;
		while (c < 3)
		{
			if (board[r + s_row][c + s_col] == n)
				return (1);
			c++;
		}
		r++;
	}
	return (0);
}

int		is_ok(char **board, int row, int col, char n)
{
	return (!check_row(board, row, n) && !check_col(board, col, n)
			&& !check_block(board, row - row % 3, col - col % 3, n));
}

int		find_unassigned_location(char **board, int *r, int *c, int n)
{
	*r = 0;
	while (*r < n)
	{
		*c = 0;
		while (*c < n)
		{
			if (board[*r][*c] == ' ')
				return (1);
			*c = *c + 1;
		}
		*r = *r + 1;
	}
	return (0);
}

#endif
