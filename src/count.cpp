/*
OVERVIEW:  Given 2 integers (num1, num2), write a function that returns the count of numbers between the num1..num2 that are divisible by num1.
		E.g.: count(3, 15) returns 5 (3, 6, 9, 12, 15).

INPUTS:  Two numbers num1, num2.
		num1, num2 >= 0.

OUTPUT: Return the count of numbers between the num1..num2 that are divisible by num1.

ERROR CASES: Return -1 in error cases.

NOTES:
*/
int count(int num1, int num2) 
{
	if (num1 == 0)
	{
		return -1;
	}
	else if (num2 == 0)
	{
		return 0;
	}
	else if (num1 > num2 )
	{
		return 0;
		
	}
	else if (num1==1)
	{
		int c=1, n = num1,i;
		
		for (i = num1; i < num2; i = i + num1)
		{
		
				c = c + 1;
			
		}
		return c;
	}
	else
	{
			int c = 0, n = num1, i;

			for (i = num1; i <= num2; i = i + num1)
			{
				
				
					c = c + 1;
				
			}
			return c;
		
	}
}

	