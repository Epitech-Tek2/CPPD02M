/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-clement.muth
** File description:
** castmania
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "castmania.h"

static void process(instruction_t *instruction)
{
    exec_add(instruction->operation);
    if (instruction->output_type == VERBOSE)
        printf("%i\n", ((addition_t *)instruction->operation)->add_op.res);
}

static void process_else(instruction_t *instruction)
{
    exec_div(instruction->operation);
    if (instruction->output_type == VERBOSE) {
        if (((division_t *)instruction->operation)->div_type == INTEGER)
            printf("%i\n", ((integer_op_t *)
            ((division_t *)instruction->operation)->div_op)->res);
        else
            printf("%f\n", ((decimale_op_t *)
            ((division_t *)instruction)->div_op)->res);
    }
}

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *instruction = (instruction_t *)data;

    if (instruction_type == ADD_OPERATION)
        process(instruction);
    else if (instruction_type == DIV_OPERATION)
        process_else(instruction);
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    instruction_type == PRINT_INT ? printf("%i\n", (int) *((int *)data)) :
    (instruction_type == PRINT_FLOAT) ?
    printf("%f\n", (float) *((float *)data)) :
    exec_operation(instruction_type, data);
}