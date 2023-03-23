#include <stdio.h>
#include "Header.h"

void enter(med_list *arr, int s) {
	int i;
	for (i = 0; i < s; i++) {
		char dd[255];
		gets(dd, );
		printf("Input name medecine:");
		//arr[i].name = (char)malloc(sizeof(char) * MAX_STRING_LENGTH);
		gets(arr[i].name);
		//getchar();

		printf("\nInput name pharmacy:");
		//arr[i].name_p = (char)malloc(sizeof(char) * MAX_STRING_LENGTH);
		gets(arr[i].name_p);
		//getchar();

		printf("\nInput surname:");
		//arr[i].surname = (char)malloc(sizeof(char) * MAX_STRING_LENGTH);
		gets(arr[i].surname);
		//getchar();

		printf("\nInput price:");
		//arr[i].price = (char)malloc(sizeof(char) * MAX_STRING_LENGTH);
		gets(arr[i].price);
		printf("\n");
		//getchar();

		printf("Input phone number (4 numbers):");
		gets(arr[i].phone_number);
		while(strlen(arr[i].phone_number) != 4)
			gets(arr[i].phone_number);
		printf("\n");
		//getchar();
	}
}

void deletee(med_list *arr, int s, int found) {
	char med[10]; 
	int i;
	char dd[255];
	int count = 0;
	med_list* buff;
	buff = (med_list*)calloc(s, sizeof(med_list));
	printf("you chose to delete medicine\n");
	printf("enter the name of the medecine:\n");
	gets(dd);
	gets(med);
	for (i = 0; i < s; i++) {
		if (strcmp(arr[i].name, med) == 0) {
			for (int j = i; j < s; j++) {
				arr[j] = arr[j + 1];
			}
			found = 1;
			break;
		}
	} if (found == 0) {
		printf("Not found\n");
	}
}

void print(med_list *arr, int i) {
	printf("name:%s\n", arr[i].name);
	printf("price:%s\n", arr[i].price);
	printf("pharmacy:%s\n", arr[i].name_p);
	printf("surname: %s\n", arr[i].surname);
	printf("Phone number: %s\n", arr[i].phone_number);
	
}

void search(med_list* arr, int s) {
	char pos[255];
	char dd[255];
	int flag = 0;
	printf("you chose to search medicine\n");
	printf("enter the name of the medecine:\n");
	gets(dd);
	gets(pos);
	for (int i = 0; i < s; i++) {
		if (strcmp(arr[i].name, pos) == 0) {
			printf("name:%s\n", arr[i].name);
			printf("price:%s\n", arr[i].price);
			printf("pharmacy:%s\n", arr[i].name_p);
			printf("surname: %s\n", arr[i].surname);
			printf("Phone number: %s\n", arr[i].phone_number);
			flag = 1;
		}
	}
	if(!flag)
		printf("There is no medicine\n");
}