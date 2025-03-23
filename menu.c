#include "menu.h"

void MainMenu() {
    system("cls");
    Queue q;
    Stack s1;
    Stack s2;
    int choice, temp;

    CreateQueue(&q);
    createStack(&s1);
    createStack(&s2);

    while (1) {
        system("cls");
        printf("\n====== Customer Service =======:\n");
        printf("1. Buat Antrian Tiket\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                subMenu(&q, &s1, &s2, &temp); 
                break;
            case 2:
                system("cls");
                if (s2 != NULL){
                	printf("Proses Aduan Darurat :\n");
                	pop(&s2, &temp); 
				}
				else if(s1 != NULL){
					printf("Proses Aduan VIP :\n");
                	pop(&s1, &temp);
				}
				else {
					printf("Proses Aduan Reguler :\n");
                	dequeue(&q, &temp); 
				}
                break;
            case 3:
                system("cls");
                printf("Aduan Reguler (Queue) :\n");
                printQueue(q); 
                printf("Aduan Darurat :\n");
                printStack(s2); 
                printf("Aduan VIP :\n");
                printStack(s1); 
                break;
            case 4:
                return; 
            default:
                printf("Pilihan tidak valid!\n");
        }
        printf("\nTekan Enter untuk melanjutkan...");
        getchar(); 
        getchar();
    }
}
