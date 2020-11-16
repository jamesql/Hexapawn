namespace Assets
{

	class Team
	{
	public:
		// Vars
		int team_id;
		
		Team(int tid);
		Team() { }
	};

	class Option
	{
	public:
		// Vars
		char* str;
		int ascii;

		Option(char* n_str, int v);
		Option() { }
	};

	class Menu
	{
	public:
		// Vars	
		Option opt[10];

		void addOption(Option op);
		void printLogo();
		Menu();
	};


	class Move
	{
		Move() { }
	};

	class Piece
	{
	public: 
		// Vars
		Team tm;
		int posX;
		int posY;

		Move* getMoves();
		Move movePiece(int newX, int newY);		

		Piece(Team t, int x, int y);
		Piece() { }
	};

	class Board
	{
	public:
		// Vars
		Piece bpcs[9];	
		Team white;
		Team black;
	
		char* move(Piece op, Piece np);
		bool checkMove(Piece p);
		Move* getMoves(Team t);
		Piece getPceAtPos(int x, int y);
		void addPiece(Piece p);
		void delPiece(Piece p);
		char* getBoard(); 
		void printBoard();
		Board();
		~Board();
	};

}
