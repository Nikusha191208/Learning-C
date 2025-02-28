#include <stdio.h>

char turn = 'X';

void getMove(char board[][3]);

void getCoords(int *, int *);

void checkCoords(int *, int *, char [][3]);

void changeTurn(void);

void displayBoard(char board[][3]);

int main(){
   char board[3][3] = {
      {'-','-','-'},
      {'-','-','-'},
      {'-','-','-'}
   };

   while (1)
      getMove(board);
}

void getMove(char board[][3]){
   int rowMove, colMove;
   getCoords(&rowMove, &colMove);
   checkCoords(&rowMove, &colMove, board);
   displayBoard(board);
}  

void getCoords(int *rowMove, int *colMove){
   printf("Insert %c Somewhere: ", turn);
   scanf("%d %d", rowMove, colMove);
}

void checkCoords(int *rowMove, int *colMove, char board[][3]){
  while (board[*rowMove][*colMove] != '-' || *rowMove < 0 || *rowMove > 2 || *colMove < 0 || *colMove > 2){
    printf("Invalid Move, Try Again: ");
    scanf("%d %d", rowMove, colMove);
  }

  board[*rowMove][*colMove] = turn;
  changeTurn();
}

void changeTurn(void){
   if (turn == 'X')
      turn = 'O';
   else
      turn = 'X';
}

void displayBoard(char board[][3]){
   for (int row = 0; row < 3; row++){
      for (int col = 0; col < 3; col++)
         printf("%c ", board[row][col]);
      printf("\n");
   }
}
