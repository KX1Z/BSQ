/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}