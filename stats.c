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
 * @file <Add File Name> stats.c
 * @brief <Add Brief Description Here >
 * The 1st assignment
 * <Add Extended Description Here>
 * This program statistics to the command line using a variety of c-programming operators and features
 * @author <Add FirsName LastName> Anh Tran
 * @date <Add date > Dec 21st 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char *ptr);
//void sort_array(unsigned char *ptr);
void print_statistics(unsigned char *ptr);
unsigned char find_median(unsigned char *ptr, unsigned int len);
unsigned char find_minimum(unsigned char *ptr, unsigned int len);
unsigned char find_maximum(unsigned char *ptr, unsigned int len);
unsigned char find_mean(unsigned char *ptr, unsigned int len);
void sort_array(unsigned char *ptr, unsigned int len);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("%u\n", find_median(test, 40));
}

/* Add other Implementation File Code Here */

unsigned char find_maximum(unsigned char *ptr, unsigned int len) {
 unsigned char max = *ptr; // Initial value of max = test[0]
 unsigned int i;

 // Return 0 if pointer points to NULL
 if (ptr == NULL) {
  return 0;
 }

 if (len <= 0) {
  len = 1;
 }

 // Find the maximum value by assigning the greater to variable max 
 for (i = 0; i < len; i++) {
  if (max < *(ptr + i)) {
   max = *(ptr + i);
  }
 }
 return max;
}

unsigned char find_minimum(unsigned char *ptr, unsigned int len) {
 unsigned char min = *ptr; // Initial value of min = test[0]
 unsigned int i;

 // Return 0 if pointer points to NULL
 if (ptr == NULL) {
  return 0;
 }

 if (len <= 0) {
  len = 1;
 }

 // Find the minimum value by assigning the less number to variable min
 for (i = 0; i < len; i++) {
  if (min > *(ptr + i)) {
   min = *(ptr + i);
  }
 }
 return min;
}

unsigned char find_mean(unsigned char *ptr, unsigned int len) {
 unsigned long mean = 0; // Initial value of mean
 unsigned int i;

 // Return 0 if pointer points to NULL
 if (ptr == NULL) {
  return 0;
 }

 if (len <= 0) {
  len = 1;
 }

 // Find the mean value
 for (i = 0; i < len; i++) {
  mean = mean + *ptr;
  ptr++;
 }
 return (mean / len);
}

void sort_array(unsigned char *ptr, unsigned int len) {
 unsigned char sort[SIZE];
 sort[0] = *ptr;
 unsigned int temp = 0;
 // Assign sort[i] = test[i]
 for (unsigned int i = 0; i < SIZE; i++) {
  sort[i] = *(ptr + i);
 }
 printf("The new array\n");
 
 for (unsigned int i = 0; i < SIZE; i++) {
  for (unsigned int j = i + 1; j < SIZE; j++)
  {
   if (sort[i] < sort[j]) {
    temp = sort[j];

    sort[j] = sort[i];

    sort[i] = temp;
   }
   else {
    sort[i] = sort[i];
   }
  }
  printf("Sort[%u]: %u\n", i, sort[i]);
 } 
}

unsigned char find_median(unsigned char *ptr, unsigned int len) {
 unsigned char sort[SIZE];
 unsigned int sum = 0;
 unsigned char median;
 sort[0] = *ptr;
 unsigned int temp = 0;
 // Assign sort[i] = test[i]
 for (unsigned int i = 0; i < SIZE; i++) {
  sort[i] = *(ptr + i);
 }
 
 for (unsigned int i = 0; i < SIZE; i++) {
  for (unsigned int j = i + 1; j < SIZE; j++)
  {
   if (sort[i] < sort[j]) {
    temp = sort[j];

    sort[j] = sort[i];

    sort[i] = temp;
   }
   else {
    sort[i] = sort[i];
   }
  }
 }
 
 if (SIZE % 2 == 0) {
  median = (sort[SIZE/2] + sort[(SIZE/2) - 1]) / 2;
 }
 else {
  median = sort[SIZE/2 + 1];
 }
 return median;
}
