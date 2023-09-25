/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** check_highest_number
*/

#include "../include/my.h"

int check_highest_number_cordy(int **tab, int counts)
{
    int l = 0, m = 0;
    int cordx, cordy = 0;
    int high = 0;

    while (l < counts) {
        while (tab[l][m] != -1) {
            if (high < tab[l][m]) {
                high = tab[l][m];
                cordy = l;
                cordx = m;
            }
            m++;
        }
        m = 0;
        l++;
    }
    return cordy;
}