#ifndef AI_CONTROLS_H
#define AI_CONTROLS_H

class Ai_controls{
public:

	string aiSelect()	{
		string AiPiece;
		int aiSelect = rand() % 2 +1;
		std::cout << "\n";
		switch (aiSelect)
		{
		case 1: AiPiece = "X";
			break;
		case 2: AiPiece = "O";
			break;
		}
		return AiPiece;
	};
};

#endif AI_CONTROLS_H
