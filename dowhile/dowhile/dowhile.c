//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<windows.h>
//
//#define MIN 1;
//#define MAX 100;
//
//void menu()
//{
//	printf("*********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("*********************\n");
//}
//
//void game()//int guess
//{
//	/*RAND_MAX;*/
//	int guess = 0;
//	int res = rand() % 100 + 1;
//	int min = MIN;
//	int max = MAX;
//	/*printf("%d\n", result);*/
//	printf("请输入一个数字:>");
//	
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < res)
//		{
//			min = guess;
//			printf("请从%d到%d中选择:>", min, max);
//		}
//		else if (guess > res)
//		{
//			max = guess;
//			printf("请从%d到%d中选择:>", min, max);
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//
//}
//int main()
//{
//	int num = 0;
//	srand((unsigned int)time(NULL));//只生成一次种子，是随机数更加随机
//	do
//	{
//		menu();
//		printf("请选择:>");
//
//		scanf("%d", &num);
//		switch (num)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("结束游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择!!!\n");
//			break;
//		}
//		Sleep(1000);
//		system("cls");
//	} while (num);
//	return 0;
//}
