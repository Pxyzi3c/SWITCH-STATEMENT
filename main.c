/*3.Write a program based on the given output below

PATIENT NO.:
PATIENT NAME:
DOCTOR'S FEE:
MISCELLANEOUS FEE:
ROOM CODE:
ROOM:
TOTAL BILL:*/

/*Programmer: HARVY JONES PONTILLAS DICT 1-2*/
#include <stdio.h>
#define p printf
#define s scanf

int main()
{   int ptntnum, roomcode;
    float docfee, miscefee, tbill;
    char ptntname[20], room[20];

    p("\n\n\tPATIENT NO.: ");
    s("%d",&ptntnum);
    p("\tPATIENT NAME: ");
    s("%s",&ptntname);
    p("\tDOCTOR'S FEE: ");
    s("%f",&docfee);
    p("\tMISCELLANEOUS FEE: ");
    s("%f",&miscefee);
    p("\tROOM CODE: ");
    s("%d",&roomcode);
    switch(roomcode){
    case 1:p("\tROOM: WARD");
           break;
    case 2:p("\tROOM: SEMI-WARD");
           break;
    case 3:p("\tROOM: PRIVATE");
           break;
    case 4:p("\tROOM: OUTPATIENT");
           break;
    default:p("\tINVALID INPUT");}

    tbill=docfee+miscefee;

    p("\n\tTOTAL BILL: %.2f",tbill);

    getch();
}
