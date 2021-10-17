/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** add
*/

#include "castmania.h"

static int abs(int x)
{
    return (x) > 0 ? (x) : (-x);
}

int normal_add(int a, int b)
{
    return a + b;
}

int absolute_add(int a, int b)
{
    return abs(a) + abs(b);
}

void exec_add(addition_t *operation)
{
    operation->add_op.res = (operation->add_type == NORMAL) ?
    normal_add(operation->add_op.a, operation->add_op.b) :
    (operation->add_type == ABSOLUTE) ?
    absolute_add(operation->add_op.a, operation->add_op.b) :
    operation->add_op.res;
}