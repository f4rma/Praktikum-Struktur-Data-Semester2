//created by Raditya Putra Farma 23343050

#include <stdio.h>

struct person{
	int age;
	float weight;
};

int main(){
	strcut person *personPtr, person1;
	personPtr= &person1;
	printf("Enter age: ");
	scanf("%d", &personPtr->age);
	peintf("Enter weight: ");
	scanf("%f", &personPtr->weight);
	printf("Displaying: \n");
	printf("Age: %d\n", personPtr->age);
	printf("Weight: %f", personPtr->weight);
	return 0;
}
	
