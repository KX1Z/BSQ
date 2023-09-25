/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** count_ints
*/

#include "../include/my.h"

int count_ints(int **tab, int l, int m)
{
    while (tab[l][m] != -1)
        m++;
    return m + 1;
}