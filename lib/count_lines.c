/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** count_lines
*/

#include "../include/my.h"

int count_lines(char *str)
{
    int counteur = 0;

    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '\n')
            counteur++;
    }
    return counteur;
}