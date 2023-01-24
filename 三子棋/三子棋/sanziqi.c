#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"




int main()
{
	srand((unsigned int)time(NULL));
	char board[ROW][LOW] = { 0 };
	int input = 0; 
	
	do
	{
		
		test();
		printf("输入选择：");
		scanf("%d", &input);
		switch (input)
		{
			
			case 0:
				printf("游戏结束");
				break;
			case 1:
				game(board,ROW,LOW);
				break;
			default:
				printf("重新输入:\n");

		}
	} while (input);
	
	return 0;
}