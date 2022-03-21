#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getRandomNum(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();
int main_2(void)
{

	//srand(time(NULL));
	//int count = 0;
	//	for (int i = 1; i < 6 ; i++)
	//	{
	//			int num1 = getRandomNum(i);
	//			int num2 = getRandomNum(i);
	//			//printf("%d X %d의 값은 얼마 입니까?\n", num1, num2);
	//			showQuestion(i, num1, num2);
	//			
	//			int answer = -1;
	//			scanf_s("\n%d", &answer);
	//			if (answer == -1)
	//			{
	//				printf("혹시 두려우신가요 휴 우 먼?? \n\t프로그램을 종료\n\"");
	//				exit(0);
	//			}
	//		else if (answer == num1 *num2)
	//		{
	//			success();
	//			count++;
	//			printf("당신은 %d번째까지 성공 했어요! \n 생각보다 휼륭한것 같군요! \n 더욱 열심히해서 저희의 데이터를 수집하는데 도움이 되겠군요..", count);
	//		}

	//		else 
	//			{
	//		fail();
	//				exit(1);
	//			
	//		}	
	//							 				
	//						
	//	}

	//문자 vs 문자열
	//char c = 'A';		//가능
		//printf("%c\n", c);
	

	//char str[7] = "coding";
	//[6]불가능 문자열은 문장 끝에 문자 NULL -> \0 공간하나 비워 줘야함
	//  이 붙여야한다 
		//printf("%s\n", str);
	//char str[] = "coding";
	/*printf(" % s\n", sizeof(str));
	printf(" %s\n", str);*/
	//printf("%s\n", str);
	//영어 1byte 한글 2byte char 1byte
	
	//ASCH 코드  
		
	//참고 0~127 사이의 아스키 코드 정수값
	//for (int i = 0; i < 0; i++)
	//{
	//	printf("아스키 코드는 %d : %c\n",i,i);
	//}






	


	return 0;
}
//왜 다시 하니까 되는거지 하나도 바꾼게 없는데 병신 프로그램 ㅅㅂ 
int getRandomNum(int level)  // 왜 버그가 터진거지 ㅈ도 모르겠다 시발 뭐가 틀린건지 ㅈ도 모르겟다 진짜 시발 ㅈㄴ 빡이 친다 왤까 진지하게 생각해도 모르겠다.
{
	return rand() % (level * 9) + 1;	
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n########## %d 번째 비밀번호 ########\n", level);
	printf("\n\t%d X %d 는? \n\n", num1, num2);
	printf("비밀번호를 입력하세요 (종료 : -1)\n ");
}
void success()
{
	printf("성공 했어요!\n\n    ");
}
void fail()
{
	printf("틀렸는데요? ㅄ임?\n데이터 수집 실패 ");
}