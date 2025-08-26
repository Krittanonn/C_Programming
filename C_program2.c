// angle of clock

#include <stdio.h>

int main(){
	
	int hour, min;
	float hourAngle, minAngle, angle;
	
	scanf("%d %d", &hour, &min);
	
	hour = hour % 12;
	
	// calculate minAngle
	minAngle = min * 6;
	printf("%f\n", minAngle);
	// calculate hourAngle
	hourAngle = (hour * 30) + (min * 0.5);
	printf("%f\n", hourAngle);
	
	// calculte angle
	angle = hourAngle - minAngle; 
	
	if(angle < 0){
		angle = angle * -1;
	}
	
	if(angle > 180){
		angle = 360 - angle;
	}
	
	printf("hourAngle :%.2f\n", hourAngle);
	printf("minAngle :%.2f\n", minAngle);
	printf("angle : %.2f\n", angle);

} 
