#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define LOW 3
#include"game.h"



void test()//菜单
	{
		printf("************************************\n");
		printf("************************************\n");
		printf("*********1.play       0.over********\n");
		printf("************************************\n");
		printf("************************************\n");
	}
void set_up(char board[ROW][LOW], int row, int low)
{
	int i;
	int j;
	for(i=0;i<row;i++)
		for (j = 0; j < low; j++)
		{
			board[i][j] =' ';
		}
}
void print(char board[ROW][LOW], int row, int low)//打印棋盘
{
	int i, j;
	for (i = 0; i < row; i++)//打印数据
	{
		for (j = 0; j < low; j++)//打印一行的数据
			if (j < low)
			{
				printf(" %c ",board[i][j]);
				if (j != low - 1)
					printf("|");
			}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < low; j++)
				if (j < low)
				{
					printf("---");
					if (j != low - 1)
						printf("|");
				}
			printf("\n");
		}
	}
}
void game_player(char board[ROW][LOW], int row, int low)//玩家输入坐标
{
	int i, j;
	printf("输入你下的坐标：");
	while (1)
	{
		scanf("%d%d",&i,&j);
		if (board[i-1][j-1]==' ')//判断该坐标是否有棋子
		{
			board[i-1][j-1] = '*';
			break;
		}
		else
			printf("坐标有误，重新输入：");
	}
	}
void computer(char board[ROW][LOW], int row, int low)//电脑输入坐标
{

	
	printf("电脑输入坐标\n");
	while (1)
	{
		
		row = rand() % ROW;
		low = rand() % LOW;
		if (board[row][low] != '#' && board[row][low] != '*')//判断该坐标是否有棋子
		{
			board[row][low] = '#';
			break;
		}


	}
}
int full(char board[ROW][LOW], int row, int low)//判断棋盘是否满了
{
	int i, j;
	for (i=0;i<row;i++)
		for (j = 0; j < low; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	return 1;

}
char judge(char board[ROW][LOW], int row, int low)//判断谁赢
{
	int i=0, j;
	for(i=0;i<row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][1]!=' ')
			return board[i][1];
	}
	for (j= 0; j < row;j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j]&&board[1][j]!=' ')
			return board[1][j];
	}
	
	
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]&&board[1][1]!=' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (full(board, row, low) == 1)//判断棋盘是否满了
		return 'P';
}
void game(char board[ROW][LOW], int row, int low)
{
	char judge1,judge2;//判断玩家和电脑输赢的变量
	set_up(board, row, low);//设置棋盘
	print(board, row, low);//打印棋盘
	while (1)
	{
		game_player(board, row, low);//玩家行动
		print(board, row, low);//打印棋盘
		judge1 = judge(board,row,low);//判断玩家赢
		if (judge1 == '*')
		{
			printf("you win\n");
			break;
		}
		else if (judge1 == 'P')
		{
			printf("平局\n");
			break;
		}
		computer(board, row, low);//电脑行动
		print(board, row, low);//打印棋盘
		judge2 = judge(board, row, low);//判断电脑赢
		if (judge2 == '#')
		{
			printf("you lost\n");
			break;
		}
		else if (judge2 == 'P')
		{
			printf("平局\n");
			break;
		}
		
	}
}







