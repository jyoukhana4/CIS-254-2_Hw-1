The total mass required to launch a spaceship into outer space must also account for the mass of its fuel

To find the total amount of total mass required for liftoff, the mass of fuel required to launch is calculated as follows:

Divide spaceship mass by five, truncate the division result, and subtract 22
For an example mass of 2020 units:

The mass of fuel required is (2020 / 5) - 22 = 382 units
The total mass required to launch is 2020 + 382 = 2,402 units
For an example mass of 142756 units:
The mass of fuel required is (142756 / 5) - 22 = 28529 units
The total mass required to launch is 142756 + 28529 = 171,285 units
Using this formula, small values for spaceship mass can give negative results for extra fuel requirements
If this occurs, then the extra fuel required for launch is 0

For an example mass of 30 units:
The mass of fuel required is (30 / 5) - 22 = -16 units
The total mass required to launch is 30 + 0 = 30 units
This formula must be calculated using a function:

Input parameter is the integer value of mass of the spaceship
Output value is the integer value of the total mass required to launch
The program continues until the sentinel value of -1 is entered by the user

Your output should look similar if not identical to what you see here below:

Enter mass for spaceship [-1 to quit]: 2020
Total fuel required to launch: 2402

Enter mass for spaceship [-1 to quit]: 142756
Total fuel required to launch: 171285

Enter mass for spaceship [-1 to quit]: 30
Total fuel required to launch: 30

Enter mass for spaceship [-1 to quit]: -1
