/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
int isOlder(char *dob1, char *dob2)
{
	int day1, month1, year1;
	int day2, month2, year2;


	day1 = dob1[1] + (dob1[0]) * 10;
	month1 = dob1[4] - '0' + (dob1[3] - '0') * 10;
	year1 = (dob1[6] - '0') * 1000 + (dob1[7] - '0') * 100 + (dob1[8] - '0') * 10 + dob1[9] - '0';


    day2 = dob2[1] + (dob2[0]) * 10;
	month2 = dob2[4] - '0' + (dob2[3] - '0') * 10;
	year2 = (dob2[6] - '0') * 1000 + (dob2[7] - '0') * 100 + (dob2[8] - '0') * 10 + dob2[9] - '0';

	
	// If date contains any alphabets 
	if ((dob1[4] >= 'a'&& dob1[4] <= 'z') || (dob1[4] >= 'A' && dob1[4] <= 'Z'))
	{
		return -1;
	}
	//month check
	if (month1 > 12 || month2 > 12)
	{
		return -1;
	}

	/* leap year check */
	if ((month1 == 2) && (day1 > 28))
	{
		if (((year1 % 4 == 0) && (year1 % 100 != 0)) || (year1 % 400 == 0))
		{
			// do nothing 
		}
		else
		{
			return -1;
		}
	}
    // Checking for valid input 
	if (dob1[2] != '-' || dob2[2] != '-' || dob1[5] != '-' || dob2[5] != '-')
	{
		return -1;
	}


	// Equal  Cases
	
	if (day1 == day2 && month1 == month2 && year1 == year2)
	{
		return 0;
	}

	// Elder Cases  

    if (year1 < year2)
	{
		return 1;
	}
	else if (year1 > year2)
	{
		return 2;
	}
	else
	{
		if (month1 < month2)
		{
			return 1;
		}
		else if (month1 > month2)
		{
			return 2;
		}
		else
		{
			if (day1 < day2)
			{
				return 1;
			}
			else{
				return 2;
			}


		}
	}
}