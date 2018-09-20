#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define G 6.67e-11

int main()
{
        float  	mass = 0, force = 0, acceleration = 0, radius2 = 0, height = 0, volume = 0, mass1 = 0, mass2 = 0, distance = 0,
               		force2 = 0e0, vin = 0, vout = 0, resis1 = 0, resis2 = 0, x1_distance = 0, x2_distance = 0, y1_distance = 0,
				y2_distance = 0, distance_points = 0, z = 0, x = 0, equation_general = 0;

        char	plaintext_character = 0, encoded_character = 0, equation_choice = 0;
        
        int 	exit_equation = 0, a = 0;

	while (exit_equation != 1)
	{
        
		printf ("Please select the equation (Newton's Second Law 'N', Volume of a Cylinder 'V', Character Encoding 'C', Gravity 'G', Resistive Divider 'R'\n"
				"Distance Between Two Points 'D', General Equation 'E': ");
		scanf (" %c", &equation_choice);
		
		switch (equation_choice)
		{
			
			case 'N':
				
				printf ("Please enter the mass and acceleration (both floating-point values) for use in Newtons Second Law: ");
        			scanf ("%f %f", &mass, &acceleration);

        			force = mass * acceleration;

        			printf ("Newtons Second Law: force = mass * acceleration = %f * %f = %f\n\n", mass, acceleration, force);

				break;

			case 'V':

        			printf ("Please enter the radius and height (both floating-point values) for use in a volume of cylinder equation: ");
        			scanf ("%f %f", &radius2, &height);

        			volume = PI * (radius2 *radius2) * height;

        			printf ("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = %f * %f^2 * %f = %f\n\n", PI, radius2, height, volume);

			case 'C':
				
        			printf ("Please enter one character for use in an character encoding formula: ");
        			scanf (" %c",  &plaintext_character);

        			encoded_character = (plaintext_character - 'a') + 'A';

        			printf ("encoded character = (plaintext_character - 'a') + 'A' = %c\n", encoded_character);

				break;

			case 'G':

        			printf ("Please the mass 1, mass 2 and distance (all floating-point values) for use in the gravitational force equation: ");
        			scanf ("%f %f %f", &mass1, &mass2, &distance);

        			force2 = (G * mass1 * mass2) / (distance * distance);

        			printf ("Gravity = G * mass1 * mass2 / distance^2 = (%e * %f * %f) / (%f * %f) = %e\n\n", G, mass1, mass2, distance, distance, force2);

				break;

			case 'R':

				printf ("Please enter resistance 1, resistance 2 and voltage in for a resistve divider formula: ");
				scanf ("%f %f %f", &resis1, &resis2, &vin);

				vout = ( ( resis2 ) / ( resis1 + resis2 ) ) * vin;

				printf ("vout = r2 / (r1 + r2) * vin = %f / (%f + %f) * %f = %f\n", resis2, resis1, resis2, vin, vout);

				break;
			
			case 'D':

				printf ("Please x1 and y1 and x2 and y2 to find distance between those two points: ");
				scanf ("%f %f %f %f", &x1_distance, &y1_distance, &x2_distance, &y2_distance);

				distance_points = sqrtf( ( ( x1_distance - x2_distance) * (x1_distance - x2_distance) ) +  
						( ( y1_distance - y2_distance) * (y1_distance - y2_distance) ) );
				
				printf ("distance = sqrt( (x1-x2)^2 + (y1-y2)^2 = sqrt( (%f-%f)^2 + (%f-%f)^2 = %f\n", x1_distance, x2_distance, y1_distance, y2_distance, distance_points);

				break;

			case 'E':

				printf("Please enter z, x and a for use in a general equation: ");
				scanf (" %f %f %d", &z, &x, &a);

				equation_general = ( ( (float) 89 /  27) - ( z * x) + ( a / (a % 2) ) );

				printf ("y = (89 / 27) - z * x + a / a %% 2 = (89 /27) - %f * %f + %d / %d %% 2 = %f\n", z, x, a, a, equation_general);

				break;
			
			default:

				printf ("%c is not a valid option. Remeber the letter must be capital!\n", equation_choice);
				return 0;



		}


		printf ("Please press 'S' to stop or 'C' to continue: ");
		scanf (" %c", &equation_choice);

		if (equation_choice == 'S')
			exit_equation = 1;
			
	}
        


        return 0;
}



