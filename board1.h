https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// Game of Life on a 10x10 grid

#define NN 10

int N = NN;

char board[NN][NN] = {
	{1,0,0,0,0,0,0,0,0,0},
	{1,1,0,0,0,0,0,0,0,0},
	{0,0,0,1,0,0,0,0,0,0},
	{0,0,1,0,1,0,0,0,0,0},
	{0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,1,1,1,0,0,0},
	{0,0,0,1,0,0,1,0,0,0},
	{0,0,1,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,0,0},
};
char newboard[NN][NN];

