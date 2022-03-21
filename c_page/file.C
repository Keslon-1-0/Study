//#define _CRT_SECURE_NO_WARINGS
//
//#include <stdio.h>
//
//#define MAX 10000
//
//int main_file(void)
//{
//	//파일 입출력
//	
//	//fputs,fgets 쌍
//	//fprintf,fscanf 쌍
//	//char line[MAX]; //char line[10000]
//	
//	
//	//FILE* file = fopen("c;\\test1.txt", "wb"); //r 읽기 전용 w 쓰기 전용  a 이어쓰기 t txt b
//	//if (file == NULL)
//	//{
//
//	//	printf("파일이 없는데;;\n\n");
//	//	return 1;
//	//}
//	//FILE* fp;
//
//	//fp = fopen("a.txt", "r");
//	//if (fp == NULL)
//	//{
//	//	printf("파일이 열리지 않음\n");
//	//	return 1;
//	//}
//	//printf("파일이 열림\n\n");
//
//	//fputs("fputs 를 이용해서 글을 적어볼게요 \n", file);
//	//puts("잘적히는지 확인좀", file);
//	
//	//열었으면 닫아야되여
//	
//	/*fclose(fp);*/
//
//
//	int num[6] = {0, 0, 0, 0, 0, 0};
//	int bonus = 0;
//	char str1[MAX];
//	char str2[MAX];
//	FILE* file = fopen("c;\\test2.txt", "wb");
//	if (file == NULL)
//	{
//		printf("파일 열기 실패\n");
//		return 1;
//	}
//	//로또 추첨 번호 저장법
//	fprintf(file,  "%s %d %d %d %d %d %d\n", "추첨번호,1,2,3,4,5,6");
//	fprintf(file,  "%s %d\n","보너스 번호,7");
//
//	fclose(file);
//
//	return 0;

}