/* 
 * File:   PointerArrayTest.c
 * Author: karthikkalyan
 *
 * Created on July 8, 2011, 12:56 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;  //declaring a pointer and the type of the pointer
int main(void) {
    int i;
    ptr = &my_array[0]; //initialising the pointer and pointing our pointer to the first element of the array
    printf("\n\n");
    for (i = 1; i<6; i++)
    {
        printf("my_array[%d] = %d", i, my_array[i]);    /*<-- A */
        //printf("ptr + %d = %d\n" , i , *(ptr + i));    /*<-- B */
        //printf("ptr + %d = %d\n",i, *ptr++);
        printf("ptr + %d = %d\n",i, *(++ptr));
    }
    return 0;
}

