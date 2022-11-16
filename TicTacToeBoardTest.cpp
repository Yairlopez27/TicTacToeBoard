/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, workingPiecesX){
	TicTacToeBoard myTest;
	int row[1] = {X};
	ASSERT_EQ(row[0], X);
}
TEST(TicTacToeBoardTest, workingPiecesO){
	TicTacToeBoard myTest;
	int row[2] = {O};
	// ASCII value
	ASSERT_EQ(row[2], 32);
}
TEST(TicTacToeBoardTest, winnerX){
	TicTacToeBoard myTest;
	Piece myPiece = myPiece.getPiece();
	// ASCII value
	ASSERT_EQ(myPiece, 32);
}


