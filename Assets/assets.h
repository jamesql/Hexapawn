
namespace Assets
{

	class Board
	{
	public:
		// Vars
		Piece bpcs[9];	
		Team white;
		Team black;
	
		char* move(Piece op, Piece np);
		bool checkMove(Piece p);
		Move[] getMoves(Team t);
		char* createBoard();
		void addPiece(Piece p);
		void delPiece(Piece p);
		char* getBoard(); 
		void printBoard();

	};

	class Team
	{

	};

	class Menu
	{
	
	};

	class Piece
	{
	public: 
		// Vars
		Team tm;

		Piece(Team t);
	};

	class Move
	{

	};

}
