#include <stdio.h>

int main()
{

  int a = 1;
  int b = 1;
  int c = 1;

  if (a > b)//1>=1
  {
    if (a > c)//1>=1
    {
      printf("a is greater than all.");
    }else{
      printf("c is greater than all");
    }
  }else {
    if(b> c){
      printf("b is greater than all");
    }else{
      printf("c is greater than all");
    }
  }

  return 0;
}