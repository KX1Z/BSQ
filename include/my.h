/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h> 
    #include <stddef.h>



void my_putchar(char c);
void print_digits(void);
int my_strlen(char *str);
int count_lines(char *str);
int **str_to_tab(char *str);
int fill_map(char *str, char *map);
int line_length(char *str);
void my_display_tab_array(int **tab, int turns);
void fill_tab(char *str, int**tab, int length);
void show_number(int nb);
void fill_tabint(int **tab, int counts);
int deminor(int **tab, int l, int m);
int check_highest_number_cordy(int **tab, int counts);
int check_highest_number_cordx(int **tab, int counts);
int count_ints(int **tab, int l, int m);
char** fill_tabchar(int **tab, int counts);
void final_replace(char **tab, int **tabint, int counts, int length);
int check_bsq(int **tab, int counts);

#endif /* !MY_H_ */
