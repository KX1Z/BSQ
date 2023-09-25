/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-keziah.picq
** File description:
** bsq
*/

#include "./include/my.h"

int main(int argc, char *argv[])
{
    int nb_lines;
    int length;
    int **tab;
    char **mapping;
    struct stat sb;
    stat(argv[1], &sb);
    char *buff = malloc(sizeof(char)*sb.st_size);
    char *map  = malloc(sizeof(char)*sb.st_size);
    int fd = open(argv[1], O_RDONLY);
    read(fd, buff, sb.st_size);
    fill_map(buff, map);
    nb_lines = count_lines(map);
    tab = str_to_tab(map);
    fill_tabint(tab, nb_lines);
    mapping = fill_tabchar(tab, nb_lines);
    final_replace(mapping, tab, nb_lines, check_bsq(tab, nb_lines));
    for (int i = 0; i < nb_lines; i++)
        printf("%s", mapping[i]);
}