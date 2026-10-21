/*

  Q.accept an eploye monthly salary and completed year of service.calculate the bonus using thase rules more than 10 years of service erns a bonus of 15% of monthaly salary 5 to 10 years earns 10% less than 5 year enrns 5% salary must be positive and year service cannot be negative.

*/

//////////////////////////////////////////////////////////
//
//   function name:calculatebonus
//   description  :claculate the bonus of employe bonus depends on as exprience
//    input       :int,float
//    output      :int,float
//    author      :maruti kondiba waghmode
//    date        :21-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void calculatebonus(float salary, int years)
{
  float bonus = 0.0f;

  if (years > 10)
  {
    bonus = salary * 15 / 100;
    printf("bonus =%f", bonus);
  }
  else if (years > 5 && years < 10)
  {

    bonus = salary * 10 / 100;
    printf("bonus =%f", bonus);
  }

  else if (years < 5)
  {

    bonus = salary * 5 / 100;
    printf("bonus =%f", bonus);
  }
  else
  {

    printf("envalid years");
  }
}

int main()
{
  float fsalary = 0.0f;
  int iyears = 0;

  printf("enter salary and years of service:\n");
  scanf("%f %d", &fsalary, &iyears);

  calculatebonus(fsalary, iyears);

  return EXIT_SUCCESS;
}