/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** count_tab
*/

#include "../include/my.h"

int line_length(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    return i + 1;
}