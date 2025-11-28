#include <stdio.h>

int main()
{

  char userId = 'B';

  int password = 123;

  // if(userId == 'B'){
  //   if(password == 123){
  //     printf("login successfully");
  //   }else{
  //     printf("invalid password");
  //   }

  // }else{
  //   printf("invalid user name");
  // }

  // if (userId == 'B' && password == 123)
  // {
  //   printf("login successfully");
  // }
  // else
  // {
  //   printf("userId and password is not valid");
  // }

  // char word = 'z';

  // if(word == 'a'||word == 'e'||word == 'o'||word == 'u'||word == 'i'){
  //   printf("yes it vowel ");
  // }else{
  //     printf("no its not vowel ");
  // }

  // int number = 14;

  // // ternary operator // condition ?execute with  true: execute with false
  // number %2==0?printf("%d is even number",number):printf("%d is odd number",number);

  // int a = 55;

  // a > 90 ? printf("excellent performance") : a > 70 ? printf("good performance")
  //                                        : a > 50   ? printf("fair performance")
  //                                                   : printf("fail");

  // switch (expression)
  // {
  // case constant expression:
  //   /* code */
  //   break;

  // default:
  //   break;
  // }
  int value;
  printf("choose your Number:");

  scanf("%d", &value);

  switch (value)
  {

  case 1:
    printf("tailwinder");
    break;
  case 2:
    printf("honeysingh");
    break;
  case 3:
    printf("atif aslam");
    break;
  case 4:
    printf("arjeet singh");
    break;
    default:
    printf("invalid number");
  }

  return 0;
}