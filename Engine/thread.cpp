// main thread of game
#include <iostream>
#include "../Assets/assets.h"
#include "../Storage/storage.h"

using namespace std;
using namespace Assets;
using namespace Utility;

int main() {
	Menu m;
	m.printLogo();
	Board board;
	Storage s;
	char* s_brd = board.getBoard();
	s.Store<char*>("board",s_brd);
	cout << s.Read<char*>("board");	

	return 0;
}
