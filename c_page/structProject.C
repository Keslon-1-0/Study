#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printplayer(int selected);
void initplayers();
int checkcollection();

typedef struct {
	char* name;
	int age;
	char* character;
	int level;

}PLAYER;
//보유 선수 
int colletion[5] = { 0,0,0,0,0 };
//전체 명단
PLAYER players[5];

int main_STRUCT(void)
{
	//선수 
	//이름 ,나이 ,가격,협상 난이도
	srand(time(NULL));
	
	initplayers();
	
	while (1)
	{
		printf("두근두근 이적시장~ 누구를 영입할까요?\n\n 아무키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() % 5; //0~4 사이를 변환
		printplayer(selected); //정보 출력
		colletion[selected] = 1;//선수 뽑기

		int collectAll = checkcollection();
		if (collectAll == 1)
		{
			break;
		}

	}
	   

	return 0;
}
void initplayers()
{
	players[0].name = "라모스";
	players[0].level = 5;
	players[0].character = "FA";
	players[0].age = 31;

	players[1].name = "타미 에이브라험";
	players[1].level = 4;
	players[1].character = "4천만 유로";
	players[1].age = 23;

	players[2].name = "화이트";
	players[2].level = 2;
	players[2].character = "5천만 파운드";
	players[2].age = 24;

	players[3].name = "산초";
	players[3].level = 4;
	players[3].character = "1억 유로";
	players[3].age = 19;

	players[4].name = "메시";
	players[4].level = 5;
	players[4].character = "FA";
	players[4].age = 33;



}
void printplayer(int selected)
{
	printf("\n\n당신이 영입한 선수 입니다 !\n\n");
	printf("이름 : %s\n", players[selected].name);
	printf("나이 : %d\n", players[selected].age); 
	printf("가격: %s\n", players[selected].character);
	printf("협상 난이도 : ");
	
	for (int i = 0; i < players[selected].level ; i++)
	{
		printf("%s", "★");
	}
	printf("\n\n");
}
int checkcollection()
{
	int collectAll = 1;


	//보유한 선수 목록 
	printf("\n\n======현재 영입 완료 명단=====\n\n");
	for (int i = 0; i < 5; i++)
	{
		if (colletion[i] == 0)
		{
			printf("%10s", "영입명단");
			collectAll = 0;
		}
		else
		{
			printf("%10s", players[i].name);
		}
	}
	printf("\n===============================\n\n");
	if (collectAll)//다 영입 완료
	{
		printf("\n\n다 영입 했어요 돈 ㅈㄴ많나 봐요?\n\n\n\n\n");
	}

	return collectAll;
}