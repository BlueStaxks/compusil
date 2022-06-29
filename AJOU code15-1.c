#include <stdio.h>
#include "CARS.h"
#include "SETS.h"
int main()
{
	CARS car;
	car.Car_Brand = 1;
	car.Engine_Type = 0;
	car.Fuel_Gauge = 99;
	printf("Car Brand = %d\n", Get_Car_Brand(&car));
	printf("Car's Engine Type = %d\n", Get_Engine_Type(&car));
	printf("Car's Fuel = %d%%\n\n", Get_Fuel(&car));


	SETS set;
	set.p = 0;
	set.Set_Type = 0;
	for (int i = 0; i < 10; ++i)
	{
		printf("Putting %d to the set...\n", i);
		Put_Set(&set, i);
	}
	printf("\nSet size = %d\n", Get_Set_Size(&set));


	return 0;
}  //뭐 이런거 하라는 거겠죠?