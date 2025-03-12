int main()
{
	char name[51];
	double num;
	char grade[3];
	double point;
	double total = 0.0;
	int totalnum=0;
	double avg = 0.0;

	for (int i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", name, &num, grade);
		if (grade[0] == 'P')
		{
			continue;
		}
		totalnum += num;
		if (grade[0] == 'A' )
		{
			point = 4;
		}
		else if (grade[0] == 'B')
		{
			point = 3;
		}
		else if (grade[0] == 'C')
		{
			point = 2;
		}
		else if(grade[0] == 'D')
		{
			point = 1;
		}
		else
		{
			point = 0;
		}
		if (grade[1] == '+')
		{
			point += 0.5;
		}

		total += num * point;
	}
	
	printf("%lf", total / totalnum);
	return 0;
}