/*

  Q. Accept the marks of a student out of 100 and display the grade according to the following criteria of marks .

*/

//////////////////////////////////////////////////////////
//
//   function name:displaygrade
//   description  :check the student grade
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void displaygrade(float fmarks)
{

  if (fmarks >= 90 && fmarks <= 100)
  {
    printf("Grade A\n");
  }

  else if (fmarks >= 75 && fmarks <= 89)
  {
    printf("Grade B\n");
  }
  else if (fmarks >= 60 && fmarks <= 74)
  {
    printf("Grade C\n");
  }
  else if (fmarks >= 40 && fmarks <= 59)
  {
    printf("Grade D\n");
  }
  else if (fmarks <= 40)
  {
    printf("Fail\n");
  }

  else
  {
    printf("invalid marks\n");
  }
}

int main()
{
  float fvalue = 0.0f;

  printf("enter the marks:\n");
  scanf("%f", &fvalue);

  displaygrade(fvalue);

  return EXIT_SUCCESS;
}