//Task-04
//Create a program that solves the Sudoku puzzles automatically.The program should take an
 //input grid representing an unsolved Sudoku puzzle and use an algorithm to fill the  missing
 //numbers.It should use backtracking or other suitable techniques to explore possible solutions
 //and find the correct arrangement of numbers for the puzzle.Once solved ,the program should
 //display the completed sudoku grid.

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


int main()
{
        int i,j;
        printf("========================================================================================================================");
        printf("                                  \n\n                                           WELCOME TO ULTIMATE SUDOKU SOLVER");
        printf("\n%80s","By-Shalini Mishra");
        printf("\n\n\n\========================================================================================================================");
         printf("%50s","Question:\n");
         int grid[9][9]={{2,0,0,0,3,0,0,4,0},
                                {0,3,0,6,0,0,0,0,7},
                                {0,0,9,0,0,7,1,0,8},
                                {0,0,4,0,7,2,0,0,0},
                                {0,2,5,0,8,1,9,0,0},
                                {1,0,3,0,0,6,0,0,5},
                                {0,0,0,0,2,0,4,0,0},
                                {4,0,6,8,0,0,0,7,0},
                                {5,0,0,9,0,0,3,0,0}
                               };


for(i=0;i<9;i++){
              printf("%50s"," ");
       for(j=0;j<9;j++){

              printf("%d ",grid[i][j]);
              if(j==2  || j==5){
                     printf("|");
              }
       }

       printf("\n");
        if(i==2 || i==5 ){
              printf("%70s","-------------------\n");
       }

}
printf("\n%50s","Solution:\n");
int initial_value=1,print_value;


                               return 0;


}
