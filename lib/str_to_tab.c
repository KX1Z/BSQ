/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** str_to_tab
*/

#include "../include/my.h"

int **str_to_tab(char *str)
{
    int **tab = malloc(sizeof(int*) * (count_lines(str)));
    int l = 0;
    int m = 0;
    int length = line_length(str);
    tab[0] = malloc(sizeof(int) * length);
    fill_tab(str, tab, length);
    return tab;
}