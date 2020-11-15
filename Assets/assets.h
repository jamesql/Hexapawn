
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
	public:
		// Vars
		int team_id;
		
		Team(int tid);
	};

	class Menu
	{
	
	};

	class Piece
	{
	public: 
		// Vars
		Team tm;
		int posX;
		int posY;

		Move[] getMoves();
		Move movePiece(int newX, int newY);		

		Piece(Team t, int x, int y);
	};

	class Move
	{
		
	};

}
