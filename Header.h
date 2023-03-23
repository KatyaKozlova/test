#pragma once

typedef struct {
	char name[255];
	char name_p[255];
	char surname[255];
	char price[255];
	char phone_number[255];
} med_list;

void enter(med_list *arr, int s);
void deletee(med_list* arr, int s, int found);
void print(med_list* arr,int i);
void search(med_list* arr, int s);