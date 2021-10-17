/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** mem_ptr
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mem_ptr.h"

void add_str(const char *str1, const char *str2, char **res)
{
    int x = strlen(str1);
    int y = strlen(str2);

    if (!x && !y) {
        *res = NULL;
        return;
    }
    *res = malloc(x + y + 1);
    if (!*res) {
        *res = NULL;
        return;
    }
    memset(*res, 0, x + y + 1);
    strcpy(*res, str1);
    strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    add_str(str_op->str1, str_op->str2, &str_op->res);
}