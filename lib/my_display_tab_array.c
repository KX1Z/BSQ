/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** my_display_tab_array
*/

#include "../include/my.h"

void my_display_tab_array(int **tab, int turns)
{
    int l = 0;
    int m = 0;

    while(l < turns) {
        while(tab[l][m] != -1) {
            show_number(tab[l][m]);
            m++;
        }
        m = 0;
        l++;
        write(1, "\n", 1);
    }
}