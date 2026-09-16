/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/


/**
 * @file <Stats.h>
 * @brief <header file to house the function declaration for stats.c>
 *
 * @author <Justin Polchies>
 * @date <09/10/2026>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief Prints the elements of an array to the screen.
 *
 * @param arr  Pointer to the first element of an unsigned char array.
 * @param size The number of elements in the array.
 */
void print_array(unsigned char* arr, size_t size);

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param arr  Pointer to the first element of an unsigned char array.
 * @param size The number of elements in the array.
 */
void print_statistics(unsigned char* arr, size_t size);

/**
 * @brief Sorts the array from largest to smallest.
 *
 * @param arr  Pointer to the first element of an unsigned char array.
 * @param size The number of elements in the array.
 */
void sort_array(unsigned char* arr, size_t size);

/**
 * @brief Finds the median value of a given array.
 *
 * @param arr  Pointer to the first element of an unsigned char array.
 * @param size The number of elements in the array.
 * @return     The median value as an unsigned char.
 */
unsigned char find_median(unsigned char* arr, size_t size);

/**
 * @brief Finds the mean value of a given array.
 *
 * @param arr  Pointer to the first element of an unsigned char array.
 * @param size The number of elements in the array.
 * @return     The rounded mean value as an unsigned char.
 */
unsigned char find_mean(unsigned char* arr, size_t size);

/**
 * @brief Finds the maximum value of a given array.
 *
 * @param arr  Pointer to the first element of an unsigned char array.
 * @param size The number of elements in the array.
 * @return     The maximum value as an unsigned char.
 */
unsigned char find_maximum(unsigned char* arr, size_t size);

/**
 * @brief Finds the minimum value of a given array.
 *
 * @param arr  Pointer to the first element of an unsigned char array.
 * @param size The number of elements in the array.
 * @return     The minimum value as an unsigned char.
 */
unsigned char find_minimum(unsigned char* arr, size_t size);

#endif /* __STATS_H__ */
