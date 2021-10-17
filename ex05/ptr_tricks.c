/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** ptr_tricks
*/

#include <stdio.h>
#include "ptr_tricks.h"

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    return (ptr2 > ptr1) ? (ptr2 - ptr1) : (ptr1 - ptr2);
}

whatever_t *get_struct_ptr(const int *member_ptr)
{
    whatever_t s;

    return (void *)member_ptr - ((void *)&s.member - (void *)&s);
}