#define _CRT_SECURE_NO_WARNINGS

//pun.c
// #include<stdio.h>
//int main(void)
//{
//	printf("To C,or not to C;that is the question.\n");
//	return 0;
//}


//dweight.c
//Computer the dimensional weight of a 12"*10"*8"box;
//#include<stdio.h>
//
//int main(void)
//{
//	int height, length, width, volume, weight;
//	
//	height = 8;
//	length = 12;
//	width = 10;
//	volume = height * length * width;
//	weight = (volume + 165) / 166;
//
//	printf("Dimensions:%dx%dx%\n", length, width, height);
//	printf("Volume(cubic inches):%d\n", volume);
//	printf("Dimensional weight (pounds):%d\n", weight);
//
//	return 0;
//}
//
//

//dweight2.c
//Computer the dimensional weight of a  box from input provided by the user;
//#include<stdio.h>
//
//int main(void)
//{
//	int height, length, width, volume, weight;
//	
//	printf("Enter height of box: ");
//	scanf("%d", &height);
//
//	printf("Enter length of box: ");
//	scanf("%d", &length);
//
//	printf("Enter width of box: ");
//	scanf("%d", &width);
//
//	volume = height * length * width;
//	weight = (volume + 165) / 166;
//
//	
//	printf("Volume(cubic inches):%d\n", volume);
//	printf("Dimensional weight (pounds):%d\n", weight);
//
//	return 0;
//}
//


//celsius.c
//Converts a Fahrenheit temperature to Celsius

#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_PACTOR (5.0f/9.0f)

int main(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_PACTOR;
	printf("Celsius equivalent:%.1f\n", celsius);

	return 0;
}



