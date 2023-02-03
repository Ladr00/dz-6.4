#include<stdio.h>
#include<string.h>

main()
{
    char str [100];
    int i = 0;
 
    printf ("vvod frazy: \n");
    gets (str);

    for (int z = 0; z < strlen (str); z++)
    {
        str [z] = str [z + 1];
    }
    printf ("delete 1 simvol: \n");
    puts (str);
    
    char strmir [100];

    for (int m = strlen (str); m > 0; m--)
    {
        strmir [strlen (str) - m] = str [ m - 1];       
    }
    strmir [strlen (str)] = str [strlen (str)];
    printf ("zerkalo : \n");
    puts (strmir);
}
