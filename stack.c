#include "stack.h"

void createStack(Stack *s) {
    *s = NULL;
}

boolean is_StackEmpty(Stack s) {
    return (s == NULL);
}

void push(Stack *s, infotype X) {
    address PNew;
    Create_Node(&PNew);
    if (PNew != NULL) {
        Isi_Node(&PNew, X);
        Ins_Awal(s, PNew);
        printf("Nomor antrian %d telah ditambahkan.\n", X);
    } else {
        printf("Alokasi gagal!\n");
    }
}

int pop(Stack *s, infotype *X) {
    if (is_StackEmpty(*s)) {
        printf("Stack kosong!\n");
        return -1;
    }
    Del_Awal(s, X);
    printf("Nomor antrian %d sedang diproses.\n", *X);
    return 0;
}

void printStack(Stack s) {
    if (is_StackEmpty(s)) {
        printf("Stack kosong!\n");
        return;
    }
    printf("Stack saat ini: ");
    Tampil_List(s);
}
