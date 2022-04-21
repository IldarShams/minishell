/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:27:26 by smaegan           #+#    #+#             */
/*   Updated: 2022/04/21 18:32:16 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <stdlib.h>
# include <sys/types.h>
# include <string.h>
# include <unistd.h>
# include <locale.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "./Libft/libft.h"

char	*promt(void);

#endif
