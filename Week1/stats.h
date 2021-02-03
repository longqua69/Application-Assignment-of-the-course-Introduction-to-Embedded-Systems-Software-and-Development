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
 * @file <Add File Name>: stats.h
 * @brief <Add Brief Description Here >
 * The 1st assignment
 * <Add Extended Description Here>
 * This program statistics to the command line using a variety of c-programming operators and features
 * @author <Add FirsName LastName> Anh Tram
 * @date <Add date > Dec 21st 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/******************************************************************************
 * @brief print the data set provided
 *     This function takes a pointer to an arry and performs
 *     printing the array to the screen
 * @param *ptr: An unsigned char pointer to an n-element data array
 * 
 * @return    : No return value
 *****************************************************************************/
void print_array(unsigned char *ptr);

/******************************************************************************
 * @brief sort the data set provided
 *     This function takes a set of numbers and performs sorting he array from
 *      largest to smallest. (The zeroth Element should be the largest value, 
 *      and the last element (n-1) should be the smallest value. )    
 * @param *ptr: An unsigned char pointer to an n-element data array
 * 
 * @return    : No return value
 *****************************************************************************/
//void sort_array(unsigned char *ptr);
void sort_array(unsigned char *ptr, unsigned int len);

/******************************************************************************
 * @brief print the statistics of the data set provided
 *     This function takes a an array of data, and prints the statistics 
 *     of an array including minimum, maximum, mean, and median
 *     
 * @param *ptr: An unsigned char pointer to an n-element data array
 * 
 * @return    : No return value
 *****************************************************************************/
void print_statistics(unsigned char *ptr);

/******************************************************************************
 * @brief find median value of the data set provided
 *     This function takes a an array of data and a length, returns the median
 *     value
 * @param *ptr: An unsigned char pointer to an n-element data array
 * @param  len: An unsigned integer as the size of the array
 * @return    : Median value of the array provided.
 *****************************************************************************/
unsigned char find_median(unsigned char *ptr, unsigned int len);

/******************************************************************************
 * @brief find minimum value of the data set provided
 *     This function takes a an array of data and a length, returns the minimum
 *     value
 * @param *ptr: An unsigned char pointer to an n-element data array
 * @param  len: An unsigned integer as the size of the array
 * @return    : Minimum value of the array provided.
 *****************************************************************************/
unsigned char find_minimum(unsigned char *ptr, unsigned int len);

/******************************************************************************
 * @brief find maximum value of the data set provided
 *     This function takes a an array of data and a length, returns the maxium
 *     value
 * @param *ptr: An unsigned char pointer to an n-element data array
 * @param  len: An unsigned integer as the size of the array
 * @return    : Maximum value of the array provided.
 *****************************************************************************/
unsigned char find_maximum(unsigned char *ptr, unsigned int len);

/******************************************************************************
 * @brief find mean value of the data set provided
 *     This function takes a an array of data and a length, returns the mean
 *     value
 * @param *ptr: An unsigned char pointer to an n-element data array
 * @param  len: An unsigned integer as the size of the array
 * @return    : Mean value of the array provided.
 *****************************************************************************/
unsigned char find_mean(unsigned char *ptr, unsigned int len);

#endif /* __STATS_H__ */
