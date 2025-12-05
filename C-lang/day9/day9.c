#include <stdio.h>

int main()
{

  //  2 entry loop  while and for loop

  // for(int i =1;i<=10;i++){
  //   if(i%2==0){
  //     printf("%d is even number\n",i);
  //   }

  // }

  // int i = 1;

  // while (i <= 10)
  // {
  //   if (i % 2 == 0)
  //   {
  //     printf("%d is even number\n", i);
  //   }
  //   i++;
  // }

  // 3rd loop" do while " exit loop

  //  1st is intialization
  // 2st step is execute the code
  // 3th  increment/decreemtn
  // 4rd condition

  // int j = 1; //  1st is intialization

  // do // 2st step is execute the code
  // {
  //      j++;//2//3//4//5//6/
  //   printf("%d\n", j);//2//3//4//5//6
  //     // 3th  increment/decreemtn
  // } while (j <= 5); // 4rd condition true rtuetrue

  // prime number have two factors  1 , itself
  // 1 is co prime number

  int number = 51;//1 ,3,17,51

  int count = 0;
  for (int i = 1; i <= number; i++)
  {

    if (number % i == 0)
    {
      count++;
    }
  }

    printf("%d\n",count);

  if (count == 2)
  {
  
    printf("is prime number");
  }
  else
  {
    printf("is not prime number");
  }

  return 0;
}