/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/10/07 22:44:06 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** **
**
**
**  Воспроизведите поведение функции strcpy (man strcpy).
**
**
**  - Вот как это должно быть обьявлено:
**
**       char	*ft_strcpy(char *dest, char *src);
**
**
** ************************************************************************** **
**
**  Аргументы:
**
**  dest – указатель на строку, в которую будут скопированы данные.
**  src – указатель на строку источник копируемых данных.
**
**  Возвращаемое значение:
**
**  Функция возвращает указатель на строку, в которую скопированы данные.
**
**  Описание:
**
**  Функция ft_strcpy копирует данные из строки, на которую указывает аргумент src,
**  в строку, на которую указывает аргумент dest, пока не встретится символ конца
**  строки (нулевой символ). Копирование производится вместе с символом конца строки.
**
**  Если строки перекрываются, результат копирования будет не определен.
**
**
** ************************************************************************** **
**
**
** Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую
**
**
** ************************************************************************** */
/* ************************************************************************** */


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*t;

	t = dest;
	while ((*t++ = *src++) != 0)
		;
	return (dest);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */