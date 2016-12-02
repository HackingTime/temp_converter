#import <stdio.h>
#include <stdlib.h>


#define FRZPT 32.0f
#define SCLFACT (5.0f/9.0f)


int
main(int argc, char *argv[])
{
float celc;
int fahr;
if (argc < 2){
//if no value is specified
        printf("Usage: %s [fahrenheit]\n",argv[0]);
        exit(1);

        }

fahr = atoi(argv[1]);

printf ("fahrenheit = %d\n",fahr);
//make calc
celc = ((fahr - FRZPT) * SCLFACT);
//print output
printf ("Celcius:%.1f\n",celc);



}


