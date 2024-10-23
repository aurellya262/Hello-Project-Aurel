#ifndef SLL_H
#define SLL_H

//Komentar untuk tugas

typedef struct {
    char name[100];  // Nama peserta
    char team[100];  // Nama tim
    int score;       // Skor
} infotype;

typedef struct elmtList *adr;
typedef struct elmtList {
    infotype info;
    adr next;
} elmList;

typedef struct {
    adr First;
} List;

#endif
