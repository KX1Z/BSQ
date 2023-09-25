/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** str_to_tab1
*/

#include "../include/my.h"

void fill_tab(char *str, int **tab, int length)
{
    int l = 0;
    int m = 0;

    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '.') {
            tab[l][m] = 1;
            m++;
        }
        if (str[i] == 'o') {
            tab[l][m] = 0;
            m++;
        }
        if (str[i] == '\n') {
            tab[l][m] = -1;
            m = 0;
            l++;
            tab[l] = malloc(sizeof(int) * length);
        }
    }
}