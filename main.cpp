#include <iostream>
#include <cctype>
#include <vector>
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Board.h"
#include "Game_controls.h"
#include "Ai_controls.h"
using std::cin; using std::cout; using std::endl; using std::string;

int menu()	{
		int playerSelect;
		cout << "Player moves first:" << endl;
		cout << "1 - top left" << endl;
		cout << "2 - top middle" << endl;
		cout << "3 - top right" << endl;
		cout << "4 - middle left" << endl;
		cout << "5 - middle" << endl;
		cout << "6 - middle right" << endl;
		cout << "7 - bottom left" << endl;
		cout << "8 - bottom middle" << endl;
		cout << "9 - bottom right" << endl;
		cout << "Enter:";
		cin >> playerSelect;
		return playerSelect;
};


int main()	{
	cout << "\t\t\t ***TIC-TAC-TOE***" << endl;
	string drawBoard[5][5] = 
	{ {" ", "|", " ", "|", " "},
	{"-", "-", "-", "-", "-"},
	{" ", "|", " ", "|", " "},
	{"-", "-", "-", "-", "-" },
	{ " ", "|", " ", "|", " "} };

	for (int i = 0; i < 5; i++)	// This loops on the rows.
	{
		for (int j = 0; j < 5; j++)	// This loops on the columns.
		{
			drawBoard[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			system("Color 1A");
			cout << drawBoard[i][j];
		}
		cout << endl;
	}
	Game_controls newControl;
	Ai_controls newAi;

	string playerPiece = newControl.pieceSelect();
	string aiPiece = newAi.aiSelect();

	
	int select;
	bool playerFirst = newControl.playerFirst;
	if (playerFirst == true)	{
		select = menu();
		
		decltype(drawBoard) drawBoard2 = 
		{ {" ", "|", " ", "|", " "},
		{"-", "-", "-", "-", "-" },
		{" ", "|", " ", "|", " "},
		{"-", "-", "-", "-", "-" },
		{ " ", "|", " ", "|", " "} };

		bool gameOver = false;
		while (gameOver == false)
		{
		// Possibly abstract to a function later, making it easier than writing all of the code out.
		switch (select)	{
		case 1: 
			std::system("cls");
			drawBoard2[0][0] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y = 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;

		case 2:
			std::system("cls");
			drawBoard2[0][2] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y= 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;

		case 3:
			std::system("cls");
			drawBoard2[0][4] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y= 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;
		
		case 4:
			std::system("cls");
			drawBoard2[2][0] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y = 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;

		case 5:
			std::system("cls");
			drawBoard2[2][2] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y = 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;

		case 6:
			std::system("cls");
			drawBoard2[2][4] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y = 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;

		case 7:
			std::system("cls");
			drawBoard2[4][0] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y = 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;

		case 8:
			std::system("cls");
			// Check to see if the location is taken.
			drawBoard2[4][2] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y = 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;
	
		case 9:
			std::system("cls");
			drawBoard2[4][4] = playerPiece;
			for (int x = 0; x <5; x++)
			{
				for (int y = 0; y <5; y++)
				{
					drawBoard2[x][y];
				}
			}
			for (int x = 0; x < 5; x++)
			{
				for (int y = 0; y < 5; y++)
				{
					cout << drawBoard2[x][y];
				}
				cout << endl;
			}
			cout << "It is now the AI'S move." << endl;
			break;
		
		
		}	// End of switch here.

	
	
	
	}	// ends if statement
	}

	else if (playerFirst == false)
		cout << "Computer moves first." << endl;
	"\n\n";

	system("pause");
	return 0;
}
		
		
