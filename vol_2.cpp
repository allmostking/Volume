#include<stdio.h>

struct school{
	int roll_no;
	char name[100];
	float chem_marks,maths_marks,phy_marks;
};

main()
{
	struct school s[100];
	int i,n;
	float sum;
	printf("How many data you want to enter=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter your student roll_no=");
		scanf("%d",&s[i].roll_no);
		printf("Enter your student name=");
		scanf("%s",&s[i].name);
		printf("Enter your student chem_marks=");
		scanf("%f",&s[i].chem_marks);
		printf("Enter your student maths_marks=");
		scanf("%f",&s[i].maths_marks);
		printf("Enter your student phy_marks=");
		scanf("%f",&s[i].phy_marks);
		
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("Student roll no= %d\n",s[i].roll_no);
		printf("Student name= %s\n",s[i].name);
		sum=(s[i].phy_marks+s[i].maths_marks+s[i].chem_marks)/3;
		printf("Total marks=%.2f\n",sum);
		
	}
	
	
	
}
