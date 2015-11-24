#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int num=67,i,j;
	int nums[100];
	int conts[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	for(i=0;i<100;i++)
	{
		nums[i]=64;
	}
	
	for(i=0;i<100;++i)
	{
		num = (rand())%11;
		printf("%d\n",num);
		nums[i]=num;
	}
	
	for(i=0;i<100;++i)
	{
		if(nums[i]==0)
		{
			conts[0]++;
		}else
		{
			if(nums[i]==1)
			{
				conts[1]++;
			}else
			{
				if(nums[i]==2)
				{
					conts[2]++;
				}else
				{
					if(nums[i]==3)
					{
						conts[3]++;
					}else
					{
						if(nums[i]=4)
						{
							conts[4]++;
						}else
						{
							if(nums[i]==5)
							{
								conts[5]++;
							}else
							{
								if(nums[i]==6)
								{
									conts[6]++;
								}else
								{
									if(nums[i]==7)
									{
										conts[7]++;
									}else
									{
										if(nums[i]==8)
										{
											conts[8]++;
										}else
										{
											if(nums[i]==9)
											{
												conts[9]++;
											}else
											{
												if(nums[i]=10)
												{
													conts[10]++;
												}
											}
										}
									}
								}
							}
							
						}
					}
				}
			}
		}
	}
	
	for(i=0;i<11;++i)
	{
		printf("Numero: %d   Cantidad:  %d",i,conts[i]);
		printf("\n");
	}
	
	
	
	return 0;
}
