#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*fizbuzz(int haute)
{
	char *res;

	res = malloc(sizeof (char *) * 1000);
	if (haute % 3 == 0)
	{
		res = strcat(res, "fiz");
	}
	if (haute % 5 == 0)
	{
		if (res && !strcmp(res, "fiz"))
		{
			res = strcat(res, "buz");
		}
		else
		{
			res = strcat(res, "buz");
		}
	}
	else if (haute % 3 != 0)
	{
		sprintf(res, "%i",haute);
	}
	return (res);
}

int		test_15(char **data)
{
	int i = 0;

	while (i < 16)
	{
		if(strcmp(fizbuzz(i + 1), data[i]))
		{
			printf("error at test %i: expected %s, result %s\n", i + 1, data[i], fizbuzz(i + 1));
		}
		else
		{
			printf("ok at test %i\n", i + 1);
		}
		i++;
	}

	return (0);
}

int		main()
{
	char **data;

	data = malloc(sizeof(char *) * 100);
	data[0] = "1";
	data[1] = "2";
	data[2] = "fiz";
	data[3] = "4";
	data[4] = "buz";
	data[5] = "fiz";
	data[6] = "7";
	data[7] = "8";
	data[8] = "fiz";
	data[9] = "buz";
	data[10] = "11";
	data[11] = "fiz";
	data[12] = "13";
	data[13] = "14";
	data[14] = "fizbuz";
	data[15] = "16";

	test_15(data);
	return (0);
}