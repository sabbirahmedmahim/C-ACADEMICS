// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while (i <= 10)
//         ;
//     {
//         printf("\n%d", i);
//         i++;
//     }

//     return 0;
// }
// // #include <stdio.h>
// int main()
// {
//     int x = 1;
//     while (x == 1)
//     {
//         x = x - 1;
//         printf("\n%d", x);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 10;
//     while (i == 20)
//     {

//         printf("\nA computer buff!");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 1;
//     while (x == 1)
//     {
//         x = x - 1;
//         printf("\n%d", x);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 4,y=0,z;
//     while (x >=0)
//     {
//         x --;
//         y++;
//         if(x==y) continue;
//         else printf("\n%d %d",x,y);

//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        if (x == y)
            break;
        else printf("\n%d %d", x,y);
        x--;
        y++;
    }

    return 0;
}
