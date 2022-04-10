/* 
 * Use your preferred naming convention
 * Add comments to help others to understand your code and to document assumptions
 * You are welcome to add additional files if required
 */

#include <stdio.h>
#include <time.h>

void main(void)
{
    clock_t start = clock();                                                // Save function start time
    
    struct car                                                              // Structure variable representing a car from the .dat file
    {
        int Position_ID;
        char *Vehichle_Registration;
        float Latitude;
        float Longitude;
        unsigned long int UTC_Timestamp;
    };
    
    static struct car cars[2000000];                                        // Array to contain .dat file data

    clock_t end = clock();                                                  // Save function end time
    double total_time = (double)(end - start) / CLOCKS_PER_SEC;             // Convert from cycles to seconds
    printf("Execution Time: %f", total_time);
}
