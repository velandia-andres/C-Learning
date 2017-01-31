// Author	: Andres Velandia
// Date		: 30-01-2017
// Goal		: Calculate the volume of a sphere

# include <stdio.h>

# define PI_CONSTANT 3.14f
# define FACTOR (4.0f / 3.0f)
# define RADIUS 10.0f

int main(void)

{
	float volume;
	
	volume = FACTOR * PI_CONSTANT * (RADIUS * RADIUS * RADIUS);
	
	printf ("The volume of a 10-meter radius sphere is:%.1f\n", volume);
	
	return 0;
}
	
	 
