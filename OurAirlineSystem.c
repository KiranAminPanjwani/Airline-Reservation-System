#include<stdio.h>
int timming(int seriol[], int code[])                                       //function for providing ticket code //passing 2 paramenters
{	
	int i,n,wrong;
	printf("\n\n choose your flight serial number: ");
	scanf("%d",&n); 
	for(i=0;i<15;i++)                                                        //comparing serial numbers
	{
		if(n==seriol[i]) 
	    {
	        printf("\n Your booking is successful and your code is");
	        printf(" '%d' ",code[i]);
	        printf("\n Please Remember This Code!");
	        wrong=0;
	    }
	}
	if(wrong!=0)
	{
		printf(" Wrong serial number!");                              //if serial number does not match
	}
}


int ticket_code(int co,int code[],int price[])                         //function for giving ticket price and calculating total price
{
    int x = 0;
	if(co==code[0] || co==code[1] || co==code[2])
	{
		printf("\n ~Ticket price is %d",price[0]);
		x=price[0] + price[0]*0.13;                                   //storing total price in x
		printf("\n ~Total amount with 13 percent tax is %d",x);
        
	}
	else if(co==code[3] || co==code[4] || co==code[5])
	{
		printf("\n ~Ticket price is %d",price[1]);
		x=price[1] + price[1]*0.13;
		printf("\n ~Total amount with 13 percent tax is %d",x);
	}
	else if(co==code[6] || co==code[7] || co==code[8])
	{
		printf("\n ~Ticket price is %d",price[2]);
		x=price[2] + price[2]*0.13; 
		printf("\n ~Total amount with 13 percent tax is %d",x);
	}
	else if(co==code[9] || co==code[10] || co==code[11])
	{
		printf("~Ticket price is %d",price[3]);
		x=price[3] + price[3]*0.13;
		printf("\n\n ~Total amount with 13 percent tax is %d",x);
	}
	else if(co==code[12] || co==code[13] || co==code[14])
	{
		printf("\n ~Ticket price is %d",price[4]);
		x=price[4] + price[4]*0.13;
		printf("\n ~Total amount with 13 percent tax is %d",x);
	}
	else
	printf(" Wrong code!");	
	
	return x;                                                         //returning total price in fomm of x
}


int main()
{
//	system("color f0");
	int choice;
	int p, co,age, payment;                                      //declaring all variables and arrays globally
	char name[20];
	char date[10];
	char destination[20];
	char from[20];
	char gender;
	int price[5]={12000,10000,15000,11000,10000};
	int code[15]={74575,74589,74596,84886,84887,84890,93890,93760,93892,30584,30574,30561,57051,57331,53451};
	int seriol[15]={101,102,103,122,123,124,131,132,133,241,242,243,501,502,503};
	
 	do{
	
	printf("\n----------------------------");
	printf("\n");
	printf("  Airline Ticket booking ");
	printf("\n");
	printf("----------------------------");

	printf("\n 1 Booking");                            //name, date, destination.....//code and price according to flight availibility 
   	printf("\n 2 Price");
	printf("\n 3 View Ticket details");
	printf("\n 4 Payment confirmation ");           
	printf("\n 5 cancel your booking");
   	printf("\n 0 Exit \n");
   	printf("\nEnter your Choice:  ");
   	scanf("%d",&choice);
//   	system("cls");   	
	
   
   	switch (choice)
   	{
        case 1 :
        {
        char a[20]="Lahore";
        char b[20]="Quetta";
        char c[20]="Karachi";      
        char d[20]="Peshawar";
        char e[20]="Multan";
        
       
	    printf("Enter passenger name: ");
	    fflush(stdin);                                //clearing buffer
        gets(name); 
        
        printf("Enter your age: ");
        scanf("%d",&age);
        
        printf("Enter gender(M/F): ");
        scanf(" %c", &gender);
        if(gender!='M' && gender!='F')                        
		{
			printf("Re-enter your gender.");
			scanf(" %c", &gender);
		}
				    
        printf("Enter date: ");
        fflush(stdin);
        gets(date);
        
        printf("Enter your current location: ");
	    fflush(stdin);
        gets(from); 
        
        printf("Enter the destination (Lahore/Quetta/Karachi/Peshawar/Multan): \t");
	    fflush(stdin);
        gets(destination);  
		
		  
		  	if(destination[5] == a[5])
		    {
			printf("\n You have chosen Lahore.");
			
			printf("\n\n Flights available for Lahore:");
			printf("\n %d-Flight (time: 5:00pm-7:00pm)",seriol[0]);
	        printf("\n %d-Flight (time: 8:00pm-11:00pm)",seriol[1]);
	        printf("\n %d-Flight (time: 12:00am-2:00am)",seriol[2]);
			timming(seriol,code);
			 
		    }
		    else if(destination[5] == b[5])
		    {
			printf("\n You have chosen Quetta.");
			printf("\n\n Flights available for Quetta:");
			printf("\n %d-Flight (time: 3:00pm-5:00pm)",seriol[3]);
	        printf("\n %d-Flight (time: 7:00pm-9:00pm)",seriol[4]);
	        printf("\n %d-Flight (time: 2:00am-4:00am)",seriol[5]); 
			timming(seriol,code);           
		    } 
		    else if(destination[6] == c[6])
		    {
			printf("\n You have chosen Karachi.");
			printf("\n\n Flights available for Karachi:");
			printf("\n %d-Flight (time: 3:00pm-5:00pm)",seriol[6]);
	        printf("\n %d-Flight (time: 7:00pm-9:00pm)",seriol[7]);
	        printf("\n %d-Flight (time: 2:00am-4:00am)",seriol[8]); 
			timming(seriol,code);           
		    } 
		    else if(destination[7] == d[7])
		    {
			printf("\n You have chosen Peshawar.");
			printf("\n\n Flights available for Peshawar:");
			printf("\n %d-Flight (time: 3:00pm-5:00pm)",seriol[9]);
	        printf("\n %d-Flight (time: 7:00pm-9:00pm)",seriol[10]);
	        printf("\n %d-Flight (time: 2:00am-4:00am)",seriol[11]); 
			timming(seriol,code);           
		    } 
		    else if(destination[5] == e[5])
		    {
			printf("\n You have chosen Multan.");
			printf("\n\n Flights available for Multan:");
			printf("\n %d-Flight (time: 3:00pm-5:00pm)",seriol[12]);
	        printf("\n %d-Flight (time: 7:00pm-9:00pm)",seriol[13]);
	        printf("\n %d-Flight (time: 2:00am-4:00am)",seriol[14]); 
			timming(seriol,code);           
		    } 
		    else
		    {
		    	printf("Destination unreachable.");
			}
		  
		}
   		break;
   		
   		case 2:
   			{
			   printf(" Enter your ticket code: ");
			   scanf("%d",&co);
			   p = ticket_code(co,code,price);                //storing the value of function in p which x returned to the function
			   			  
			}
   		break;
   		
   		case 3:
   		{
   			
			printf(" Your booking details are as follows:\n");
			printf(" From: \t");
			puts(from);                        //current location
			printf(" To: \t");
			puts(destination);                //destination
			printf(" Name: \t");
   			puts(name);                       //name of user
   			printf(" Age:   %d",age);         //age of user
   			printf("\n Gender: %c",gender);   //date of user
   			printf("\n Date: \t");
   			puts(date);                       //date of booking
   			printf(" Code:  %d",co);           //user's ticket code
			printf("\n Price: %d",p);          //total price

   			
		 }
		break;	  
		
		case 4:
   		{
   			int confirm,j;
			printf(" Your amount is %d.",p);
			for(j=1; j<5;)
			{
				for(confirm=1; confirm<2; confirm++)        
				{
					printf("\n\n ~ Pay this amount to confirm:");
				    scanf("%d",&payment);
				    if(payment<p)
				    {
				    printf("\n Your amount is less than %d, kindly pay actual amount.",p);
				     j++;
	                }
	                else if(payment>p)
					{
					printf("\n Your amount is greater than %d, kindly pay actual amount.",p);
					 j++;
					}
					else
					{
					printf("\n Your booking is confirmed.\n Enjoy Your Trip :-D");
					j=5;			
					}
				}
			   
		    }
		    if(payment !=p)                                                //when payment is not equal to total price 
		    {
		    	printf("\n Your Booking Is Cancelled");
			}
	
		 }
        break;
		
		case 5:
   		{
   			int code_to_cancel;
			if(payment==p)
   			{
   				printf("Enter your ticket code to proceed: ");
   				scanf("%d",&code_to_cancel);
   				if(code_to_cancel==co)
   				{
					p=0;                                                   //making price 0
					printf("\n Price: %d",p);
					co=0;                                                  //code assign 0
					printf("\n your ticket code is expired now!.");
					printf(" And your booking is Cancelled.\n");

				}
			}

   			
		 }
		break;	
		
		case 0:
			{
				printf("\n You are exited from the booking.");
				break; 	                                                //to break the loop
			}
	

    default:
    printf("Wrong choice !");
    break;
   	}
   	
   	printf("\n________________________________________________\n");
 }while(choice!=0);
 

 return 0;
}


