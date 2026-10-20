/*

  Q.Accept on character from user and check wherher that charecter is vovel(a,e,i,o,u) or not.

*/

//////////////////////////////////////////////////////////
//
//   function name:chechvowel
//   description  :check the vowel or not
//    input       :char
//    output      :char
//    author      :maruti kondiba waghmode
//    date        :19-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL checkvowel(char cAlpha)
{
  if (cAlpha == 'a' || cAlpha == 'e' || cAlpha == 'i' || cAlpha == 'o' || cAlpha == 'u' || cAlpha == 'U' || cAlpha == 'O' || cAlpha == 'I' || cAlpha == 'E' || cAlpha == 'A')
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  char cvalue = '\0';
  BOOL bcheck = false;

  printf("enter the charecter:\n");
  scanf("%c", &cvalue);

  bcheck = checkvowel(cvalue);

  if (bcheck == true)
  {
    printf("it is a vowel\n");
  }

  else
  {
    printf("it is not vowel\n");
  }
  return EXIT_SUCCESS;
}