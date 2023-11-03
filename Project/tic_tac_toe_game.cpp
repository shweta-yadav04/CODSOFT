#include<iostream>
#include<vector>
using namespace std;
const int boardSize=3;
void displayBoard(const vector<vector<char>>& board) 
{
    for (int i = 0; i < boardSize; ++i) 
    {
        for (int j = 0; j < boardSize; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
bool rowWin(const vector<vector<char>>& board, char player)
{
    // Check rows and columns
    for (int i = 0; i < boardSize; ++i) 
    {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    return false;


}
bool colWin(const vector<vector<char>>& board, char player)
{
    for (int i = 0; i < boardSize; ++i) 
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }
    return false;
}

bool diagonalWin(const vector<vector<char>>& board, char player)
{
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[2][0] == player && board[1][1] == player && board[0][2] == player)
        return true;

    return false;
    
}
bool checkWin(const vector<vector<char>>& board, char player) 
{
    // Check diagonals
    if(rowWin(board,player) or colWin(board,player) or diagonalWin(board,player))
    {
        return true;
    }
    return false;    
}
bool checkDraw(const vector<vector<char>>& board) 
{
    for (int i = 0; i < boardSize; ++i) 
    {
        for (int j = 0; j < boardSize; ++j) 
        {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

bool makeMove(vector<vector<char>>& board, int row, int col, char player) 
{
    if (row >= 0 && row < boardSize && col >= 0 && col < boardSize && board[row][col] == ' ') 
    {
        board[row][col] = player;
        return true;
    }
    return false;
}
int main()
{
 // setting up the board
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char CurrentPlayerSymbol = 'X';

    cout << "Tic-Tac-Toe Game\n";
    displayBoard(board);

    while (true) 
    {
        int row, col;
        cout << "Player " << CurrentPlayerSymbol << " turn, please enter row and column : ";
        cin >> row >> col;

        if (makeMove(board, row, col, CurrentPlayerSymbol)) 
        {
            displayBoard(board);

            if (checkWin(board, CurrentPlayerSymbol)) 
            {
                cout << "Player " << CurrentPlayerSymbol << " wins!" << endl;
                break;
            }

            if (checkDraw(board)) 
            {
                cout << "It's a draw!" << endl;
                break;
            }

            CurrentPlayerSymbol = (CurrentPlayerSymbol == 'X') ? 'O' : 'X';
        } 
        else 
        {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;
}



