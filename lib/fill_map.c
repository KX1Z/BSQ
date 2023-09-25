/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** fill_map
*/

#include "../include/my.h"

int fill_map(char *str, char *map)
{
    int i = 0;
    int k = 0;

    while (str[i] >= '0' && str[i] <= '9')
        i++;
    i++;
    while (str[i] != '\0') {
        map[k] = str[i];
        i++;
        k++;
    }
}