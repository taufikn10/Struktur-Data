#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdio>
#include <stdlib.h>

#define MAX 8

using namespace std;

typedef struct {
int data [MAX];
int head;
int tail;
} queue;

    queue antrian;

    void create()
        {
            antrian.head=antrian.tail=-1;
        }

    int IsEmpty()
    {
        if (antrian.tail==-1)
            return 1;
            else
                return 0;
    }

    int IsFull()
    {
        if (antrian.tail==MAX-1)
            return 1;
        else
            return 0;
    }

    void enqueue (int data)
    {
        if (IsEmpty()==1){
            antrian.head=antrian.tail=0;
            antrian.data[antrian.tail]=data;
            void tampil();
            {
                if (IsEmpty()==0){
                    for (int i=antrian.head;i<=antrian.tail;i++){
                    }
                } else printf("data kosong!\n"); }
            }
        else
                if (IsFull()==0){
                    antrian.tail++;
                    antrian.data[antrian.tail]=data;
                }
        }
	void KeluarProgram()
	{
	system("cls");
	cout << "Anda Keluar Program \n\n";
	system("pause");
	}
        int Dequeue (){
        int i;
        int e =antrian.data[antrian.head];
        for (i=antrian.head;i<=antrian.tail-1;i++){
            antrian.data[i] = antrian.data[i+1];
        }
            antrian.tail--;
            return e;
        }

        void clear (){
        antrian.head=antrian.tail=-1;
        cout<<"data clear";
        }

        void tampil() {
        int jum=0;
            if(IsEmpty()==0){
                for(int i=antrian.head;i<=antrian.tail;i++){
                    printf("data yang dimasukkan = %d \n",antrian.data[i]);
                    jum=jum+antrian.data[i];
                }
            } else
                cout<<"data kosong\n";
        }

        int main ()
        {
            int pil;
            int masuk;
            create();
            do {
                cout<<"\n==================================";
                cout<<"\nMenu antrian\n";
                cout<<"1. Enqueue\n";
                cout<<"2. Dequeue\n";
                cout<<"3. Tampil\n";
                cout<<"4. Clear\n";
                cout<<"5. Exit\n";
                cout<<"masukkan pilihan: "; cin>>pil;

                switch (pil)
                {
                case 1:
                    cout<<"\nData = ";
                    cin>>masuk;
                    enqueue(masuk);
                    break ;
                case 2:
                    cout<<"Elemen yang keluar : "<<Dequeue();
                    break;
                case 3:
                    tampil();
                    break;
                case 4:
                    clear();
                    break;
                case 5:
                	KeluarProgram();
                	return 0;
                	break;
                }
            }while(pil!=5);
}
