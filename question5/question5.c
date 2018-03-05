#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#define MAXLENGTH 100


struct dates{
	int year;
	int month;
	int day;
};

struct data{
	struct dates dates;
	float delta;
	float Bitcoin;
};

int getdata(float c[MAXLENGTH][MAXLENGTH], struct data d[], int debug)
{
	char placeholder[MAXLENGTH];
	int placeholder_char;
	float placeholder_num;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	if(debug)
		printf("Date format:Month/Day/Year\n");
	
	while((placeholder_char = getchar()) !=EOF)
	{
		if(placeholder_char == ' ' || placeholder_char == '\n')
		{
			if(j == 1)
			{
				placeholder_num = atoi(placeholder);
				if(placeholder_num > 31)
				{
					printf("Day too large");
					return -1;
				}
				//printf("\nPlaceholder:%.2f", placeholder_num);
				d[i].dates.day = placeholder_num;
				if(debug)
				{
					printf("\n\nDEBUG:Day:%d\n", d[i].dates.day);
					printf("\n\n%d/", d[i].dates.day);
				}
			}
			else if(j == 0)
			{
				placeholder_num = atoi(placeholder);
				if(placeholder_num > 12 || placeholder_num < 1)
				{
					printf("\nMonth not between 1 and 12");
					return -1;
				}
				d[i].dates.month = placeholder_num;
				if(debug)
				{
					printf("\nDEBUG:Month:%d\n", d[i].dates.month);
					printf("%d/", d[i].dates.month);
				}
			}
			else if(j == 2)
			{
				placeholder_num = atoi(placeholder);
				d[i].dates.year = placeholder_num;
				if(debug)
				{
					printf("\nDEBUG:Year:%d\n", d[i].dates.year);
					printf("%d", d[i].dates.year);
				}
			}
			else if(j == 3)
			{
				placeholder_num = atof(placeholder);
				d[i].Bitcoin = placeholder_num;
				if(debug)
				{
					printf("\nDEBUG:Bitcoin Price:%.2f$\n", d[i].Bitcoin);
					printf("\nBitcoin Price:%.2f$", d[i].Bitcoin);
				}
			}
			else if(j == 4)
			{
				printf("\n\nERROR TOO MUCH DATA PER DAY, DATA PER DAY SHOULD BE MONTH DAY YEAR PRICE\n\n");
				return -1;
			}
			if(debug)
			{	
				c[i][j] = atof(placeholder);
				printf("\n%.2f ", c[i][j]);
			}
			if(placeholder_char == ' ')
			{	
				j++;
				printf(" ");
			}
			else if(placeholder_char == '\n')
			{
				if(debug)
					printf("\nNEWLINE\n");
				i++;
				j = 0;
			}
			for(k = 0; placeholder[k] != '\0'; k++)
				placeholder[k] = '\0';
			k = 0;
			if(debug)
				printf("\nPlacehodder3:|%s|\n", placeholder);
		}
		else
		{
			placeholder[k] = placeholder_char;
			k++;
			if(debug)
				printf("\nPlaceholder:|%s|\n", placeholder);
		}
	}
	placeholder_num = atof(placeholder);
	d[i].Bitcoin = placeholder_num;;
	if(debug)
		printf("\nBitcoin price:%.2f$", d[i].Bitcoin);
	return i;//#of days;
}

int delta(int num_dates, struct data d[])
{
	int i;
	for(i = 0; i < num_dates; i++)
	{
		d[i+1].delta = (d[i+1].Bitcoin - d[i].Bitcoin)/d[i].Bitcoin;
		//printf("%.2f - %.2f / %.2f = %f\n", d[i+1].Bitcoin, d[i].Bitcoin, d[i].Bitcoin, d[i+1].delta);
	}
	return 0;
}

int largestdelta(int num_dates, struct data d[])
{
	int i;
	float highest;
	int highest_pos;
	for(i = 0; i < (num_dates + 1); i++)
	{
		if(i == 0)
		{
			highest = fabs(d[i].delta);
		}
		if(fabs(d[i].delta) > highest)
		{
			highest = fabs(d[i].delta);
			highest_pos = i;
		}
	}
	return highest_pos;
}

int highest(struct data data[], int amountofdata)
{
	float highest = 0;
	int i, posofhighest;
	for(i = 0; i < amountofdata; i++)
	{
		if(data[i].Bitcoin > highest)
		{
			highest = abs(data[i].Bitcoin);
			posofhighest = i;
		}
	}
	return posofhighest;
}

int lowest(struct data data[], int amountofdata, int debug)
{
	float lowest;
	int i, posoflowest;
	for(i = 0; i < amountofdata; i++)
	{
		if(i == 0)
		{
			lowest = data[i].Bitcoin;
			posoflowest = i;
		}
		//must set to a value that exists in data of else possible
		//that value preset lowest and wont find lowest price
		if(data[i].Bitcoin < lowest)
		{
			lowest = data[i].Bitcoin;
			posoflowest = i;
		}
	}
	return posoflowest;
}

float avg(struct data data[], int amountofdata, int debug)
{
	int i;
	float placeholder_num = 0;
	for(i = 0; i < amountofdata; i++)
	{
		placeholder_num += data[i].Bitcoin;
	}
	placeholder_num = placeholder_num / amountofdata;
	return placeholder_num;
}

int main(int argc, char *argv[])
{
	if(argc > 1)
		argc = 1;
	else
		argc = 0;
	struct data coinprice[MAXLENGTH]; 
	struct data sort[MAXLENGTH];
	int i;
	int j;
	int num_data;
	float data_array_debug[MAXLENGTH][MAXLENGTH];
	//used for debugging
	num_data = getdata(data_array_debug, coinprice, argc);
	if(num_data == -1)
		return -1;
	printf("\n\nThe average price over this time period was %f$",avg(coinprice, num_data, argc));
		i = highest(coinprice, num_data);
	printf("\nThe highest price of bitcoin was %f$ at %d/%d/%d", coinprice[i].Bitcoin,
		coinprice[i].dates.month, coinprice[i].dates.day, coinprice[i].dates.year);
	i = lowest(coinprice, num_data, argc);
	printf("\nThe lowest price of bitcoin was %f$ at %d/%d/%d\n\n", coinprice[i].Bitcoin,
		coinprice[i].dates.month, coinprice[i].dates.day, coinprice[i].dates.year);
	delta(num_data, coinprice);
	for(i = 1; i < num_data+1; i++)
	{
		printf("\nChange from %d/%d/%d to %d/%d/%d:   %f  OR   %f%%", 
			coinprice[i-1].dates.month, coinprice[i-1].dates.day, coinprice[i-1].dates.year,
			coinprice[i].dates.month, coinprice[i].dates.day, coinprice[i].dates.year,
				coinprice[i].delta, coinprice[i].delta*100);
	}
	i = largestdelta(num_data, coinprice);
	printf("\n\nLargest delta at %d/%d/%d w/ value of:	 %f or %f%%\n", 
		coinprice[i].dates.month, coinprice[i].dates.day, coinprice[i].dates.year,
		coinprice[i].delta, coinprice[i].delta*100);
	i = highest(coinprice, num_data);
	return 0;
}