#include "examples_checker_board.h"

#include <guten/guten.hpp>

using namespace std;

namespace examples
{
	namespace checker_board
	{
		void test()
		{
			cout << "--- Checker Board ---" << endl;

			guten::boards::CheckerBoard cb;

			cb.placePiece('R', 0, 0, true);

			cb.print();
		}

		void printMini()
		{
			cout << "--- Small Checker Board ---" << endl;
			guten::boards::CheckerBoard cb;

			cb.placePiece('R', 0, 0, true);
			cb.placePiece('Q', 4, 5, false);

			cb.printMini();
		}
	} // namespace checker_board
} // namespace examples