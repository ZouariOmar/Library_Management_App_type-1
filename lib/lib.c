// by zouari omar 1A11
// 12/27/2023
// EXAMEN PRATIQUE S1
                    /* include declaration part */
#include "../include/inc.h"
                    /* functions dev code part */
int menu() {
    int choice;
    printf(
        "%s\n\t--- L I B R A R Y  M A N E G M E N T  A P P ---\n"
        "[1] Add A New Book.\n"
        "[2] Display All Books.\n"
        "[3] Add A New Loan.\n"
        "[4] Return A loan.\n"
        "[6] Return All The Returned Loan's.\n"
        "[0] Exit.\n...%s", cyan, def); scanf("%d", &choice);
    return choice;
}
void inputBook(book *bk) {
    while (1) {
        printf("%sCode Of The Book...%s", yellow, def);
        scanf("%d", &bk->code);
        if(bk->code >= 0) break;
        else printf("%s%s%s", red, errorMsg02, def);
    }
    while (1) {
        printf("%sNumber Of Copy(s)...%s", yellow, def);
        scanf("%d", &bk->nbrCpy);
        if(bk->nbrCpy >= 0) break;
        else printf("%s%s%s", red, errorMsg02, def);
    }
}
void fiendBook(book bks[], int lenBk, int code, int *pos) {
    // *pos = -1;
    for(int i = 0; i < lenBk && *pos == -1; i++) {
        if(bks[i].code == code) *pos = i;
    }
}
void addBook(book bks[], int *lenBk) {
    book bk; inputBook(&bk); int pos = -1;
    fiendBook(bks, *lenBk, bk.code, &pos);
    if(pos != -1) {
        bks[pos].nbrCpy += bk.nbrCpy;
        printf("%s\n\tWarning: The Number Of Copy(s) Has Been Changed !%s\n\n", yellow, def);
    } else {
        bks[(*lenBk)++] = bk;
        printf("%s\n\tBook Successfully Added !\n\n%s", green, def);
    }
}
void displayBooks(book bks[], int lenBk) {
    int i = 0;
    while(i < lenBk) {
        printf(
            "%sBook %d:\n"
            "Code................... %d\n"
            "Number Of Copy(s)...... %d\n.%s\n",
            bleu, i + 1, bks[i].code, bks[i].nbrCpy, def
            ); i++;
    }
}
void inputLoan(loan *ln) {
    printf("%sThe Number Of The Loan...%s", yellow, def);
    scanf("%d", &ln->id);
    printf("%sThe Code Of Book...%s", yellow, def);
    scanf("%d", &ln->bkCode);
    printf("%sThe Identification Of Subscription...%s", yellow, def);
    fflush(stdin); gets(ln->subId);
    ln->state = 0;
}
void addLoan(loan lns[], int *lenLn, book bks[], int lenBk) {
    loan ln; inputLoan(&ln); int i = 0, pos;
    fiendLoan(ln.id, lns, lenLn, &pos);
    while(i < lenBk) {
        if(pos == -1) {
            printf("%s%s%s", red, errorMsg04, def); break;
        }
        // rest of code...
    }
}
void fiendLoan(int id, loan lns[], int lenLn, int *pos) {
    // rest of code...
}
// test