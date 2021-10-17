/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** func_ptr
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    char *tmp = strdup(str);

    for (size_t i = 0; i < strlen(str) / 2; i++) {
        tmp[i] = str[strlen(str) - i - 1];
        tmp[strlen(str) - i - 1] = str[i];
    }
    print_normal(tmp);
    free(tmp);
}

void print_upper(const char *str)
{
    char *tmp = strdup(str);

    for (size_t i = 0; i != strlen(str); tmp[i] = toupper(tmp[i]), i++);
    print_normal(tmp);
    free(tmp);
}

void print_42(const char *str __attribute__((unused)))
{
    print_normal("42");
}

void do_action(action_t action, const char *str)
{
    action_func_t functions[] =
    {
        {PRINT_NORMAL, &print_normal},
        {PRINT_REVERSE, &print_reverse},
        {PRINT_UPPER, &print_upper},
        {PRINT_42, &print_42},
    };
    for (int i = 0; 4 > i; i++)
        if (action == functions[i].action)
            (*functions[i].function)(str);
}