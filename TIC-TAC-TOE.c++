#include <iostream>
using namespace std;
void displayBoard(char board[][3]) 
{
  for (int i = 0; i < 3; i++) 
  {
    for (int j = 0; j < 3; j++) 
	{
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}
bool checkWin(char board[][3], char player)
 {
  for (int i = 0; i < 3; i++) 
  {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
	{
      return true;
    }
  }

  
  for (int i = 0; i < 3; i++)
   {
    if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
	{
      return true;
    }
  }

  
  if (board[0][0] == player && board[1][1] == player && board[2][2] == player) 
  {
    return true;
  }
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
  {
    return true;
  }

  return false;
}
bool isDraw(char board[][3]) 
{
  for (int i = 0; i < 3; i++) 
  {
    for (int j = 0; j < 3; j++) 
	{
      if (board[i][j] == ' ') 
	  {
        return false;
      }
    }
  }
  return true;
}

int getValidInput(char board[][3]) 
{
  int row, col;
  while (true) 
  {
    cout << "Enter your move (row & col): ";
    cin >> row >> col;

    if (row < 0 || row > 2 || col < 0 || col > 2) 
	{
      cout << "Invalid move. Please enter a number between 0 and 2."<< endl;
      continue;
    }

    if (board[row][col] != ' ') 
	{
      cout << "This position is occupied. Please choose another one."<< endl;
      continue;
    }

    break;
  }

  return row * 3 + col; 
}

int main() 
{
  char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  char currentPlayer = 'X';

  while (true) 
  {
    displayBoard(board);
    int move = getValidInput(board);

    board[move / 3][move % 3] = currentPlayer;

    if (checkWin(board, currentPlayer)) 
	{
      displayBoard(board);
      cout << currentPlayer <<"wins"<< endl;
      break;
    }
    if (isDraw(board)) 
	{
      displayBoard(board);
      cout <<"It's a draw"<< endl;
      break;
    }
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
  }

  char choice;
  cout << "Do you want to play again? (yes/no): ";
  cin >> choice;

  if (choice == 'y' || choice == 'Y') 
  {
    currentPlayer = 'X';
    for (int i = 0; i < 3; i++) 
	{
      for (int j = 0; j < 3; j++) 
	  {
        board[i][j] = ' ';
      }
    }
    main();
  } else {
    cout <<"Thanks for playing"<< endl;
  }
  return 0;
}