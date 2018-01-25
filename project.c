#include <stdio.h>
int main() {
	int minutes1, days, hours, minutes;
	printf("Enter computer working time: ");
	scanf("%d", &minutes);
	days = minutes/1440;
	hours = (minutes%1440)/60;
	minutes1 = ((minutes%1440)%60);
	printf("It is %d days %d hours and %d minutes.\n", days, hours, minutes1 );
	printf("---------------------\n");
}
