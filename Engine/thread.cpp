// main thread of game
#include <iostream>
#include "../Assets/assets.h"

using namespace std;
using namespace Assets;

int main() {
	Menu m;
	m.printLogo();
	Board board;
	char* s_brd = board.getBoard();
	string str(s_brd);
	cout << str << endl;
	return 0;
}
