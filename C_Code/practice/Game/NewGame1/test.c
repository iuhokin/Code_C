#define _CRT_SECURE_NO_WARNINGS 1

//test.c

#include "game.h"
void menu(void)
{
	printf("************************\n");
	printf("*******  ������  *******\n");
	printf("*******----------*******\n");
	printf("************************\n");
	printf("************************\n");
	printf("******* ��Ϸ�˵� *******\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
	
}
void game(void)
{
	printf("��ʼ��Ϸ��>\n");
	char board[ROW][COL] = { 0 };
	char ret = 0;
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret= is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Sleep(2000);
		system("cls");
		print_board(board, ROW, COL);

		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Sleep(2000);
		system("cls");
		print_board(board, ROW, COL);


	}
	if (ret == '*')
	{
		printf("���Ӯ\n\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n\n");
	}
	else if (ret == 'q')
	{
		printf("˫��ƽ��\n\n");
	}
}
void test(void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		printf("��ѡ��:>\n");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
		}

	} while (input);
}
int main()
{
	test();
	return 0;

}