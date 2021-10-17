/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** func_ptr
*/

#ifndef FUNC_PTR_H_
#define FUNC_PTR_H_

#include "func_ptr_enum.h"

typedef void (*func_t)(const char *str);

typedef struct action_func_s
{
    action_t action;
    func_t function;
} action_func_t;

void do_action(action_t action, const char *str);
void print_42(const char *str);
void print_reverse(const char *str);
void print_upper(const char *str);
void print_normal(const char *str);

#endif /* !FUNC_PTR_H_ */