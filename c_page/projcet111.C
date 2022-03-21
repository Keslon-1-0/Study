#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int level;
int arrayFish[6];
int * cursor;
void initData();
void printfishes();
void decreasewater(long elapesdtime);
/*int main_Q(void)
{

	long starttime = 0; //게임 시작 시간
	long totalElapesdtime = 0; // 총 경과 시간 
	long prevElapsedtime = 0; //직전 경과시간 
	
	int num;// 몇번 어항에 물을 줄건지
	initData();
	
	cursor = arrayFish;

	starttime = clock();
	while (1)
	{
		printfishes();
		printf("몇번 어항에 물을 넣으시겠습니까?\n");
		scanf_s("%d", &num);

		if (num < 1 || num > 6)
		{
			printf("그 잘못 입력하셨습니다\n");
			continue;
		}


		//총 경과 시간
		totalElapesdtime = (clock() - starttime) / CLOCKS_PER_SEC;
		printf("총 경과시간은 :%|d 초 \n", totalElapesdtime);
		//직전에 물을 준 시간
		prevElapsedtime = totalElapesdtime - prevElapsedtime;
		printf("최근 경과시간 :%|d초\n", prevElapsedtime);
		//어항물 감소 과정
		decreasewater(prevElapsedtime);
		//물을준다
		//1.어항의 물이 0이다? 물을 주지 않는다
		if (cursor [num] -1 <= 0)
		{
			printf("%번물고기는 이미 죽었습니다", num);
		}
		//0이 아닌경우 100이하에서의 체크 필요 100 ->101 X
		else if (cursor[num]+1 <= 100)
		{
			printf("%번 어항에 물을 줍니다", num);
			cursor[num - 1] += 1;//cursor[num - 1] =cursor[num - 1] +1
		
		}
	
		//레벨업 할건지 물어보기 
		if (totalElapesdtime / 20 > level -1)
		{
			level++; //1업 	
			printf(" ***축 레벨업! %d에서 %d로 레벨을 올렸습니다 ***\n\n", level - 1, level);
		}
		if (level == 5)
		{
			printf("*******축하합니다 최고 레벨을 달성하였습니다 게임을 종료합니다");
			exit();
		}
		//물고기가 죽었는지 확인
		if (checkfishalive()==0)
		{
			//다죽음 
			printf("모든 물고기가 죽었습니다\n");
			exit(0);

		}
		else		
		{
			//최소 한마리는 살아있음
			printf("아직 살아있습니다\n");

		}
		prevElapsedtime = totalElapesdtime;

		//

	}
	return 0;
}
void initData()
{
	level = 1;//게임 레벨(1~5)
		for (int i = 0; i < 6; i++)
		{
			arrayFish[i] = 100; //어항의 물 높이 
		}
}
void printfishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);	

	}

	printf("\n\n");

}

void decreasewater(long elapesdtime)
{
	for  (int i= 0; i < 6 ; i++)
	{
		arrayFish[i] -= (level * 3 * (int) elapesdtime);
			if (arrayFish[i] <0)
			{
				arrayFish[i] = 0;
			}
	}
}
int checkfishalive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	
	}
	return 0;
}*/
