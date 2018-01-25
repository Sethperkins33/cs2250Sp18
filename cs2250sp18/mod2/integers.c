#include<stdio.h>

int main()
{
   int userAge;
   int votingAge = 18;
   
   printf("userAge, address:%p value:%d\n", &userAge, votingAge);
   printf("userAge, address:%p value:%d\n", &votingAge, userAge);

   return; 
}
