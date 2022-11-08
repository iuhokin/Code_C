//#define _CRT_SECURE_NO_WARNINGS 1
//
////game.c
//
//#include "game.h"
//�������Ҫһ�л���һ�л��߶Խ���ȫ������Ȳ����ж���Ӯ��
//������ʵ�ϵ�������Ŀ���ڵ���5*5֮��ֻҪһ�л�һ�л���
//�Խ���������5����Ⱦ����ж���Ӯ�����Ե�ROW��COLС�ڵ���
// 5��ʱ�������game.c������Ӧ����game1.c
//void init_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void print_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//			
//		}
//		printf("\n");
//	}
//
//}
//
//static int is_full(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//void player_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("�����:\n");
//	while (1)
//	{
//		printf("������Ҫ�µ����꣺>\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("�������Ѿ���ռ�ã�����������:>\n");
//			}
//		}
//		else
//		{
//			printf("����Ƿ�,���������룺>\n");
//		}
//	}
//
//}
//
//char is_win(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//
//	//�ж������
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col-1; j++)
//		{
//			if (board[i][j] != board[i][j + 1])
//			{
//				break;
//			}
//		}
//		if (j == col-1)
//		{
//			if (board[i][j] != ' ')
//			{
//				return board[i][j];
//			}
//		}
//	}
//
//	//�ж������
//	for (i = 0; i < col; i++)
//	{
//		int j = 0;
//		for (j = 0; j < row-1; j++)
//		{
//			if (board[j][i] != board[j + 1][i])
//			{
//				break;
//			}
//		}
//		if (j == row-1)
//		{
//			if (board[j][i]!=' ')
//			{
//				return board[j][i];
//			}
//		}
//	}
//
//	//�ж����Խ���
//	for (i = 0; i < row-1; i++)
//	{
//		if (board[i][i] != board[i + 1][i + 1])
//		{
//			break;
//		}
//	}
//	if (i == row - 1)
//	{
//		if (board[0][0] != ' ')
//		{
//			return board[0][0];
//		}
//	}
//	//�жϸ��Խ���
//	int j = 0;
//	for (i = row - 1; i > 0; i--)
//	{
//		
//		if (board[i][j] != board[i - 1][j+1])
//		{
//			break;
//		}
//		j++;
//	}
//	if (i == 0)
//	{
//		if (board[0][row - 1] != ' ')
//		{
//			return board[0][row - 1];
//		}
//	}
//	int ret = is_full(board, ROW, COL);
//	if (ret == 0)
//	{
//		return 'c';
//	}
//	else
//	{
//		return 'q';
//	}
//
//}
//
//void computer_move(char board[ROW][COL], int row, int col)
//{
//	printf("�����ߣ�>\n");
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//
//}
//
//
//
