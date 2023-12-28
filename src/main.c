// by zouari omar 1A11
// 12/27/2023
// EXAMEN PRATIQUE S1
                    /* include declaration part */
#include "../include/inc.h"
#include "../lib/lib.c"
                    /* main() int function dev code */
int main(int argc, char const *argv[]) {
    book books[100]; int lengthOfBooks = 0;                             // principal vars declaration part 
    loan loans[100]; int lengthOfLoans = 0;
    int id;
    // system("cls");
    while(1) {
        switch(menu()) {
            case 1:                                                     // option1Code
                system("cls");
                addBook(books, &lengthOfBooks);
                system("pause && cls"); break;
            case 2:
                system("cls");
                if(lengthOfBooks == 0) {
                    printf("%s%s%s", red, errorMsg03, def);
                    system("pause && cls"); break;
                } displayBooks(books, lengthOfBooks);
                system("pause && cls"); break;
            case 3:
                system("cls");
                if(lengthOfBooks == 0) {
                    printf("%s%s%s", red, errorMsg03, def);
                    system("pause && cls"); break;
                } addLoan(loans, &lengthOfLoans, books, lengthOfBooks);
                system("pause && cls"); break;
            case 4:
                system("cls");
                if(lengthOfLoans == 0) {
                    printf("%s%s%s", red, errorMsg03, def);
                    system("pause && cls"); break;
                }
                printf("%sThe Id Of The Loan...%s", yellow, def);
                scanf("%d", &id);           // warning: must be > 0 !
                returnLoan(id, loans, lengthOfLoans, books, lengthOfBooks);
                break;
            case 5:
                system("cls");
                if(lengthOfLoans == 0) {
                    printf("%s%s%s", red, errorMsg03, def);
                    system("pause && cls"); break;
                } DisplayReturnedLoans(loans, lengthOfLoans);
                system("pause && cls"); break;
            case 0:                                                     // exitCodeOption
                printf("%s\n\tSee You Next Time !\n\n%s", green, def);
                Sleep(3000); return EXIT_SUCCESS;
            default:                                                    // invalidOptionCode
                printf("%s%s%s", red, errorMsg01, def);
                system("pause && cls"); break;
        }
    }
}