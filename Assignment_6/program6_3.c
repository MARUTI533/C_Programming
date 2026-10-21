/*

    Q.Accept the total purchase amount and the final payable amount after applying the following discount negative purchase amount are invalid.

*/

//////////////////////////////////////////////////////////
//
//   function name:calculatediscount
//   description  :calculate discount
//    input       :float
//    output      :float
//    author      :maruti kondiba waghmode
//    date        :21-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void calculatediscount(float famount)
{

  float fdiscount = 0.0f;
  float ffinalamount = 0.0f;

  if (famount < 0)
  {
    printf("amount are invalid\n");
  }
  else if (famount < 1000)
  {
    printf("payble ammount =%f", famount);
  }

  else if ((famount >= 1000) && (famount <= 5000))
  {
    fdiscount = famount * 10 / 100;
    ffinalamount = famount - fdiscount;

    printf("payble ammount =%f", ffinalamount);
  }
  else if (famount > 5000)
  {
    fdiscount = famount * 20 / 100;
    ffinalamount = famount - fdiscount;

    printf("payble amount =%f", ffinalamount);
  }
}

int main()
{
  float famount = 0.0f;
  printf("enter total purchase amount:\n");
  scanf("%f", &famount);

  calculatediscount(famount);

  return EXIT_SUCCESS;
}