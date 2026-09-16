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
 * @file <stats.c>
 * @brief <Program to take a predefined array and size and find statistic base information.>
 *
 *
 * @author <Justin Polchies>
 * @date <09/10/2026 >
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */

void print_array(unsigned char *arr, size_t size)
{
  int j = 0;
  for (int i = 0; i < size; i++)
  {

    j++;
    printf("Item %d: %d, ", (i + 1), arr[i]);
    if (j == 5)
    {
      printf("\n");
      j = 0;
    }
  }
}

unsigned char find_median(unsigned char *arr, size_t size)
{
  unsigned char med = 0;
  if ((size % 2) == 0)
  {
    med = (arr[(size / 2) - 1] + arr[size / 2]) / 2;
  }
  else
  {
    med = arr[(size) / 2];
  }
  return med;
}

unsigned char find_mean(unsigned char *arr, size_t size)
{
  int totalCount = 0;

  for (int i = 0; i < size; i++)
  {
    totalCount += arr[i];
  }

  return (unsigned char)(totalCount / size);
}

unsigned char find_maximum(unsigned char *arr, size_t size)
{
  // int max = arr[0];
  int max = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return (unsigned char)max;
}

unsigned char find_minimum(unsigned char *arr, size_t size)
{
  //   int min = arr[size - 1];
  unsigned char min = arr[size - 1];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}

void sort_array(unsigned char *arr, size_t size)
{
  for (int i = 0; i < size - 1; i++)
  {

    for (int j = 0; j < size - 1; j++)
    {

      if (arr[j] < arr[j + 1])
      {
        unsigned char temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void print_statistics(unsigned char *arr, size_t size)
{
  printf("\n");
  printf("Median: %d\n", find_median(arr, size));
  printf("Mean: %d\n", find_mean(arr, size));
  printf("Max: %d\n", find_maximum(arr, size));
  printf("Min: %d\n", find_minimum(arr, size));
}