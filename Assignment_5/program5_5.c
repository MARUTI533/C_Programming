/*

    Q.accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit or special charecter. use charecter comparison without using library character classification function.

*/

//////////////////////////////////////////////////////////
//
//   function name:checkmultipledivisibility
//   description  :check divisibility
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :21-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void charactertype(char Cvalue)
{

  if ((Cvalue >= 'A') && (Cvalue <= 'Z'))
  {
    printf("upercase Alphabet\n");
  }
  else if ((Cvalue >= 'a') && (Cvalue <= 'z'))
  {
    printf("lowercase Alphabet\n");
  }
  else if ((Cvalue >= '0') && (Cvalue <= '9'))
  {
    printf("digit\n");
  }
  else
  {

    printf("special character\n");
  }
}

int main()
{
  char Ccharacter = '\0';

  printf("enter the value:\n");
  scanf("%c", &Ccharacter);

  charactertype(Ccharacter);

  return EXIT_SUCCESS;
}