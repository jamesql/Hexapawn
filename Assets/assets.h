
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
	public:
		// Vars	
		Option opt[];

		void addOption(Option op);
		Menu();
	};

	class Option
	{
	public:
		// Vars
		char* str;
		int ascii;

		Option(char* n_str, int v);
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
