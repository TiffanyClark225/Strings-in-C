//Author: Tiffany Clark
//Date: 1/22/2022
//Assignment: CS270 Project 0

#include "p0.h"

/* returns the number of characters in the sequence pointed to
 *  by first arg, excluding the null terminator.  I.e.,
 *  does the same thing as the library function strlen().
 */
int str_length(char *s) {
  //size stores the number of characters in the sequence
  int size = 0;
  //Iterates through the sequence using while loop while the null terminator is not encountered
  while(*s!='\0')
  {
    size++;
    s++;
  }
  return size;
}

/* returns true (nonzero) if every character in the sequence
 * pointed to by sp is a letter of the alphabet (i.e., either
 * in the range ‘a’ through ‘z’ or ‘A’ through ‘Z’).
 */
int str_isalpha(char *s) {
  //Iterates through the sequence using while loop while the null terminator is not encountered
  while (*s != '\0')
  {
    //If the char is not within the range of lowercase or uppercase 'a' through 'z' then it returns 0
    if ((*s < 'a' || *s > 'z') && (*s < 'A' || *s > 'Z'))
    {
      return 0;
    }
    s++;
  }
  return 1;
}

/* copies the contents of the character sequence indicated by from
 * (including the null terminator) into the space indicated by to.
 */
void str_copy(char *to, char *from) {
  //Uses while loop to iterate through the char in sequence pointed to by from while null terminator isn't encountered
  while (*from != '\0')
  {
    //Char in from is copied to location pointed to by to
    *to = *from;
    //Pointers are incremented
    to++;
    from++;
  }
  //Adds null terminator to end sequence
  *to = '\0';

}

/* modifies the string pointed to by sp by replacing each character
 * that is in the sequence “bad” with a space character ’ ’.
 */
void str_censor(char *sp, char *bad) {
  //Uses for loop to iterate through sp seqence
  for (int m = 0; sp[m] != '\0'; m++)
  {
    //Uses for loop to iterate through bad sequence
    for (int n = 0; bad[n] != '\0'; n++)
    {
      //Replaces the current char in sp sequence with a space if the current char in sp sequence and current char in bad sequence are equal
      if (sp[m] == bad[n])
      {
        sp[m] = ' ';
        break;
      }
    }

  }

}

/* appends the string pointed to by suffix to the string pointed to by base */
void str_concat(char *base, char *suffix) {
  //Uses while loop to iterate through char in seqence pointed to by base while null terminator isn't encountered
  while (*base !='\0')
  {
    base++;
  }
  //Uses while loop to iterate through the char in sequence pointed to by suffix while null terminator isn't encountered
  while (*suffix != '\0')
  {
    //Char in suffix is copied to location pointed to by base
    *base = *suffix;
    //Pointers are incremented
    base++;
    suffix++;
  }
  //Adds null terminator to end sequence
  *base = '\0';

}

