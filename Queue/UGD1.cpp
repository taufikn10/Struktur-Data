#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 8

typedef struct
{
	int data[MAX];
	int head;
	int tail;
} Queue;

Queue antrian;

void Create()
{
	antrian.head=antrian.tail=-1;
}

int IsEmpty()
{
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int IsFull()
{
	if(antrian.tail==MAX-1)
		return 1;
	else
		return 0;
}

void Enqueue(int data)
{
	if(IsEmpty()==1)
	{
		antrian.head=antrian.tail=0;
		antrian.data[antrian.tail]=data;
		printf("%d masuk!",antrian.data[antrian.tail]);
	} else;
	if(IsFull()==0)
	{
		antrian.tail++;
		antrian.data[antrian.tail]=data;
		printf("%d masuk!", antrian.data[antrian.tail]);
	}
}

int Dequeue()
{
	int i;
	int e = antrian.data[antrian.head];
	for(i=antrian.head;i<=antrian.tail-1;i++)
	{
		antrian.data[i] = antrian.data[i+1];
	}
	antrian.tail--;
	return e;
}

void Clear()
{
	antrian.head=antrian.tail=-1;
	printf("data.clear");
}

void Tampil()
{
	int jum=0;
	if(IsEmpty()==0)
	{
		for(int i=antrian.head; i<=antrian.tail; i++)
		{
			printf("%d", antrian.data[i]);
			jum =jum+antrian.data[i];
		}
	}
		else printf("data kosong!\n");
}

void Operasidata(int pil)
{
	int jum = 0;
	int b =antrian.tail;
	float c;
	if(IsEmpty()==0)
	{
		for(int i=antrian.head; i<=antrian.tail; i++)
		{
			jum=jum+antrian.data[i];
		}
		c = jum/b;
		switch (pil)
		{
			case 1: printf("Banyak Data = %d", antrian.tail); break;
			case 2: printf("Jumlah Data = %d", jum); break;
			case 3: printf("Rata-rata = %d", c); break;
		getch();
		}
	}
	else
	{
		printf("data kosong!\n");
	}
}
int main()
{
	int pil;
	int data;
	Create();
	do
	{
		system ("CLS");
		printf("Menu Antrian\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Tampil\n");
		printf("4. Clear\n");
		printf("5. Banyak data\n");
		printf("6. Jumlah data\n");
		printf("7. Rata-rata\n");
		printf("8. Exit\n");
		printf("Pilihan = ");scanf("%d",&pil); switch(pil)
		{
			case 1: printf("Data= ");scanf("%d", &data); Enqueue(data); break;
			case 2: printf("Elemen yang keluar : %d", Dequeue() ); break;
			case 3: Tampil(); break;
			case 4: Clear(); break;
			case 5: Operasidata(1); break;
			case 6: Operasidata(2); break;
			case 7: Operasidata(3); break;
		getch();
		}
	}while(pil!=5);
}
