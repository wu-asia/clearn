#include <stdio.h>

int main() 
{

    int doer;
    for (doer = 0; doer < 4; doer++) 
    {

        int statement_A, statement_B, statement_C, statement_D;

        statement_A = (doer != 0);

        statement_B = (doer == 2);

        statement_C = (doer == 3);

        statement_D = (doer != 3);


        int true_count = statement_A + statement_B + statement_C + statement_D;


        if (true_count == 3) 
        {
            switch (doer) 
            {
            case 0:
                printf("做好事的人是A\n");
                break;
            case 1:
                printf("做好事的人是B\n");
                break;
            case 2:
                printf("做好事的人是C\n");
                break;
            case 3:
                printf("做好事的人是D\n");
                break;
            }
            break;
        }
    }

    return 0;
}