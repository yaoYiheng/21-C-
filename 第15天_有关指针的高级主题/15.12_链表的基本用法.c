/*
Demonstrates the fundamentals of using a linked list
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct data
{
	char name[20];
	struct data *next;
};

//Define typedefs for the structure and a pointer to it

typedef struct data PERSON;
typedef PERSON *LINK;

int main(int argc, char const *argv[])
{
	//Head, new and current element pointers
	
	LINK head = NULL;
	LINK new = NULL;
	LINK current = NULL;

	//Add the first list elements, We do not assume the list
	//is empty, althought in this demo program it always will
	//be.
	
	new = (LINK)malloc(sizeof(PERSON));
	new->next = head;
	head = new;
	strcpy(new->name, "Abigail");

	//Add an elements to the end of the list
	//We assume the list contains at least one element
	//
	
	current = head;
	while(current->next != NULL){
		current = current->next;
	}

	new = (LINK)malloc(sizeof(PERSON));
	current->next = new;
	new->next = NULL;
	strcpy(new->name, "Carolyn");

	//Add a new element at the second position in the list
	//
	new = (LINK)malloc(sizeof(PERSON));
	new->next = head->next;
	head->next = new;
	strcpy(new->name, "Beatrice");

	//Print all data items in order


	current = head;
	while(current != NULL){
		printf("%s\n",current->name );
		current = current->next;
	}



	return 0;
}