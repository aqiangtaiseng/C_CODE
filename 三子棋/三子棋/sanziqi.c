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
		printf("����ѡ��");
		scanf("%d", &input);
		switch (input)
		{
			
			case 0:
				printf("��Ϸ����");
				break;
			case 1:
				game(board,ROW,LOW);
				break;
			default:
				printf("��������:\n");

		}
	} while (input);
	
	return 0;
}