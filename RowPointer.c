//Row Pointer / Pointer to Array
#include<stdio.h>
void display(int (*p)[2],int row,int col) // p has the capacity to store address representing 2 elements , [2] is the number of columns
{
	int i,j;
	int *q;
	for(i=0;i<row;i++)
	{
		q=(int *)(p+i); // using (int *) to go to 3rd adress of 2000
		for(j=0;j<col;j++)
		{
			printf("%d\t",*(q+j)); // 2000 3rd wala
		}
		printf("\n");						
	}
}
void main()
{
	int a[2][2]={50,60,70,80};
	display(a,2,2); // (2000) 2nd wala
}
