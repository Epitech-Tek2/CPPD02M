/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** tab_to_2dtab
*/

#include <stdio.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    *res = malloc(sizeof(int *) * length);
    if (!*res)
        return;
    for (int x = 0; x < length; x++) {
        (*res)[x] = malloc(sizeof(int) * width);
        if (!(*res)[x])
            return;
        for (int y = 0; y < width; y++)
            (*res)[x][y] = tab[x * width + y];
    }
}