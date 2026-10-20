/*

  Q.accept one character from user and convert case of that character.

*/

//////////////////////////////////////////////////////////
//
//   function name:displayconvert
//   description  :convert the case of that character
//    input       :char
//    output      :char
//    author      :maruti kondiba waghmode
//    date        :19-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void displayconvert(char cvalue)
{

  if (cvalue >= 'a' && cvalue <= 'z')
  {
    printf("%c", cvalue - 32);
  }
  else if (cvalue >= 'A' && cvalue <= 'z')
  {
    printf("%c", cvalue + 32);
  }
}
int main()
{
  char cValue = '\0';

  printf("enter the charecter:\n");
  scanf("%c", &cValue);

  displayconvert(cValue);

  return EXIT_SUCCESS;
}