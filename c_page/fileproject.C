#define _CRT_SECURE_WARNINGS
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <string.h>

//비밀 번호를 통해 일기를 작성
#define MAX	10000
int main(void)
{
	char line[MAX];
	char contents[MAX];
	char password[MAX];
	char c;
	
	printf("비밀일기에 오신걸 환영합니다\n");
	printf("비밀 번호를 입력하세여\n\n");
	int i = 0;
	//getch 키입력시 즉시 동작
	while (1)
	{
		c = getch();
		if (c == 13)
		{
			password[i] = '\0';
		}
		else
		{
			printf("★");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n======비밀번호 확인중=====\n\n");
	if (strcmp(password , "skehzheld") ==0)
		
	{
		printf("비번 확인 완료\n\n");
		char* filename = fopen(filename, "a+b");     //+ 파일이 없으면 생성 있으면 뒤에서붜 내용을 추가
		if (file == NULL)
		{
			printf("\n\n파일 없는데요;;\n\n");
			return 1;
		}
		while (fgets(line, MAX, file) != NULL)
			{
					printf("%s",line);
		}
		printf("\n\n종료하시려면 EXIT 를 입력하세요\n\n");
		while (1)
		{
			scanf("%[^\n]", contents); //세줄 바꿈이 나오기 전까지 읽기
			getchar();

			if (strcmp(contents ,"EXIT") == 0)
			{
				printf("종료");
				break;
			}
			fputs(contents,file);
			fputs("\n", file);
			fclose(file);
			
		
		}
		else//<<-------   이거 왜 안되니?
		{
			printf("비밀 번호를 틀림\n\n");
		}
	}

	return 0;
}