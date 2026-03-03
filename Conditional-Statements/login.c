#include <stdio.h>
int main()
{
    int logstatus, admin;
    int security;
    printf("enter 1 if logged in else enter 0\n");
    scanf("%d", &logstatus);
    printf("enter 1 if you are an admin else enter 0\n");
    scanf("%d", &admin);
    printf("enter your security level\n");
    scanf("%d", &security);
    if (logstatus == 1)
    {
        if (admin == 1 || security <= 2)
        {
            printf("Access granted");
        }
        else
        {
            printf("Access denied");
        }
    }
    else
    {
        printf("you are logged out");
    }

    return 0;
}