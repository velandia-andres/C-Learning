// Author   : Andres Velandia   
// Date     : 30-01-2017
// Goal     : To compute the dimensional weight of a box, from an input provided by the user.

# include <stdio.h>

int main (void)

{
    int height, length, width, volume, weight;
    
    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    
    volume = height * length * width;
    weight = (volume + 165) / 166;
    
    printf("Volume (cubic cm): %d\n", volume);
    printf("Dimensional weight (kilos): %d\n", weight);
    
    return 0;    
}