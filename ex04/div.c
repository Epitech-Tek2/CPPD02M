/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** div
*/

#include "castmania.h"

int integer_div(int a, int b)
{
    return (b) ? a / b : 0;
}

float decimale_div(int a, int b)
{
    return (b) ? a / (float)b : 0;
}

void exec_div(division_t *operation)
{
    (operation->div_type == INTEGER) ?
    ((integer_op_t *)operation->div_op)->res =
    integer_div(((integer_op_t *)operation->div_op)->a,
    ((integer_op_t *)operation->div_op)->b) :
    (operation->div_type == DECIMALE) ?
    ((decimale_op_t *)operation->div_op)->res =
    decimale_div(((decimale_op_t *)operation->div_op)->a,
    ((decimale_op_t *)operation->div_op)->b) : 0;
}