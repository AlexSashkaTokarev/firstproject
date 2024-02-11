#include <stdio.h>
#include <stdlib.h>

int main()
{

    int input;
    int output;
    int status;

    status = 1;

    double inp;
    while(1)
    {
        do {
            fflush(stdin);
            printf("Input X: ");
            scanf("%lf", &inp);
            input = (int) inp;
            if(inp - input > 0)
                input = 5;
                continue;
        }while(input != 1 && input != 2 && input != 3 && input != 0);
        if (input == 0)
        {
            printf("\nBye :)");
            break;
        }
        output = change_output(input, status);
        status = change_status(input, status);

        printf("Output = %d\n", output);
        printf("Status = %d\n", status);
    }

    return 0;
}

int change_output(int input, int status)
{
    if (input == 1)
    {
        if(status == 1)
            return 3;
        if(status == 2)
            return 2;
        if(status == 3)
            return 1;
        if(status == 4)
            return 4;
    }
    else if (input == 2)
    {
        if(status == 1)
            return 2;
        if(status == 2)
            return 4;
        if(status == 3)
            return 1;
        if(status == 4)
            return 3;
    }
    else
    {
        if(status == 1)
            return 4;
        if(status == 2)
            return 2;
        if(status == 3)
            return 3;
        if(status == 4)
            return 1;
    }
}


int change_status(int input, int status)
{
    if (input == 1)
    {
        if(status == 1)
            return 2;
        if(status == 2)
            return 4;
        if(status == 3)
            return 1;
        if(status == 4)
            return 3;
    }
    else if (input == 2)
    {
        if(status == 1)
            return 4;
        if(status == 2)
            return 2;
        if(status == 3)
            return 3;
        if(status == 4)
            return 1;
    }
        else
    {
        if(status == 1)
            return 3;
        if(status == 2)
            return 4;
        if(status == 3)
            return 1;
        if(status == 4)
            return 2;
    }
}
