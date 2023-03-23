#include <stdio.h>
#include "Header.h"

#define MAX_STRING_LENGTH 32
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//struct medicine* m;
	system("chcp 1251");
	system("cls");
	int s;

	int found = 0;
	printf("Enter the number: ");
	scanf_s("%i", &s);
	med_list* arr = (med_list*)malloc(s * sizeof(med_list*));
	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	while (1) {
		printf("Choose:\n 0)Exit\n 1)Add medicine\n 2)Delete \n 3)Print medicine\n 4)Search\n ");
		int key;
		do {
			scanf_s("%i", &key);
		} while (1 >= key && key >= 4);

		switch (key) {
		case 0:
			return 0;
		case 1: {
			enter(arr, s);
			break;
		}
		case 2: {
			deletee(arr, s, found);
			s--;
			break;
		}
		case 3: {
			for (int i = 0; i < s; i++) {
				print(arr, i);
			}
			break;
		}
		case 4: {
			search(arr, s);
			break;
		}
		}
		extern free(arr);
		return 0;
	}
}