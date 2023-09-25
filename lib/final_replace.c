/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** final_replace
*/

#include "../include/my.h"

void final_replace(char **tab, int **tabint, int counts, int length)
{
    int m = check_highest_number_cordx(tabint, counts) - length + 1;
    int l = check_highest_number_cordy(tabint, counts) - length + 1;
    int x = m;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            tab[l][m] = 'x';
            m++;
        }
        m = x;
        l++;
    }
}