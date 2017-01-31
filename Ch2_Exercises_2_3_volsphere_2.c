// Author	: Andres Velandia
// Date		: 30-01-2017
// Goal		: Calculate the volume of a sphere, given the value of the radius as user input.

# include <stdio.h>

# define PI_CONSTANT 3.14f
# define FACTOR (4.0f / 3.0f)

int main (void)

{
	float volume, radius;
	
	printf ("Enter the radius of a sphere:");
	scanf ("%f", &radius);
	
	volume = FACTOR * PI_CONSTANT * (radius * radius * radius);
	
	printf ("The volume of the sphere is:%.1f\n", volume);
	
	return 0;
}
