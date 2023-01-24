#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define LOW 3
#include"game.h"



void test()//�˵�
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
void print(char board[ROW][LOW], int row, int low)//��ӡ����
{
	int i, j;
	for (i = 0; i < row; i++)//��ӡ����
	{
		for (j = 0; j < low; j++)//��ӡһ�е�����
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
void game_player(char board[ROW][LOW], int row, int low)//�����������
{
	int i, j;
	printf("�������µ����꣺");
	while (1)
	{
		scanf("%d%d",&i,&j);
		if (board[i-1][j-1]==' ')//�жϸ������Ƿ�������
		{
			board[i-1][j-1] = '*';
			break;
		}
		else
			printf("���������������룺");
	}
	}
void computer(char board[ROW][LOW], int row, int low)//������������
{

	
	printf("������������\n");
	while (1)
	{
		
		row = rand() % ROW;
		low = rand() % LOW;
		if (board[row][low] != '#' && board[row][low] != '*')//�жϸ������Ƿ�������
		{
			board[row][low] = '#';
			break;
		}


	}
}
int full(char board[ROW][LOW], int row, int low)//�ж������Ƿ�����
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
char judge(char board[ROW][LOW], int row, int low)//�ж�˭Ӯ
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
	if (full(board, row, low) == 1)//�ж������Ƿ�����
		return 'P';
}
void game(char board[ROW][LOW], int row, int low)
{
	char judge1,judge2;//�ж���Һ͵�����Ӯ�ı���
	set_up(board, row, low);//��������
	print(board, row, low);//��ӡ����
	while (1)
	{
		game_player(board, row, low);//����ж�
		print(board, row, low);//��ӡ����
		judge1 = judge(board,row,low);//�ж����Ӯ
		if (judge1 == '*')
		{
			printf("you win\n");
			break;
		}
		else if (judge1 == 'P')
		{
			printf("ƽ��\n");
			break;
		}
		computer(board, row, low);//�����ж�
		print(board, row, low);//��ӡ����
		judge2 = judge(board, row, low);//�жϵ���Ӯ
		if (judge2 == '#')
		{
			printf("you lost\n");
			break;
		}
		else if (judge2 == 'P')
		{
			printf("ƽ��\n");
			break;
		}
		
	}
}







