// snell and sump

#include <stdio.h>

int main(){
	
	float deep; // deep of sump
	float up = 2.63, down = 0.28; // value to up or down
	float distance; // total distance of snell
	
	int day = 1;
	
	scanf("%f", &deep); // input deep of sump for user
	
	while(distance < deep){ // check to see if snell will leace the sump
		//check snell up or down by day
		if(day%2==0){ // is even day
			distance = distance - down;
			printf("day: %d distace: %f\n", day, distance);
		}else{ // is odd day
			distance = distance + up;
			printf("day: %d distace: %f\n", day, distance);
		}
		// check every 7 day
		if(day%7==0){
			printf("distance of one week : %f\n\n", distance);
		}	
		day++;
		
	}	
	printf("\ntotal distance: %f\n", distance);

}
