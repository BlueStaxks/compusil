#pragma once
typedef struct {
	int Set_Type; //0이면 정수 집합, 1이면 실수 집합, 2라면 소수 집합, 3이면 그 외
	double real_set[100000]; //세트 값이 저장되는 공간
	unsigned int p; //현재 데이터 위치
} SETS;

unsigned int Get_Set_Size(SETS* c) //원소 개수 리턴
{
	return (*c).p;
}

int Get_Set_Type(SETS* c) //집합 타입 리턴
{
	return (*c).Set_Type;
}

int Put_Set(SETS* c, double i) //집합에 원소 추가
{
	(*c).real_set[(*c).p] = i;
	((*c).p)++;
}