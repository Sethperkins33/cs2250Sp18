#include<stdio.h>

int main()
{
   int user1;
   int user2;
  
   printf("type two integer:\n");
   scanf("%d %d", &user1, &user2);
   
   printf("you typed %d an %d\n. The sum of the two is %d\n.", user1, user2, user1 + user2);
   printf("you typed %d an %d\n. The product of the two is %d\n.", user1, user2, user1 * user2);
   printf("you typed %d an %d\n. The quotient of the two is %d\n.", user1, user2, user1 / user2);
   printf("you typed %d an %d\n. The difference of the two is %d\n.", user1, user2, user1 - user2); 
   printf("you typed %d an %d\n. The modulus of the two is %d\n.", user1, user2, user1 % user2);
return 0;

}
