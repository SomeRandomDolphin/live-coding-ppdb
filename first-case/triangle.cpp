#include<bits/stdc++.h>
using namespace std;

int main()
{
	int input;
	scanf("%d", &input);
	
	int ascii = 96;
	int counter = -1;
	for(int a = 1; a <= input; a++)
	{
		for(int b = 1; b <= a; b++)
		{
			if(counter > 26)
			{
				counter = -1;
			}
			
			if(counter < 1)
			{
				printf("a");
			}
			else if(a == input && b == a)
			{
				printf("+");
			}
			else
			{
				char output = char(counter + ascii);
				printf("%c", output);
			}
			counter++;
		}
		printf("\n");
	}
}