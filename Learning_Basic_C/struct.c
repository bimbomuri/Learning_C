#include <stdio.h>
#include <string.h>



struct Player
{
   char name[12];
   int score;
};
int main(){
     

     //struct = it is the short for Structure. It is basically used to group related items.
     //It is a user defined data type and it is used to create complex datatypes. 
     //just like array, struct size is fixed.
     //Dot(.) is a member access operator.

   struct Player player1;
   struct Player player2;

   strcpy(player1.name,"Abimbola");
   player1.score = 4;

  strcpy(player2.name,"Muritala");
   player2.score = 5;

   printf("%s\n", player1.name);
   printf("%d\n", player1.score);


   printf("%s\n", player2.name);
   printf("%d", player2.score);
    return 0;
}