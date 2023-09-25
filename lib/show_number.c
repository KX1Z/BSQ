/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** show_number1
*/

#include "../include/my.h"

void show_number(int nb) {
    
    char character = '0';

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        show_number(nb / 10);
        show_number(nb % 10);
    }
    else {
        my_putchar(character + nb);
    }
}