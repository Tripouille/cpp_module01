/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:44:18 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 16:44:19 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <unistd.h>

int		main(void)
{
	Logger logger("file.txt");

	logger.log("console", "console salut");
	sleep(1);
	logger.log("file", "file salut");
	sleep(1);
	logger.log("file", "file comment");
	sleep(1);
	logger.log("file", "file ca va ?");
	sleep(2);
	logger.log("console", "console fin");
	logger.log("ups", "console fin");
	return (0);
}