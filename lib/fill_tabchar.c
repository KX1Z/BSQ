/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** fill_tabchar
*/

#include "../include/my.h"

char** fill_tabchar(int **tab, int counts)
{
    int l = 0, m = 0, k = 0;
    int length = count_ints(tab, l, m);
    char **chartab = malloc(sizeof(char *) * counts);
    chartab[0] = malloc(sizeof(char) * length);

    while (k < counts) {
        while (tab[l][m] != - 1) {
            if (tab[l][m] == 0)
                chartab[l][m] = 'o';
            else
                chartab[l][m] = '.';
            m++;
        }
        if (tab[l][m] == -1)
            chartab[l][m] = '\n';
        l++;
        k++;
        m = 0;
        chartab[l] = malloc(sizeof(char) * length);
    }
    return chartab;
}