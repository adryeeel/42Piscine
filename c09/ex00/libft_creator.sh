#!/bin/bash

cc -c ft_putchar.c -o ft_putchar.o;
cc -c ft_swap.c -o ft_swap.o;
cc -c ft_putstr.c -o ft_putstr.o;
cc -c ft_strlen.c -o ft_strlen.o;
cc -c ft_strcmp.c -o ft_strcmp.o;
ar crs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o;
