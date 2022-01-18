/*  Name:		Brady Barlow	*/
/*  Date:		03/23/21		*/
/*  Today:		Tuesday			*/
/*  Assignment:	Homework_7		*/

#include <stdio.h>
#include <math.h>

int main (void)
{

    /* Declare variables */

    double A[5]={1.50, 1.24, 2.00, -5.20, 0.96};
    double B[5]={0.25, -3.30, 1.40, 0.00, -5.70};
    double max, min, dot;
    int i, choice, n;
    char ans, sub;
    printf("A={1.50, 1.24, 2.00, -5.20, 0.96}\n");
    printf("B={0.25, -3.30, 1.40, 0.00, -5.70}\n");
    int sizeA = sizeof(A)/sizeof(double);
    int sizeB = sizeof(B)/sizeof(double);

    /* Output */

    do {
        printf("\nPlease choose a process :\n");
        printf("1. Max value and min value of A\n");
        printf("2. Max value and min value of B\n");
        printf("3. Dot product of A and B\n");
        printf("4. The value of a known subscript\n");
        printf("5. Exit\n");
        printf("Your choice : ");
        scanf("%d",&choice);
        if (choice > 5 || choice < 1){
            choice = 6;
        }
        switch (choice) {
            case 1:
                max = 0;
                min = 0;
                for (i = 0; i < sizeA; i++){
                    if (A[i] > max){
                        max = A[i];
                    }
                    if (A[i] < min){
                        min = A[i];
                    }
                }
                printf("Max value of A is %.2lf\n",max);
                printf("Min value of A is %.2lf\n",min);
                printf("Do you want another process (Y/N)?");
                scanf(" %c",&ans);
                break;
            case 2:
                max = 0;
                min = 0;
                for (i = 0; i < sizeB; i++){
                    if (B[i] > max){
                        max = B[i];
                    }
                    if (B[i] < min){
                        min = B[i];
                    }
                }
                printf("Max value of B is %.2lf\n",max);
                printf("Min value of B is %.2lf\n",min);
                printf("Do you want another process (Y/N)?");
                scanf(" %c",&ans);
                break;
            case 3:
                dot = 0;
                for (i = 0; (i < sizeA) && (i < sizeB); i++){
                   dot += A[i] * B[i];
                }
                printf("Dot product of A and B is %.2lf\n",dot);
                printf("Do you want another process (Y/N)?");
                scanf(" %c",&ans);
                break;
            case 4:
                printf("Which vector (A or B) ? ");
                scanf(" %c",&sub);
                if (sub != 'A' && sub != 'a' && sub != 'B' && sub != 'b'){
                    do {
                        printf("Please choose A or B : ");
                        scanf(" %c", &sub);
                    }while (sub != 'A' && sub != 'a' && sub != 'B' && sub != 'b');
                }
                if (sub == 'A' || sub == 'a') {
                    do {
                        printf("Enter subscript (0-4): ");
                        scanf("%d", &n);
                    } while ((n < 0) || (n > 4));
                    printf("A[%d] = %.2lf\n", n, A[n]);
                    printf("Do you want another process (Y/N)?");
                    scanf(" %c", &ans);
                    break;
                }
                if (sub == 'B' || sub == 'b') {
                    do {
                        printf("Enter subscript (0-4): ");
                        scanf("%d", &n);
                    } while ((n < 0) || (n > 4));
                    printf("B[%d] = %.2lf\n", n, B[n]);
                    printf("Do you want another process (Y/N)?");
                    scanf(" %c", &ans);
                    break;
                }
            case 5:
                ans = 'N';
                printf("BYE!");
                break;
            case 6:
                printf("Not a Choice\n");
                printf("Do you want another process (Y/N)?");
                scanf(" %c", &ans);
                break;
        }
    } while ((ans == 'Y'|| ans == 'y') && (ans != 'N' || ans != 'n'));
    return 0;
}
