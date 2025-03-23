#include "subMenu.h"

void subMenu(Queue *q, Stack *s1, Stack *s2, int *temp) {
    system("cls");
    int choice, counter = 1;

    while (1) {
        printf("\n====== Pilih Jenis Tiket Aduan =======:\n");
        printf("1. Aduan Reguler (Queue)\n");
        printf("2. Aduan Darurat (Stack)\n");
        printf("3. Aduan VIP (Stack)\n");
        printf("4. Kembali\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                enqueue(q, counter++); 
                break;
            case 2:
                system("cls");
                push(s2, counter++); 
                break;
            case 3:
                system("cls");
                push(s1, counter++); 
                break;
            case 4:
                return; 
            default:
                printf("Pilihan tidak valid!\n");
        }
    }
}
