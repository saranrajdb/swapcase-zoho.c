#include <stdio.h>
#include <string.h>
// normal method
//int main()
// {
//     char s[]={'z','o','H','O'};
//     for(int i=0;i<strlen(s);i++)
//     {
//         if(s[i]<91)
//         {
//             printf("%c",s[i]+32);
            
//         }
//         else
//         {
//             printf("%c",s[i]-32);
//         }
//     }
    
// }



int main()
{
    char s[]={'z','o','H','O'};
    for(int i=0;i<strlen(s);i++)
    {
         printf("%c",s[i]^32);
    }
    
}
