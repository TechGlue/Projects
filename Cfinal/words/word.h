/**
 * @file word.h
 * @author Stu Steiner
 * @brief The word data structure
 *
 * The word data structure.  A word contains a ticker symbol, price,
 * and a publisher.
 */

#ifndef WORD_H_
#define WORD_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief The word data structure.
 *
 * A word contains an array of letter and an int for the length.
 *
 * @note I prefer named structures and then the typedef after the structure
 */
struct word
{
   char * ltrs;
   int len;
};

typedef struct word Word;


/**
 * @brief Cleans up all dynamically allocated memory for the word
 * Cleans up and frees all the dynamically allocated memory 
 * In this case ltrs
 * Each pointer in the specific data type is set to NULL after it has been freed.
 * @param passedIn - The void * passed in representing the specific word
 */
void cleanTypeWord(void * ptr);


/**
 * @brief Builds and returns a single word.
 * Reads the initial data from the file and then builds
 * an object of type word.
 * @note The carriage return will be removed when reading from the file
 * @param fin - The FILE * representing the open file
 * @return void * - Representing a word object
 */
void * buildTypeWord(FILE * fin);


/**
 * @brief Prints the specific word.
 * Format is word - length
 * @param passedIn - The void * passed in representing a specific word
 */
 void printTypeWord(void * passedIn);


/**
 * @brief Builds and returns a single word.
 * Reads the initial data from the keyboard by prompting the user.
 * A word object is constructed.
 * @note The carriage return will be removed when reading from the keyboard
 * @return void * - Representing a word object
 */
void * buildTypeWord_Prompt();


/**
 * @brief Compares two objects of type word.
 * Words are compared based on the letters (word)
 * @note The passed in items will need to be cast to the appropriate word type.
 * @param p1 - The void * representing an object of type word
 * @param p2 - The void * representing an object of type word
 * @return int - Representing order < 0 indicates p1 is less than p2,
 * > 0 indicates p1 is greater than p2 and == 0 indicates p1 == p2 for contents
 */
int compareWords(const void * p1, const void * p2);



#endif /* WORD_H_ */
