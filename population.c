#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt for start size
    int ss;
    int es;
    int y;
    int b;
    int d;
    (do
      
         ss = get_int("Starting size: ")
      
        );

    while (ss < 9);
    //Prompt for Ending size
    (do
         es = get_int("Ending size:")
        );
    while (es <= ss);
    
// Calculate number of years until we reach threshold
    for (y = 0; ss < es; y++)

    {
        b = ss / 3;
        d = ss / 4;
        ss = ss + b - d;
    }



//Print number of years
    {
        printf("Years: %i\n", y);
    
    }
}
