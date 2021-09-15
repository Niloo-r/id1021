//
//  main.c
//  Lab1
//
//  Created by Niloofar Rahmani on 2021-09-08.
//  Copyright © 2021 Niloofar Rahmani. All rights reserved.
//

//gcc ./main.c; ./a.out

#include <stdio.h>

//Metoden kommer att lägga character c på varenda ord (eller karaktär) som vi har tills det nås i slutet som är radbyte.
//Om det inte är radbyte än så fortsätter metoden att gå framåt. Detta är getchar som jobbar här.

//När det är i slutet och radbyte kommer putchar att göra sin grej. Vi börjar från där vi slutate och lägger alla karaktären. Ordet kommer då visas baklängs.

void reverseRecursive()
{
    char c = getchar();
    if (c != '\n')
        reverseRecursive();
    putchar(c);
}

//Jag har tagit en string med 5 karaktär som exempel. vi börjar från index 0 och fortsätter framåt så länge index är mindre 5.
//Så länge strängen inte är slut och valda karaktär (u) är true, använder vi getchar. och vi fortsätter tills vi når radbyte annars är u falskt.

//För att använda putchar metoden börjar vi från slutet av sträng och går baklängs.

void reverseIterative()
{
    char str[5];
    char c;
    int j = 0;
    char u =1;
    while (j < 5 && u ==1)
    {
        c = getchar();
        
        if (c != '\n')
        {
            str[j] = c;
            j++;
        }
        else
            u = 0;
    }
    for (int i = j - 1; i >= 0; i--)
        putchar (str [i]);
}

// main som skriver ut instruktioner och använder metoder

int main ()
{
    printf(" Write a word");
    reverseRecursive();
    printf (" '\n'\nWrite another word");
    reverseIterative();
    return 0;
}




