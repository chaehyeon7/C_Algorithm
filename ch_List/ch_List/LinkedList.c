#include<stdlib.h>
#include<stdio.h>
int main(void) {
	char input;
	struct node {
		char data;
		struct node *link;
	};

struct node *head, *p;
	head=(struct node*)malloc(sizeof(struct node));

	head->data = ' ';
	head->link = NULL;
	printf("data �Է�:"); scanf_s("%c", &input,1);
	getchar();

	p = head;
	while (input != '0') {
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;
		p->data = input;
		p -> link = NULL;
		printf("�Է� Data(0 �̸� ����:)");
		scanf_s("%c", &input,1);
		getchar();
	}
	p = head->link;
	while(p != NULL) {
		if (p->link != NULL)printf("%c->", p->data);
		else printf("%c", p->data);
		p = p->link;
	}
	return 0;
}
