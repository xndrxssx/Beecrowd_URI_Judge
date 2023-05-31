#include <stdio.h>
#include <string.h>

int main(){
    char p1[12], p2[12], p3[12];

    scanf("%s", &p1);
    scanf("%s", &p2);
    scanf("%s", &p3);

    if (strcmp(p1, "vertebrado") == 0)
    {
        if (strcmp(p2, "ave") == 0)
        {
            if (strcmp(p3, "carnivoro") == 0) printf ("aguia\n");
            else printf ("pomba\n");
            
        }else
        {
            if (strcmp(p3, "onivoro") == 0) printf ("homem\n");
            else printf ("vaca\n");
        }
        
    } else{
        if (strcmp(p2, "inseto") == 0)
        {
            if (strcmp(p3, "hematofago") == 0) printf ("pulga\n");
            else printf ("lagarta\n");
        }
        else{
            if (strcmp(p3, "hematofago") == 0) printf ("sanguessuga\n");
            else printf ("minhoca\n");
        }
        
    }
    
}