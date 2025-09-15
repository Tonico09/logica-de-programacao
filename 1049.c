#include <stdio.h>


int igual(char s1[], char s2[]) 
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') 
    {
        if (s1[i] != s2[i]) 
        {
            return 1;  
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') 
    {
        return 0; 
    }
    return 1;  
}

int main() {
    char p1[20], p2[20], p3[20];
    
    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);
    
    if (igual(p1, "vertebrado") == 0)
    {
        if (igual(p2, "ave") == 0) 
        {
            if (igual(p3, "carnivoro") == 0) 
            {
                printf("aguia\n");
            } else 
            {  
                printf("pomba\n");
            }
        } else
        {  
            if (igual(p3, "onivoro") == 0) 
            {
                printf("homem\n");
            } else
            {  
                printf("vaca\n");
            }
        }
    } else
    {  
        if (igual(p2, "inseto") == 0) 
        {
            if (igual(p3, "hematofago") == 0) 
            {
                printf("pulga\n");
            } else 
            { 
                printf("lagarta\n");
            }
        } else
        {  
            if (igual(p3, "hematofago") == 0) 
            {
                printf("sanguessuga\n");
            } else { 
                printf("minhoca\n");
            }
        }
    }
    
    return 0;
}
