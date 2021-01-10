/*
 * calculator.h
 *
 *  Created on: Aug 31, 2020
 *      Author: A. Saddik
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <stdbool.h>

/* maximum string size */
#define STRING_SIZE 1024
#define Res_STR_SIZE 50
/*currently only one string is allocated*/
#define Num_Strings 1
/*number of supported math  expressions
 * it should be exactly the number of supported expressions*/
#define reserved_strings 20

/*calculate the substring length for every single number in the main string*/
int calculate_numlen(char * str_num);
/*check if the given string has parentheses and if they are correctly closed*/
int check_parentheses(char * str, int len);
/*parse the string given from the user as an input*/
int string_parse(const char * str_o, char * result_str, double * result);
/*this function checks signs correctness of the string*/
int check_sign(char * str, int len);

/*this function makes check if there are no sign between two numbers*/
int check_errors(char * str, int len);

int is_arith_sign(char * str);
/*do devision and multiplication operations*/
double calculate_dev_mul(char * str, int len);
/*calculate the given input 'str'*/
double calculate(char * str, int len);

int calculate_numlen_backward(char * str_num);

double str_reconst(char * str, char * start, char * end);

double calculate_parentthesis_content(char * str_o, int len, int parenthesis_num);

int check_reserved_words(char * str);
/*this function ignores the zeros which has no value*/
int control_fraction(char * str, int len);

char * find_last_word(char * str);

int calculate_numlen_sign(char * str_num);

int quit_program(const char * str);

enum calc_status {
    addition,
    substraction
};

enum error_enum {
    parentheses_error = -15,
	invalid_input_character,
	no_arithmetic_sign,
	extra_arithmetic_sign,
	no_numbers_found,
	memory_allocation_failed,
	empty_parentheses_content,
	negative_num,
	empty_string,
	out_of_range,
	close_program,
	clean_screen
};

enum math_expressions {
    ABS,
    SQRT,
    EXP,
    COS,
    COSH,
    ACOS,
    ACOSH,
    SIN,
    SINH,
    ASIN,
    ASINH,
    TAN,
    TANH,
    ATAN,
    ATANH,
    FLOOR,
    LOG,
    LOG10,
    CBRT,
    CEIL
};

#endif /* CALCULATOR_H_ */
