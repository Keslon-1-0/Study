//#include <stdio.h>
//
//struct gameinfo
//{
//	char* name;
//	int year;
//	int price;
//	char* company;
//
//	struct gameinfo * friendgame //연관 업체 
//
//};
//int main_struct2222(void)
//{
//	// [게임 출시]
//	//이름: project A 가격 50 출시일 2021 제작자 I
//
//	char* name = "project A";
//	int year = 2021;
//	int price = 50;
//	char* company = "I";
//
//	//이름 PROJECT C PRICE 20 
//
//	char* name2 = "project C";
//	int year2 = 2021;
//	int price2 = 20;
//	char* company2 = "Y";
//
//	//구조체 사용
//	struct gameinfo gameinfo1;
//	gameinfo1.company = "I";
//	gameinfo1.name = "project A";
//	gameinfo1.price = "50";
//	gameinfo1.year = "2021";
//
//	
//
//	//구조체를 배열처럼 초기화
//	struct gameinfo gameinfo2 = { "I,project C,2021,20,Y" };
//
//	//printf("----게임 출시 정보-----\n");
//	//printf("게임 이름 : %s\n", gameinfo2.company);
//	//printf("게임 가격 : %s\n", gameinfo2.name);
//	//printf("게임 제작 년도 : %d\n", gameinfo2.price);
//	//printf("게임 제작사 : %d\n", gameinfo2.year);
//	
//	//구조체 배열
//	struct gameinfo gameArray[2]=
//	{
//		{"project C,2021,20,Y" },
//		{"projectA,2021,50,I"}
//	};
//	//구조체 포인터 
//	struct gameinfo* gamePtr;
//	
//	//gamePtr = &gameinfo1;
//	//printf("\n\n----게임 출시 정보---- - \n"); //
//	//printf("게임 이름 : %s\n", (*gamePtr).company);
//	//printf("게임 가격 : %s\n", (*gamePtr).name);
//	//printf("게임 제작 년도 : %d\n", (*gamePtr).price);
//	//printf("게임 제작사 : %d\n", (*gamePtr).year);
//	gamePtr = &gameinfo1;
//	printf("\n\n----게임 출시 정보---- - \n"); //
//	printf("게임 이름 : %s\n", gamePtr->company);
//	printf("게임 가격 : %s\n", gamePtr->name);
//	printf("게임 제작 년도 : %d\n", gamePtr->price);
//	printf("게임 제작사 : %d\n", gamePtr->year);
//
//	//연관 업체 소개
//	gameinfo1.friendgame = &gameinfo2;
//	printf("\n\n----게임 출시 정보---- - \n"); //
//	printf("게임 이름 : %s\n", gameinfo1.friendgame->company);
//	printf("게임 가격 : %s\n", gameinfo1.friendgame->name);
//	printf("게임 제작 년도 : %d\n", gameinfo1.friendgame->price);
//	printf("게임 제작사 : %d\n", gameinfo1.friendgame->year);
//
//	//typedef
//	//자료형의 별명을 지정 
//	int i = 1;
//	typedef int 정수;
//	typedef int 실수;
//	정수 정수변수 = 3; // 정수 = int 
//	실수 실수변수 = 1.33333f; //실수 = float 
//
//
//
//	return 0;
//}