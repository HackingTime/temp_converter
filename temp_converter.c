#import <stdio.h>

#define FRZPT 32.0f
#define SCLFACT (5.0f/9.0f)

int main(int argc, char *argv[])
{
float celc;
float fahr;
fahr = atoi{argv[1]};
pritnf("argv = %d",fahr);
celc = (fahr - FRZPT) * SCLFACT;
printf("Celcius:%.1f\n",celc);



}
