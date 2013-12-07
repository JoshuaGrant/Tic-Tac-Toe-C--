#ifndef GAME_CONTROLS_H
#define GAME_CONTROLS_H
#include "Ai_controls.h"
#include <string>
using std::string;
using namespace std;
class Game_controls
{
	Player newPlayer;
public:
	/* PIECE SELECT FUNCTION:
	* Allows player to select a piece and the AI selects a piece randomly between 'X' and 'O'. 
	*Player is permitted to choose which piece if they go first (based on a random number)
	*If the AI has selected a piece or the player has selected a piece the remaining available piece is assigned automatically.
	*Returns a string equivalent to the piece the player selects.
	*/
	bool playerFirst;

	string pieceSelect ()
	{
		srand (time(0));
	newPlayer.goFirst = rand() % 100;
	if (newPlayer.goFirst % 2 == 0)	{
		std::cout << " \n ";
		std::cout << "Which piece would you like to play with (Enter X or O): ";
		cin  >> newPlayer.piece;
		playerFirst = true;
		
		for (decltype(newPlayer.piece.size()) index = 0;
			index != newPlayer.piece.size() && !isspace(newPlayer.piece[index]); ++index)
			newPlayer.piece[index] = toupper(newPlayer.piece[index]);	// capitalize
	
		
		while (newPlayer.piece != "X" && newPlayer.piece != "O") 	{
			cout << "You have entered an invalid selection. " << endl;
			cout << "Please enter X or O: ";
			cin >> newPlayer.piece;
			for (decltype(newPlayer.piece.size()) index = 0;
			index != newPlayer.piece.size() && !isspace(newPlayer.piece[index]); ++index)
			newPlayer.piece[index] = toupper(newPlayer.piece[index]);

		} ;
		cout << newPlayer.piece << endl;
		
		std::cout << "Excellent, you have chosen " << newPlayer.piece << "." << endl;
		
	}
	else {
		playerFirst = false;
		Ai_controls newAiControl;
		/*computerPiece is determined by a method located in Ai_controls. 
		*Other functions regarding the AI tracking and piece movement will be located in Ai_controls.
		*Game controls will only store the function used to select a piece for both the AI and human player.
		*/
		
		string computerPiece = newAiControl.aiSelect();
		
		std::cout << "Computer selects: " << computerPiece << endl;
	
	if (newPlayer.piece =="O")	{
		computerPiece = "X";
	}
	else if (newPlayer.piece =="X")	{
		computerPiece ="O";
	}
	
	else if (computerPiece =="X")	{
		newPlayer.piece = 'O';
	}
	
	else if (computerPiece =="O")	{
		newPlayer.piece = "X";
	}
	
	}
	return newPlayer.piece;
	}
	
};





#endif GAME_CONTROLS_H
