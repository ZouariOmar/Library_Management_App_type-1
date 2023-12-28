// by zouari omar 1A11
// 12/27/2023
// EXAMEN PRATIQUE S1
#ifndef __INC_H__
#define __INC_H__
                    /* include declaration part */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
                    /* COLORS declaration part */
#define red "\x1B[1;31m"
#define green "\x1B[1;32m"
#define yellow "\x1B[1;33m"
#define bleu "\x1B[1;34m"
#define cyan "\x1B[1;36m"
#define def "\x1B[0m"
                    /* MSG declaration part */
#define errorMsg01 "\n\tError: Invalid Option !\n\n"
#define errorMsg02 "\n\tError: You Must Enter A Number >= 0 !\n\n"                
#define errorMsg03 "\n\tError: No Data Found !\n\n"
#define errorMsg04 "\n\tError: This Loan Is Already Exist !\n\n"
                    /* struct declaration part */
typedef struct {
    int code;
    int nbrCpy;
} book;
typedef struct {
    int id;             // id must be unique
    int bkCode;
    char subId[21];
    int state;
} loan;
                    /* functions declaration part */
int menu();                                                         // menu() int func
void inputBook(book *bk);                                           // inputBook() void func > addBook()
void fiendBook(book bks[], int lenBk, int code, int *pos);          // fiendBook() void func
void addBook(book bks[], int *lenBk);                               // addBook() void func > addBook()
void displayBooks(book bks[], int lenBk);                           // displayBooks() void func
void inputLoan(loan *ln);                                           // inputLoan() void func
void fiendLoan(int id, loan lns[], int lenLn, int *pos);            // fiendLoan() void func
void addLoan(loan lns[], int *lenLn, book bks[], int lenBk);        // addLoan() void func








#endif