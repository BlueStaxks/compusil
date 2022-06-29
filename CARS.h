#pragma once
typedef struct {
	int Engine_Type; //0이면 엔진, 1이면 전기
	int Car_Brand; //0이면 알 수 없음, 1이면 롤스로이스, 2라면 페라리, 3이면 그 외
	int Fuel_Gauge; //0부터 100까지의 정수, 남은 연료의 백분률
} CARS;

int Get_Engine_Type(CARS* c) //엔진 종류 리턴
{
	return (*c).Engine_Type;
}

int Get_Car_Brand(CARS* c) //차 브랜드 리턴
{
	return (*c).Car_Brand;
}

int Get_Fuel(CARS* c) //현재 남은 연료 백분률 리턴
{
	return (*c).Fuel_Gauge;
}