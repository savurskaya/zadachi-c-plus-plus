//4 базовый ---- 8.35

#include <stdio.h>
 
int main()
{
    int n; //count
    int i;
    int s1 = 0;//average price auto
    int s2 = 0;//average price moto
    int x; //price
 
    printf("write count marks auto: ");
    scanf("%d", &n);
    
    printf("write price makrs auto: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x < 5001 || x < 1)
        {
            printf("Error. Repeat\n");
            i--;
            continue;
        }
        s1 += x;
    }
    s1 /= n;
 
 
    printf("write count marks moto: ");
    scanf("%d", &n);
    
    printf("write price makrs moto: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x > 4999 || x < 1)
        {
            printf("Error. Repeat\n");
            i--;
            continue;
        }
        s2 += x;
    }
    s2 /= n;
 
    if(s1 / (s2*3))
        printf("True. %d > %d that in 3", s1, s2);
    else
        printf("False. %d not > %d that in 3", s1, s2);
 
    return 0;
}