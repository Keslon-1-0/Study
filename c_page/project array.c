#include <stdio.h>
#include <time.h>
/*int getemptyposition();
void iniAnimalArray();
char *  strAnimal[10];
void iniAnimalname();
int checkAnimal[4][5];
int arrayanimal[4][5];  //총20장 
void shuffleAnimal();
int	conv_pos_y(int x);
void printfQuestion();

void printfAnimal();
int conv_pos_x(int y);
int main_s2ec(void)*/


	
	
	
	
	//서로 다른 동물 
	//사용자로 부터 2가지의 입력값을 받아서 모든걸 찾으면 종료 실패하면 알려주기
	
//	srand(time(NULL));
//	
//	iniAnimalArray();
//	iniAnimalname();
//	
//	shuffleAnimal();
//
//	int failcount(); //실패 횟수
//	
//	while (1)
//	{
//		int select1 = 0;
//		int select2 = 0;
//		
//		printfAnimal();  //위치 출력
//		printfQuestion(); //문제 출력
//		printf("뒤집을 카드 두가지를 고르세요 : \n");
//		scranf_s("%d,%d", select1, select2); 
//		
//		
//		
//		
//		if (select1 == select2) //같다면 무효처리 
//			continue;
//
//		//좌표에 해당하는거 뒤집어서 같은지 다른지 확인 
//		int firstselect_x = conv_pos_x(select1);
//		int firstselect_y = conv_pos_y(select1); 
//
//		int secondselect_x = conv_pos_x(select2);
//		int secondselect_y = conv_pos_y(select2);
//
//		if ((checkAnimal [firstselect_x][firstselect_y] == 0
//			&& checkAnimal[secondselect_x][secondselect_y] == 0)
//				&&( arrayanimal[firstselect_x][firstselect_y] == arrayanimal[secondselect_x][secondselect_y]))
//		{
//			printf("\n\n정답 %s 발견 \n\n", strAnimal[checkAnimal[firstselect_x][firstselect_y]]);
//			checkAnimal[firstselect_x][firstselect_y] == 1;
//			checkAnimal[secondselect_x][secondselect_y] == 1;
//
//
//		}
//		else
//		{
//			printf("\n\n땡!(틀렸거나 이미 뒤집힌 카드입니다)\n\n");
//			printf("%d : %s\n ", select1, strAnimal[firstselect_x][firstselect_y]);
//			printf("%d : %s\n ", select1, strAnimal[secondselect_x][secondselect_y]);
//			failcount++;
//			
//		}
//		if (foundallanimal()==1)
//		{
//			printf("모든 동물을 찾았습니다 지금까지 %d 실수 하셧습니다\n\n", failcount);
//			break;
//		}
//	}
//
//
//	return 0;
//	}
//void	iniAnimalArray()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arrayanimal[i][j] = -1;
//
//		}
//	}
//}
//void iniAnimalname()
//{
//	strAnimal[0] = "A";
//	strAnimal[1] = "B";
//	strAnimal[2] = "C";
//	strAnimal[3] = "D";
//	strAnimal[4] = "F";
//	strAnimal[5] = "G";
//	strAnimal[6] = "H";
//	strAnimal[7] = "J";
//	strAnimal[8] = "K";
//	strAnimal[9] = "L";
//}
//
//void shuffleAnimal()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			int pos = getemptyposition();
//			int x = conv_pos_x(pos);
//			int y = conv_pos_y(pos);
//
//			arrayanimal[x][y] = i;
//		}
//	}
//}
//int getemptyposition()
//{
//	while (1)
//	{
//		int randpos = rand() % 20;//0~19
//		int x = conv_pos_x(randpos);
//		int y = conv_pos_y(randpos);
//		
//		if (arrayanimal[x][y] == -1)
//		{
//			return randpos;
//		
//		}
//
//	}
//	return 0;
//}
//int conv_pos_x(int x)
//{
//	//19 -> 3,4
//	return	x / 5;
//}
//int conv_pos_y(int y)
//{
//	return y % 5; // == y를 5로 나머지 값 몫과 나머지 
//}
//void printfAnimal()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%8s", strAnimal[arrayanimal[i][j]]);
		//}
		//printf("\n");

//	}
//	printf("\n============================\n");
//}
//void printfQuestion()
//{
//	printf("\n\n(문제)\n\n");
//	int seq = 0;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5 j++)
//		{
//			//카드를 맟추면 "동물이름"
//			if (checkAnimal[i][j] !=0)
//			{
//				printf("%8s", strAnimal[arrayanimal[i][j]]);
//
//			}
//			//틀렸으면 뒷면 => 숫자(위치를 나타냄)
			//eles
			/* {
				printf("%8s", seq);
			}
			seq++;
		}
		printf("\n");
	}

}
int foundallanimal()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
				return 0;
		}
	}
	return 1;
}*/
