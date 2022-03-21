#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);
int main_pointer(void)
{
	//철수 :301
	//영희 :302
	//민수 :303
	/*int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;

	printf("철수네 주소 : %d , 암호 : %d\n", &철수, 철수);
	printf("민수네 주소 : %d , 암호 : %d\n", &민수, 민수);
	printf("영희네 주소 : %d , 암호 : %d\n", &영희, 영희);


	int* 미션맨;
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 방문한는 주소 : %d 암호 : %d\n", 미션맨,* 미션맨);
	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 방문한는 주소 : %d 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 방문한는 주소 : %d 암호 : %d\n", 미션맨, *미션맨);


	int  * 스파이 = 미션맨;
	printf("\n.....스파이가 미션 수행중..\n\n");
	스파이 = &철수;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소: %d ,암호:%d\n", 스파이, *스파이);


	스파이 = &영희;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소: %d ,암호:%d\n", 스파이, *스파이);


	스파이 = &민수;
	*스파이 = *스파이 - 2;
//	printf("스파이가 방문하는 곳 주소: %d ,암호:%d\n", 스파이, *스파이);*/
//
//
//	int arr[3] = { 5, 10, 15 };
//	int* ptr = arr;
//	for (int i = 0; i < 3 ; i++)
//	{
//		printf("배열 arr[%d]의 값은 : %d\n", i, arr[i]);
//
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("포인터 ptr[%d]의 값은 : %d\n", i, ptr[i]);
//
//	}
//	ptr[0] = 100;
//	ptr[1] = 150;
//	ptr[2] = 200;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("배열 arr[%d]의 값은 : %d\n", i, arr[i]);
//
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("포인터 ptr[%d]의 값은 : %d\n", i, ptr[i]);
//
//	}
////arr + i == arr[i] 배열의 첫번째 값의 주소와 동일 == &arr[0]
//	printf("arr자체의 값 :%d\n", arr);
//	printf("arr[0]의 주소 :%d\n", &arr[0]);
//
//	printf("arr 자체 값이 가지는 주소의 실체 값 :%d\n", *arr);// *arr + 0
//	printf("arr[0]의 실제 값 :%d\n", *&arr[0]);
	// *& 둘이 있으면 아무것도 없는것과도 같다 &주소 *그 주소의 값


	//swap 스왑 함수 말그대로 바꾸는거 

	//int a = 10;         // a와b 를 특정하게 선언 
	//int b = 20;
	//printf("a의 주소는 %d\n", &a);
	//printf("b의 주소는 %d\n", &b);
	//
	//
	////a와 b의 값을 바꾼다

	//printf("SWAP 함수 전 => a : %d,b;%d\n", a, b);
	//swap(a, b);
	//printf("SWAP 함수 후 => a: %d,b:%d\n", a, b);	
	//

	//printf("(주소값전달)SWAP 함수 전 => a : %d,b;%d\n", a, b);
	//swap(a, b);
	//printf("(주소값전달)SWAP 함수 후 => a: %d,b:%d\n", a, b);
	//

	//call by value ->값만 복사 

	//int arr2[3] = {10, 20, 30};
	//changeArray(arr2);
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d\n", arr2[i]);

	//}
	/*
	int i = 2;
	for (int j = 0; j < 3; j++)
	{
		if (j == 3)
		{
			printf("you are so small cherry boy\n");
		}
		else if(j == 1)
		{
			printf("you need more\n ");
		}
		else if (j == 2)
		{
			printf("you need more\n");
		}
		else 
		{
			printf("OKAY I'm admit you\n ");
		}
		
		



	}
	if (i == 3)
	{
		printf("ice in my vein");
	}
	else
	{
		printf("NO.. sir are you okay?");
		
	}
	*/
	


	return 0;
}
//void swap(int a, int b)  //바꾼다고도 위에서도 선언 해주자					
//{
//	printf("swap 함수내 a의 주소는 %d\n", &a);
//	printf("swap 함수내 b의 주소는 %d\n", &b);
//	
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("SWAP 함수 내 => a: %d,b:%d\n", a, b);
//}
//void swap_addr(int * a, int * b)  //바꾼다고도 위에서도 선언 해주자					
//{
//	
//	int temp = *a;
//	* a = * b;
//	* b = temp;
//	printf("(주소값전달)SWAP 함수 내 => a: %d,b:%d\n", * a, * b);
//}
void changeArray(int* ptr)
{
	ptr[2] = 50;


	



}