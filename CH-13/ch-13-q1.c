#include<stdio.h>
struct student {
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
	
};
void main(){
	int n,i;
	printf("Enter Number Of Student :");
	scanf("%d",&n);
	
	struct student s[n];
	for (i=0;i<n;i++)
	{
		system("cls");
		printf("Enter Student Name\t: ");
		scanf("%s",&s[i].name);
		printf("Enter Student Id\t: ");
		scanf("%d",&s[i].id);
		printf("Enter Student Age\t: ");
		scanf("%d",&s[i].age);
		printf("Enter Student Course\t: ");
		scanf("%s",&s[i].course);
		printf("Enter Student City\t: ");
		scanf("%s",&s[i].city);
		printf("Enter Student Std\t: ");
		scanf("%d",&s[i].std);
		printf("Enter Student School\t: ");
		scanf("%s",&s[i].school);
	}
	system("cls");
	printf("id\tname\tcourse\tstd\tschool\tage\tcity\n------- ------- ------- ------- ------- ------- -------\n");
	for (i=0;i<n;i++){
		printf("%d\t%s\t%s\t%d\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].course,s[i].std,s[i].school,s[i].age,s[i].city);
	}
}
