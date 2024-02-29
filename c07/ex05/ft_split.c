/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:50:35 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/14 20:50:36 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	if (c == '\0')
		return (1);
	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int	count_strs(char *str, char *charset)
{
	int	count;
	int	i;

	i = -1;
	count = 0;
	while (str[++i])
		if (!is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			count++;
	return (count);
}

char	*copy(char *src, int begin, int end)
{
	char	*des;
	int		i;

	des = malloc(sizeof(char) * (end - begin + 1));
	i = -1;
	while (++i + begin < end)
		des[i] = src[i + begin];
	des[i] = '\0';
	return (des);
}

char	**split(char *str, char *charset, char **rst)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = -1;
	j = -1;
	start = 0;
	end = -1;
	while (str[++i])
	{
		if (is_sep(str[i], charset) && !is_sep(str[i + 1], charset))
			start = i + 1;
		else if (!is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			end = i + 1;
		if (end != -1)
		{
			rst[++j] = copy(str, start, end);
			end = -1;
		}
	}
	rst[++j] = NULL;
	return (rst);
}

char	**ft_split(char *str, char *charset)
{
	char	**rst;
	int		count;

	count = count_strs(str, charset);
	rst = malloc(sizeof(char *) * count + 1);
	return (split(str, charset, rst));
}
/*
#include <stdio.h>
void test(char *str, char *charset)
{
	char **des = ft_split(str, charset);
	while (*des != NULL)
		puts(*des++);
}
#include <string.h>
int main(void)
{
	// test("abc 1234  kkk   ", " ");
	// test("hello", "");
	//test("hello|nihao|223|coll ||| ok| | good", "|");
		test("bbaaccc", "a");
		//printf("%d\n",match("a   b     c", "  ", 2));
    // const char *stringArray[] = {"Hello", "World", "Example"};

    // printf("Size of stringArray: %zu bytes\n", sizeof(stringArray));
    // printf("Size of stringArray[0]: %zu bytes\n", sizeof(stringArray[0]));
}
*/