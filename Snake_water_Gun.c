#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergunlogic(char,char);   //function prototype of snake_water_gun logic
int main(){
    char you,comp;
    int matches,i=1;
    printf("-------------------------------------------------SNAKE WATER GUN GAME------------------------------------------------\n");
    printf("How Many Matches You Want to Play:\n");          //Asking Matches To Play
    scanf("%d",&matches);
    do{
    printf("%d Match Starts..\n",i);
    printf("\nEnter\n's'=Snake\n'w'=Water\n'g'=Gun\n");        //Asking User Input
    printf("It's You Turn:\n");
    scanf(" %c",&you);
    printf("Computer turn:\n");
     srand(time(0));
     int number=rand()%100+1;                              //Generating random input for computer
     if(number<33){
         comp='s';
     }
     else if(number<66){
         comp='w';
     }
     else{
         comp='g';
     }
     int result=snakewatergunlogic(you,comp);              //Calling logic function of snake water gun and assigning value to result
     if(result==0){
         printf("Match Drawn\n");
     }
     else if(result==1){
         printf("You win\n"); 
     }
     else{
         printf("You Lose\n");
     }
     printf("You chose %c and computer chose %c \n",you,comp);
     i++;
    }while(i<=matches);


}
int snakewatergunlogic(char you,char comp){                          //Logic of snake water gun
    if(comp==you){
        return 0;
    }
    else if((you=='s'&&comp=='w')||(you=='w'&&comp=='g')||(you=='g'&&comp=='s')){
        return 1;
    }
    else{
        return 2;
    }
}