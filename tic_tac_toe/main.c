#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// colors
#define WHITE "\033[1;37m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"
#define YELLOW "\033[1;33m"

// default chars
#define player  'X'
#define computer  'O'

char board[3][3];


void resetBoard();
void printBoard();
int  checkFreeSpaces();
void playerMove();
void computerMove();
void printWinner(char);
char checkWinner(); 

int main(){
   char winner = ' ';
   char response = ' ';

   do{
	  winner = ' ';
	  response = ' ';
      resetBoard();
      while(winner == ' ' && checkFreeSpaces() != 0){
        system("clear");
		 printBoard();
        
		 // player turn
		 playerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0){
            break;
         }
		
		 // compiuter turn 
         computerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0){
            break;
         }

      }
	  system("clear");
      printBoard();
      printWinner(winner);
      printf("\nWould you like to play again? (Y/N): " );
      scanf(" %c", &response);
      response = toupper(response);
	} while (response == 'Y');
	
   printf("Thanks for playing!\n");

   return 0;

}


void resetBoard(){
	for (int i = 0; i < 3; i++ )
		for (int j = 0; j < 3; j++)
			board[i][j] = ' ';
}
void printBoard(){
	printf(
    	" %c | %c | %c "
		"\n---|---|---\n"
		" %c | %c | %c "
		"\n---|---|---\n"
		" %c | %c | %c \n",
		board[0][0],board[0][1],board[0][2],
		board[1][0],board[1][1],board[1][2],
		board[2][0],board[2][1],board[2][2]
	);
}
int  checkFreeSpaces(){
	int freeSpaces = 9;
	for (int i = 0; i < 3; i++ )
        for (int j = 0; j < 3; j++)
			if (board[i][j] != ' ')
				freeSpaces--;
	return freeSpaces;
}
void playerMove(){
	int x; 
	int y;
	do {
		printf("Enter row #(1-3): ");
		scanf("%d", &x); x--;
		printf("Enter col #(1-3): ");
		scanf("%d", &y); y--;
		if (x || y < 4){
			if (board[x][y] != ' '){
				printf("move error!\n");
			}else{
				board[x][y] = player;
				break;
			} 
		}else {
			break;
		}
	} while (board[x][y] != ' '); 
}
void computerMove(){
	srand(time(0));
	int x, y;

	if (checkFreeSpaces() > 0){
		do {
			x = rand() % 3;
			y = rand() % 3;
		} while (board[x][y] != ' ');
		
		board[x][y] = computer;
	} else {
		printWinner(' ');
	}
}
void printWinner(char winner){
	if (winner == player){
		printf("YOU WIN!");
	}else if (winner == computer){
		printf("YOU LOSE!");
	}else{
		printf("IT'S A TIE!");
	}
}
char checkWinner(){
	// check rows
	for (int i = 0; i < 3; i++)
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
			return board[i][0];
	// check columns
	for (int i = 0; i < 3; i++)
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
			return board[0][i];
	// check diagonals
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
		return board[0][0];

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return board[0][2];

	return ' ';
}

