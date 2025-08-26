// pressure_per_wheel of plan 

#include <stdio.h>

int main(){
	
	float weight_plan;
	int wheels;
	float area_cm2, area_m2;
	
	float force_total, force_per_wheel, pressure_per_wheel;
	
	printf("weight_plan: ");
	scanf("%f", &weight_plan);
	printf("wheels: ");
	scanf("%d", &wheels);
	printf("area_cm2: ");
	scanf("%f", &area_cm2);
	
	// change cm2 to m2
	area_m2 = area_cm2 / 1000;
	
	//calculate  force_total, force_per_wheel, pressure_per_wheel
	force_total =  weight_plan * 9.8;
	force_per_wheel = force_total / wheels;
	pressure_per_wheel = force_per_wheel / area_m2;
	
	printf("force_total : %f\n", force_total);
	printf("force_per_wheel : %f\n", force_per_wheel);
	printf("pressure_per_wheel : %f\n", pressure_per_wheel);
	

}
