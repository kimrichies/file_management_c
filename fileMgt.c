//0701437989
//rkimera@must.ac.ug
//kimrichies@gmail.com
//twitter: @kimrichies
//getaplot: @kimrichies

#include <stdio.h>

struct details{
char fname [10];
char lname [10];
int age;
};

void student ();

FILE *fp;

int main(){	
struct details my;
	
	fp = fopen("peem.doc", "a+");
	
	student ();
	
	fclose(fp);
	return 0;
}

void student (){
fprintf(stdout,"Enter the First Name\n");
	fscanf(stdin,"%s", my.fname);
	
	char myName [10];
	printf("Enter the last name");
	scanf("%s", myName);
	printf("Your name is %s", myName);
	
	fprintf(stdout,"Enter the Last Name\n");
	fscanf(stdin,"%s", my.lname);

	fprintf(fp,"First Name: %s\n",my.fname);
	fprintf(fp,"Last Name: %s\n",my.lname);
	
	fprintf(stdout,"Enter your age\n");
	fscanf(stdin,"%d", &my.age);
		if (my.age >= 18 && my.age<=100){
			fprintf(fp,"Campuser is %d years old\n\n",my.age);
			}
			else if (my.age<18){
				fprintf(fp,"Not a campuser at age %d\n\n",my.age);
				}
				else 
				fprintf(fp,"%d years is Out of range (1-100)\n\n ",my.age);

}
