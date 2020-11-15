
namespace Assets
{

	class Board
	{
	public:
		// Vars
		Piece bpcs[9];	

		char* move(Piece op, Piece np);
		bool checkMove(Piece p);
		char* createBoard();
		void addPiece(Piece p);
		void delPiece(Piece p);
		char* getBoard(); 
		void printBoard();

	};

	class Menu
	{
	
	};

	class Piece
	{
	
	};

	class Move
	{

	};

}
