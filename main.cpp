#include <iostream>
#include <cstdlib>

using namespace std;

void PrintBoard();  
void PromptTurnO(int&, int&);
void PromptTurnX(int&, int&);
char board[3][3];

int main()
{
    int column;
    int row;
    int firstPlayer;
    int secondPlayer;
    int Draws = 0;
    char choice;
    choice = 'Y';

        cout << "Welcome to tic tac toe! " << endl;
        cout << "Player one you are represented by the O and player 2 you are represented by the X " << endl;
        cout << "Good luck!" << endl;

    for (row = 0; row < 3; row++)
    for (column = 0; column < 3; column++)

      board[row][column]= ' ';
      int x;
      int y;
      int SpotsOnBoard;
      SpotsOnBoard = 0;


  while ( SpotsOnBoard <= 9){

        if (SpotsOnBoard == 0)
        PrintBoard();

        PromptTurnO(x, y);
        board[x - 1][y - 1]= 'O';
        SpotsOnBoard++;
        PrintBoard();


   if (board[0][0]== 'O' && board[1][1]== 'O' && board[2][2]== 'O'){
     cout << "Player 1 wins! " << endl;
     firstPlayer++;
     break;
    }
   else if (board[2][0]== 'O' && board[1][1]== 'O' && board[0][2]== 'O'){
     cout << "Player 1 wins! " <<endl;
     firstPlayer++;
     break;
    }
   else if (board[0][0]== 'O' && board[1][0]== 'O' && board[2][0] == 'O'){
     cout << "Player 1 wins! " << endl;
     firstPlayer++;
     break;
     }
   else if (board[0][1]== 'O' && board[1][1]== 'O' && board[2][1]== 'O'){
     cout << "Player 1 wins! " << endl;
     firstPlayer++;
     break;
    }
   else if (board[0][2]== 'O' && board[1][2]== 'O' && board[2][2]== 'O'){
     cout << "Player 1 wins! " << endl;
     firstPlayer++;
     break;
    }
   else if (board[0][0]== 'O' && board[0][1]== 'O' && board[0][2]== 'O'){
     cout << "Player 1 wins! " << endl;
     firstPlayer++;
     break;
    }
   else if (board[1][0]== 'O' && board[1][1]== 'O' && board[1][2]== 'O'){
     cout << "Player 1 wins! " << endl;
     firstPlayer++;
     break;
    }
   else if (board[2][0]== 'O' && board[2][1]== 'O' && board[2][2]== 'O'){
     cout << "Player 1 wins! " <<endl;
     firstPlayer++;
     break;
    }
   else if (SpotsOnBoard == 9){
     cout << "Tie game! " << endl;
     //Draws++;
     break;
    }

  PromptTurnX(x, y);

  board[x - 1][y - 1]= 'X';
  SpotsOnBoard++;
  PrintBoard();

  if (board[0][0]== 'X' && board[1][1]== 'X' && board[2][2]== 'X')
    {
     cout << "Player 2 wins! " << endl;
     secondPlayer++;
     break;
    }
  else if (board[2][0]== 'X' && board[1][1]== 'X' && board[0][2]== 'X')
    {
     cout << "Player 2 wins! " << endl;
      secondPlayer++;
      break;
    }
  else if (board[0][0]== 'X' && board[1][0]== 'X' && board[2][0]== 'X')
    {
     cout << "Player 2 wins! " << endl;
     secondPlayer++;
     break;
    }
  else if (board[0][1]== 'X' && board[1][1]== 'X' && board[2][1]== 'X')
    {
     cout << "Player 2 wins! " << endl;
     secondPlayer++;
     break;
    }
  else if (board[0][2]== 'X' && board[1][2]== 'X' && board[2][2]== 'X')
    {
     cout << "Player 2 wins! " << endl;
     secondPlayer++;
     break;
    }
  else if (board[0][0]== 'X' && board[0][1]== 'X' && board[0][2]== 'X')
    {
     cout << "Player 2 wins! " << endl;
     secondPlayer++;
     break;
    }
  else if (board[1][0]== 'X' && board[1][1]== 'X' && board[1][2]== 'X')
    {
     cout << "Player 2 wins! " << endl;
     secondPlayer++;
     break;
    }
  else if (board[2][0]== 'X' && board[2][1]== 'X' && board[2][2]== 'X')
    {
     cout << "Player 2 wins! " << endl;
     secondPlayer++;
     break;
    }

 }
 return 0;
}



void PrintBoard()
{
    cout << endl;
    cout << "  1   2   3 " << endl;
    cout << "1 " << board[0][0] << " | " << board[0][1]<<" | "<< board[0][2]<< endl;
    cout << " ---|---|---" << endl;;
    cout << "2 " << board[1][0]<< " | " << board[1][1]<< " | " << board[1][2]<< endl;
    cout << " ---|---|---" << endl;
    cout << "3 " << board[2][0]<< " | " << board[2][1]<< " | " << board[2][2]<< endl;
    cout << endl;
}


void PromptTurnO(int& x, int& y){
 cout << "Your turn, Player 1! " << endl;
 cout << "Row: ";
 cin  >> x;
 cout << "Column: ";
 cin  >> y;
}

void PromptTurnX(int& x, int& y){
 cout << "Your turn, Player 2! "<< endl;
 cout << "Row: ";
 cin  >> x;
 cout << "Column: ";
 cin  >> y;
}
