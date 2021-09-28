#include <stdio.h>
#include <math.h>

int main()
{
    int RPM= 3000,SPM= 60, D= 360, DPS;
    // RPM- Revolution per Minute
    // SPM- Seconds per Minute 
    //D- Degree of the given object (Tire) 
    //DPS (°/s)- Degree per Seconds
    
    DPS= (RPM/SPM)*D;
    printf("The result is %d°/s.", DPS);

    return 0;
}
