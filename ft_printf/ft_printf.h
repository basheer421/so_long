/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:53:08 by bammar            #+#    #+#             */
/*   Updated: 2022/10/07 20:57:42 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
size_t	pf_strlen(const char *s);
int		pf_putchar_fd(int c, int fd);
int		pf_putstr_fd(char *s, int fd);
int		pf_putnbr_fd(int n, int fd);

#endif