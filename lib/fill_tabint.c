/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** fill_tabchar
*/

#include "../include/my.h"

void fill_tabint(int **tab, int counts)
{
    int l = 1;
    int m = 1;
    int k = 1;

    while (k < counts) {
        while (tab[l][m] != -1) {
            if (tab[l][m] == 0)
                m++;
            else {
                tab[l][m] = deminor(tab, l, m) + 1;
                m++;
            }
        }
        l++;
        m = 1;
        k++;
    }
}