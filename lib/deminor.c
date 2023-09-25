/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** deminor
*/

#include "../include/my.h"

int deminor(int **tab, int l, int m)
{
    if (tab[l][m - 1] <= tab[l - 1][m] && tab[l][m - 1] <= tab[l - 1][m - 1])
        return tab[l][m - 1];
    else if (tab[l - 1][m] < tab[l - 1][m - 1])
        return tab[l - 1][m];
    else
        return tab[l - 1][m - 1];
}