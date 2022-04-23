#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int time,days,hours,minutes,seconds;
    scanf("%d",&time);
    days=time/86400;
    hours=time/3600;
    hours = hours- 24*days;
    minutes=time/60;
    minutes= minutes- 1440*days - 60*hours;
    seconds=time%60;
    
    printf("The Duration is %d days %d hours %d minutes %d seconds", days,hours,minutes,seconds);
    return 0;
}
