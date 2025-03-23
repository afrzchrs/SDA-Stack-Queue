#include "queue.h"

void CreateQueue(Queue *Q) {
    *Q = NULL;
}

boolean is_QueueEmpty(Queue Q) {
    return (Q == NULL);
}

void enqueue(Queue *q, infotype X) {
    address PNew;
    Create_Node(&PNew);
    if (PNew != NULL) {
        Isi_Node(&PNew, X);
        if (is_QueueEmpty(*q)) {
            *q = PNew;
        } else {
            address temp = *q;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = PNew;
        }
        printf("Nomor antrian %d telah ditambahkan.\n", X);
    } else {
        printf("Alokasi gagal!\n");
    }
}

void dequeue(Queue *q, infotype *X) {
    if (is_QueueEmpty(*q)) {
        printf("Queue kosong!\n");
        return;
    }
    Del_Awal(q, X);
    printf("Nomor antrian %d sedang diproses.\n", *X);
}

void printQueue(Queue q) {
    if (is_QueueEmpty(q)) {
        printf("Queue kosong!\n");
        return;
    }
    printf("Queue saat ini: ");
    Tampil_List(q);
}
