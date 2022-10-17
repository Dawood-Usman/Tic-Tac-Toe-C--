#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int player1_turn, player2_turn;
void display_board(char* board[]);
void player_1(char* board[]);
void player_2(char* board[]);
int game_over(char* board);

void display_board(char* board[])
{
	system("color 0a");
	system("cls");
	cout << "\t\t   +===========================+" << endl;
	cout << "\t\t   | T I C    T A C    T O E   |" << endl;
	cout << "\t\t   |         G A M E           |" << endl;
	cout << "\t\t   +===========================+" << endl;
	cout << "\n" << endl;
	cout << "\t\t---> PLAYER 1 [X] !" << endl;
	cout << "\t\t---> PLAYER 2 [O] !" << endl;
	cout << "\n" << endl;
	cout << "\t\t\t     |     |     " << endl;
	cout << "\t\t\t  " << (*(*board)) << "  |  " << *(*(board)+1) << "  |  " << *(*(board)+2) << "  " << endl;
	cout << "\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t     |     |     " << endl;
	cout << "\t\t\t  " << *(*(board + 1)) << "  |  " << *(*(board + 1) + 1) << "  |  " << *(*(board + 1) + 2) << "  " << endl;
	cout << "\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t     |     |     " << endl;
	cout << "\t\t\t  " << *(*(board + 2)) << "  |  " << *(*(board + 2) + 1) << "  |  " << *(*(board + 2) + 2) << "  " << endl;
	cout << "\t\t\t     |     |     " << endl;

}
void player_1(char* board[])
{
	bool flag = 0;
	int x, y;
	while (1)
	{
		cout << "\n\t\t PLAYER 1 TURN : ";          //1st turn
		cin >> player1_turn;
		if (player1_turn >= 1 && player1_turn <= 9)
		{
			switch (player1_turn)
			{
			case 1:
				x = 0, y = 0;
				break;

			case 2:
				x = 0, y = 1;
				break;
			case 3:
				x = 0, y = 2;
				break;
			case 4:
				x = 1, y = 0;
				break;
			case 5:
				x = 1, y = 1;
				break;
			case 6:
				x = 1, y = 2;
				break;
			case 7:
				x = 2, y = 0;
				break;
			case 8:
				x = 2, y = 1;
				break;
			case 9:
				x = 2, y = 2;
				break;
			default:
				flag = 1;
				break;
			}
			if (flag == 1)
			{
				cout << "\n\t\t YOU'VE ENTERED INVALID INPUT ! " << endl;
				continue;
			}
			else
				if (*(*(board + x) + y) != 'X' && *(*(board + x) + y) != 'O')
				{
					*(*(board + x) + y) = 'X';
					break;
				}
		}
	}
}
void player_2(char* board[])
{
	bool flag = 0;
	int x, y;
	while (1)
	{
		cout << "\n\t\t PLAYER 2 TURN : ";          //1st turn
		cin >> player2_turn;
		if (player2_turn >= 1 && player2_turn <= 9)
		{
			switch (player2_turn)
			{
			case 1:
				x = 0, y = 0;
				break;

			case 2:
				x = 0, y = 1;
				break;
			case 3:
				x = 0, y = 2;
				break;
			case 4:
				x = 1, y = 0;
				break;
			case 5:
				x = 1, y = 1;
				break;
			case 6:
				x = 1, y = 2;
				break;
			case 7:
				x = 2, y = 0;
				break;
			case 8:
				x = 2, y = 1;
				break;
			case 9:
				x = 2, y = 2;
				break;
			default:
				flag = 1; break;
			}
			if (flag == 1)
			{
				cout << "\n\t\t YOU'VE ENTERED INVALID INPUT ! " << endl;
				continue;
			}
			else
				if (*(*(board + x) + y) != 'X' && *(*(board + x) + y) != 'O')
				{
					*(*(board + x) + y) = 'O';
					break;
				}
		}
	}
}
int game_over(char* board[])
{
	if (*(*(board)) == 'X' && *(*(board)+1) == 'X' && *(*(board)+2) == 'X')
		return 1;
	else if (*(*(board + 1)) == 'X' && *(*(board + 1) + 1) == 'X' && *(*(board + 1) + 2) == 'X')
		return 1;
	else if (*(*(board + 2)) == 'X' && *(*(board + 2) + 1) == 'X' && *(*(board + 2) + 2) == 'X')
		return 1;
	else if (*(*(board)) == 'X' && *(*(board + 1)) == 'X' && *(*(board + 2)) == 'X')
		return 1;
	else if (*(*(board)+1) == 'X' && *(*(board + 1) + 1) == 'X' && *(*(board + 2) + 1) == 'X')
		return 1;
	else if (*(*(board)+2) == 'X' && *(*(board + 1) + 2) == 'X' && *(*(board + 2) + 2) == 'X')
		return 1;
	else if (*(*(board)) == 'X' && *(*(board + 1) + 1) == 'X' && *(*(board + 2) + 2) == 'X')
		return 1;
	else if (*(*(board)+2) == 'X' && *(*(board + 1) + 1) == 'X' && *(*(board + 2)) == 'X')
		return 1;
	else
		if (*(*(board)) == 'O' && *(*(board)+1) == 'O' && *(*(board)+2) == 'O')
			return 2;
		else if (*(*(board + 1)) == 'O' && *(*(board + 1) + 1) == 'O' && *(*(board + 1) + 2) == 'O')
			return 2;
		else if (*(*(board + 2)) == 'O' && *(*(board + 2) + 1) == 'O' && *(*(board + 2) + 2) == 'O')
			return 2;
		else if (*(*(board)) == 'O' && *(*(board + 1)) == 'O' && *(*(board + 2)) == 'O')
			return 2;
		else if (*(*(board)+1) == 'O' && *(*(board + 1) + 1) == 'O' && *(*(board + 2) + 1) == 'O')
			return 2;
		else if (*(*(board)+2) == 'O' && *(*(board + 1) + 2) == 'O' && *(*(board + 2) + 2) == 'O')
			return 2;
		else if (*(*(board)) == 'O' && *(*(board + 1) + 1) == 'O' && *(*(board + 2) + 2) == 'O')
			return 2;
		else if (*(*(board)+2) == 'O' && *(*(board + 1) + 1) == 'O' && *(*(board + 2)) == 'O')
			return 2;
		else
			return 0;

}
int main()
{
	char entries = '1';
	char** board = new char* [3];
	for (int i = 0; i < 3; i++)
	{
		board[i] = new char[3];

	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			*(*(board + i) + j) = entries;

			entries++;
		}
	}
	int x;
	for (int count = 1; count <= 10; count++)
	{
		display_board(board);
		if (count > 3 && count <= 10)
		{
			x = game_over(board);
			if (x == 1)
			{
				cout << "\n\t\t          |CONGARTULATIONS|       " << endl;
				cout << "\t\t *****|PLAYER 1 WINS THE GAME|***** " << endl;
				system("pause");
				return 0;
			}
			else
				if (x == 2)
				{
					cout << "\n\t\t          |CONGARTULATIONS|       " << endl;
					cout << "\t\t *****|PLAYER 2 WINS THE GAME|***** " << endl;
					system("pause");
					return 0;
				}
				else if (count == 10)
				{
					cout << "\n\t\t  Game Draw ! " << endl;
					system("pause");
					return 0;
				}
		}
		if (count % 2 == 1)
			player_1(board);
		else
			player_2(board);
	}
}
