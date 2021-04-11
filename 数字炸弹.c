#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    srand(time(NULL));
    int num,input,max=0,min=100;
    num=rand()%11
    printf("%s","数字炸弹：0-100");
    bool l=false;
	for(int i=0;i<20;i++)
    {
    	scanf("%d",&input);
    	if(input<num)
    	{
    		min=input;
    		printf("%d%s%d",min,"-",max);
		}
		if(input>num)
    	{
    		max=input;
    		printf("%d%s%d",min,"-",max);
		}
		if(input=num)
		{
			l=true;
			printf("%s","恭喜，你输了！");
		}
	}
	if(!l) printf("%s\n","你赢了！")
} 
