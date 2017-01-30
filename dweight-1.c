// Author   : Andres Velandia
// Date     : 27-01-2017
// Goal     : Calculate the dimensional weight of a box with the dimensions 12 x 10 x 8

# include <stdio.h>

int main(void)
{
    
// Variables to be used

int height, length, width, volume, weight;

// Assign values to the variables

height = 8;
length = 12;
width = 10;

// Define formulas

volume = height * length * width;
weight = (volume + 165) / 166;

printf ("Dimensions: %d x %d x %d\n", length, width, height);
printf ("Volume (cubic cm): %d\n", volume);
printf ("Dimensional weight (kilos): %d\n", weight);

return 0;
}



