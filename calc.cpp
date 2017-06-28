#include <iostream>
#include <cstdlib>

using namespace std;


void add(char num1[], char num2[])
{
	int count1=0,count2=0;
	char numfinal1[500];
	char numfinal2[500];
	char answer[501];

	for(int i=0;num1[i]!='\0';i++)
			count1++;
	for(int i=0;num2[i]!='\0';i++)
			count2++;
	// cout<<count1<<endl;   // to check
	// cout<<count2<<endl;   // to checkk

	int countfinal=0;


	
	if(count1>count2)
	{
		int i;
		for ( i=0;num1[i]!='\0';i++)    
		{
			numfinal1[i]=num1[i];
		}
		numfinal1[i]='\0';

		//numfinal1= num1;
		// numfinal2 = new char;
		countfinal=count1;

		for(int i=0;i<count1;i++)
		{
			if ((count1-count2)>i)
			numfinal2[i]='0';
		    else
		    	numfinal2[i]=num2[i-(count1-count2)];

		}



	}



	if(count2>count1)
	{
		int i;
		for ( i=0;num2[i]!='\0';i++)    
		{
			numfinal2[i]=num2[i];
		}
		numfinal2[i]='\0';
		//numfinal2= num2;
		// numfinal1 = new char;
		countfinal=count2;

		for(int i=0;i<count2;i++)
		{
			if ((count2-count1)>i)
			numfinal1[i]='0';
		    else
		    	numfinal1[i]=num1[i-(count2-count1)];

		}



	}
	

	if(count2==count1)
	{
		int i;
		countfinal= count2;

		for ( i=0;num2[i]!='\0';i++)    
		{
			numfinal2[i]=num2[i];
		}
		numfinal2[i]='\0';

		for ( i=0;num1[i]!='\0';i++)    
		{
			numfinal1[i]=num1[i];
		}
		numfinal1[i]='\0';


		//numfinal1=num1;
		//numfinal2=num2;
	}

	numfinal1[countfinal]='\0';
	numfinal2[countfinal]='\0';

	//cout<<numfinal2<<endl;   // to check 
	//cout<<numfinal1<<endl;   // to check

	// cout<<countfinal<<endl;  //  to check
	
	answer[0]='0';
	

	for (int i = countfinal - 1; i>=0; i--)
	{

		
		int temp=(numfinal1[i])+(numfinal2[i])-96;
		// cout<<temp<<endl; 

		if(temp>9)
		{

			if(i==0)
			{
				answer[0]='1';
			}
			if(i!=0)
			{
				numfinal1[i-1]++;
			}
			
			
			temp = temp%10;

			answer[i+1] = char(temp + 48);     // to make sure that the length of our number is right 
			
						
		}
		else 
			{
			
			answer[i+1] = char(temp + 48); 

				
					
		  	}
	}

	answer[countfinal+1]='\0';
	
	cout<<answer;
	

}
void sub(char * num1, char* num2)
{
	int count1=0,count2=0;
	char numfinal1[500];
	char numfinal2[500];
	char answer[501];
	// char *numfinal1 = new char;
	// char *numfinal2 =  new char;
	// char *answer= new char;
	for(int i=0;num1[i]!='\0';i++)
			count1++;
	for(int i=0;num2[i]!='\0';i++)
			count2++;
	// cout<<count1<<endl;   // to check
	// cout<<count2<<endl;   // to checkk

	int countfinal=0;


	
	if(count1>count2)
	{
		int i;
		for ( i=0;num1[i]!='\0';i++)    
		{
			numfinal1[i]=num1[i];
		}
		numfinal1[i]='\0';

		//numfinal1= num1;
		// numfinal2 = new char;
		countfinal=count1;

		for(int i=0;i<count1;i++)
		{
			if ((count1-count2)>i)
			numfinal2[i]='0';
		    else
		    	numfinal2[i]=num2[i-(count1-count2)];

		}



	}



	if(count2>count1)
	{
		int i;
		for ( i=0;num2[i]!='\0';i++)    
		{
			numfinal2[i]=num2[i];
		}
		numfinal2[i]='\0';
		//numfinal2= num2;
		// numfinal1 = new char;
		countfinal=count2;

		for(int i=0;i<count2;i++)
		{
			if ((count2-count1)>i)
			numfinal1[i]='0';
		    else
		    	numfinal1[i]=num1[i-(count2-count1)];

		}



	}
	

	if(count2==count1)
	{
		int i;
		countfinal= count2;

		for ( i=0;num2[i]!='\0';i++)    
		{
			numfinal2[i]=num2[i];
		}
		numfinal2[i]='\0';

		for ( i=0;num1[i]!='\0';i++)    
		{
			numfinal1[i]=num1[i];
		}
		numfinal1[i]='\0';


		//numfinal1=num1;
		//numfinal2=num2;
	}

	numfinal1[countfinal]='\0';
	numfinal2[countfinal]='\0';

	//cout<<numfinal2<<endl;   // to check 
	//cout<<numfinal1<<endl;   // to check

	//cout<<countfinal<<endl;  //  to check
	
	answer[0]='0';
	
	bool flag = false;



	for (int i = countfinal - 1;i>=abs(count2-count1);i--)
	{
		int temp=int(numfinal1[i])-int(numfinal2[i]);

		if(temp<0)
		{
			if(i==0)
			{
			 	answer[0]='-';
			 	temp= ((int(numfinal1[i])-48)+10)-(int(numfinal2[i])-48);
			 	answer[i]=char(temp+48);
			 	continue;

			}
			temp= ((int(numfinal1[i]))+10)-(int(numfinal2[i]));
			answer[i]=char(temp+48);
			numfinal1[i-1]= ((numfinal1[i-1])-1);

		}
		else 
			answer[i]=char(temp+48);
	}

	answer[countfinal]='\0';


	
	cout<<answer;



}





void multiply(char * num1, char* num2)
{
	cout<<"added perfectly";

}
void divide(char * num1, char* num2)
{
	cout<<"added perfectly";

}


int main ()
{
	char num1[500];
	char num2[500];
	//char *num1 = new char  ;
	//char *num2 = new char  ;
	char choice;

	cout<<"Welcome to my calculator!"<<endl<<endl;
	cout<<"What operation would you like to perform:"<<endl<<endl;
	cout<<"Type '1' for Addition"<<endl;
	cout<<"Type '2' for Subtraction"<<endl;
	cout<<"Type '3' for Multiplication"<<endl;
	cout<<"Type '4' for Division"<<endl;
	cin >> choice;
	cout<<"Enter the first number"<<endl;
	cin>>num1;
	cout<<"Enter the second number"<<endl;
	cin>>num2;


	switch(choice)
	{
		case'1': add(num1,num2);
				break;
		case '2': sub(num1,num2);
				break;
		case'3': multiply(num1,num2);
				break;
		case '4': divide(num1,num2);
				break;
		default: cout<<"Invalid choice";
		        exit(-1);
	}


	
}