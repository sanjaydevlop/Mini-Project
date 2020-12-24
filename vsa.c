#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

struct ad            //Defining Structure
{
  char name[30];
  char vehno[10];
  char repair[30];
  int refid,age, dd, mm, yyyy;
  float tot;
  char status[50];
  char phone[30];
} x[100]; 

int n, i, j = 0, a = 0, sum = 0, g, flag, num;
void read ();
void write();
void add ();
void view ();
void search ();
void edit ();
void del ();
void show ();
void gen ();
void oil ();
void color ();

int main()
{
  read ();
  int c, i, q;
  printf("*********************************************************************************************\n");
  printf("\n");
  printf ("******************************VEHICLE SERVICE ADMINISTRATION*******************************\n");
  printf("\n");
  printf("*********************************************************************************************\n");
  int m, n;
//making out the pattern

  while (c != 6)
    {

      
	  printf("\t\t\t\t**Enter your choice**\n\n1. Add Information of the Vehicle\n\n\n\t\t\t2. View Information of the Vehicle\n\n\n3. Search of the Vehicle\n\n\n\t\t\t4. Edit Information of the Vehicle\n\n\n5. Delete Information of the Vehicle\n\n\n\t\t\t6. Exit\n\n\n\nOption=");
      scanf ("%d", &c);		//choice for option
      if (c == 1)		//add
	{

	  add ();
	}
      else if (c == 2)		//view
	{

	  view ();
	}
      else if (c == 3)		//search
	{

	  search ();
	}
      else if (c == 4)		//edit
	{

	  edit ();
	}
      else if (c == 5)		//delete
	{

	  del ();
	}
      else if (c == 6)
	{
	  write ();
	  return 0;
	}
      else
	{

	  printf ("\n\nInvalid input , try again by using valid inputs");
	}
      printf ("\n\n");
    }
}

void add()
{
  int z;
  printf ("\n");
  printf ("Already data inputed on the database =%d\n\n", num);	//how many inputs
  printf ("Enter 1 to start....................\n");
  scanf ("%d", &n);
  while(1)
  {
	  if(n!=1)
	  {
		  printf("Invalid input, enter 1 again...\n");
		  scanf("%d",&n);
	  }
	  else
	  {
		  break;
	  }
  }
  
  sum = n + num;
  int wh1;
  char g[30] = "General Service";
  char o[30] = "Change in oil";
  char c[30] = "Color Coating";
  for (i = num, j = 0; i < sum; i++)
    {
      printf ("\n");
      printf ("Enter Customer's Name: \n");
      scanf ("%s", x[i].name);
	  printf ("\n");
	  printf ("\n");
      printf ("Enter date of registering: \n");
      scanf ("%d-%d-%d", &x[i].dd, &x[i].mm, &x[i].yyyy);
	  printf ("\n");
	  printf ("\n");
      while(1)
      {
          if(x[i].dd>31||x[i].mm>12)
          {
               printf("Invalid Input, Please re enter date :\n");
               scanf ("%d-%d-%d", &x[i].dd, &x[i].mm, &x[i].yyyy);
          }
          else
          {
              break;
          }
      }
      printf ("Enter Vehicle number = \n");
      scanf ("%s", x[i].vehno);
      printf ("Enter the age = \n");
      scanf ("%d", &x[i].age);
      printf ("Enter Reference No. = \n");
      scanf ("%d", &x[i].refid);
      printf ("Enter phone number = \n");
      scanf ("%s", x[i].phone);
      while(1)
      {
          
         if(strlen(x[i].phone)>10||strlen(x[i].phone)<10)
         {
          printf("Invalid Input, Please re enter your phone number: \n");
          scanf("%s", x[i].phone);
          
		 }
		 else
		 {
		    break;
		 }
		
      }
      
      
      printf ("What type of service you want to choose\n");
      printf("1.General Service\n2.Change Oil\n3.Coating a new color to the vehicle\n");
        	         
      scanf ("%d", &z);
      if (z == 1)
      {
        strcpy (x[i].repair, g);
        gen ();
      }
      else if (z == 2)
      {
        strcpy (x[i].repair, o);
        oil ();
        	  
      }
      else if (z == 3)
      {
        strcpy (x[i].repair, c);
        color ();
        	 
      }
      else
       {
        printf("Invalid Input, Please enter it again\n");
       }
    }
      printf ("\n");
      j++;
      a++;
      num++;
    
}

void view()
{
  for (i = 0; i < num; i++)
    {
      printf ("\n");
      printf ("Serial Number=%d\n", i);
      printf ("Name = %s\n", x[i].name);
      printf ("Vehicle Number =%s\n", x[i].vehno);
      printf ("Reference no = %d\nAge=%d\n", x[i].refid, x[i].age);
      printf ("Phone Number of Customer = %s\n", x[i].phone);
      printf ("Total Payment= %f\n", x[i].tot);
      printf ("Service = %s\n", x[i].repair);
	  printf("Status : ");
      puts(x[i].status);
      printf("Vehicle Details are viewed successfully\n");
      printf ("\n\n");
    }
}

void edit()
{
  int q, p;
  fflush (stdin);
  printf ("What do you want to edit ?\n");
  printf ("Enter your option\n");
  printf ("1.Name\n2.Vehicle No.\n3.Age\n4.Reference id\n5.Phone no.\n6.Status\n");
  printf ("Option=");
  scanf ("%d", &q);		//option
  if (q < 7)
    {
      printf ("Enter the serial no of that Customer= (0 - %d)=", num - 1);
      scanf ("%d", &p);		//serial number
      if (p < num)
	  {
	    if (q == 1)
	      {
	        fflush (stdin);
	        printf ("Enter the new name=");
	        scanf ("%s", x[p].name);
            
          }
	    else if (q == 2)
	      {
	        fflush (stdin);
	        printf ("Enter the new Vehicle Number=");
	        scanf ("%s", x[p].vehno);
	      }
	    else if (q == 3)
	      {
	        fflush (stdin);
	        printf ("Enter the new Age=");
	        scanf ("%d", &x[p].age);
	      }

	    else if (q == 4)
	      {  
	        fflush (stdin);
	        printf ("Enter the new Reference no=");
	        scanf ("%d", &x[p].refid);
	      }

	    else if (q == 5)
	      {
	        fflush (stdin);
	        printf ("Enter the new Phone no =");
	        scanf ("%s", x[p].phone);
	      
	      }
	    else if (q == 6)
	      {
	        fflush (stdin);
	        printf ("Enter the new Status  =");
	        scanf ("%s", x[p].status);
	      }
	  }
	
       else
	   {
	      printf ("\n\nInvalid Serial \nTry Again !!\n\n");
	   }
	   
	   
   }

    printf("Vehicle Details are updated successfully\n");
}


void search ()
{
  int s, h, f;
  char u[100];
  printf ("By what do you want to search ?\n");
  printf("1.Serial no.\n2.Name\n3.Vehicle No.\n4.Reference ID.\n5.Phone no.\n\nOption = ");
  scanf ("%d", &h);
  if (h == 1)
    {
      printf ("Enter Serial number of the Customer=");
      scanf ("%d", &s);
      if (s < num)
	{
	  printf ("\n");
	  printf ("Serial Number=%d\n", s);
	  printf ("Name = ");
	  puts (x[s].name);
	  printf ("Vehicle Number = ");
	  puts (x[s].vehno);
	  printf ("Reference no = %d\nAge = %d\n",x[s].refid, x[s].age);
	  printf ("Phone Number of Customer = %s\n", x[s].phone);
	  printf ("Money Paid= %f\n",x[s].tot);
	  printf("Service : ");
	  puts(x[s].repair);
	  printf("Status : ");
	  printf("\n");
      puts(x[s].status);
      printf("Vehicle Details are viewed successfully\n");
	  printf ("\n\n");
	}
      else
	    printf ("\n\nNot Found\n\n");
    }
  else if (h == 2)		//problem is here.........
    {
      int f = 1;
      fflush (stdin);
      printf ("Enter your name=");
      gets (u);
      fflush (stdin);
      for (g = 0; g < num; g++)
	 {
	  if (strcmp (u, x[g].name) == 0)
	    {
	      printf ("\n");
	      printf ("Serial Number=%d\n", g);
	      printf ("Name = ");
	      puts (x[g].name);
	      printf ("Vehicle No. = ");
	      puts (x[g].vehno);
	      printf ("Reference No. no = %d\nAge = %d\n",x[g].refid,  x[g].age);
		  printf ("Phone Number of Customer = %s\n", x[g].phone);
	      printf ("Service=  %s\n,Money Paid= %f\n", x[g].repair,x[g].tot);
		  printf("Status : ");
          puts(x[g].status); 
          printf("Vehile Details are viewed successfully\n");
	      printf ("\n\n");
	      f = 0;

	    }
	 }
      if (f == 1)
	     printf ("\nNot Found\n");



    }
  else if (h == 3)
    {
      int f = 1;
      fflush (stdin);
      printf ("Enter Vehicle Number = ");
      gets (u);
      fflush (stdin);
      for (g = 0; g < num; g++)
	{
	  if (strcmp (u, x[g].vehno) == 0)
	    {
	      printf ("\n");
	      printf ("Serial Number=%d\n", g);
	      printf ("Name = ");
	      puts (x[g].name);
	      printf ("Vehicle Number = ");
	      puts (x[g].vehno);
	      printf ("Reference no = %d\nAge = %d\n",x[g].refid, x[g].age);
		      
		  printf ("Phone Number of Customer = %s\n", x[g].phone);
	      printf ("Service=  %s\n,Money Paid= %f\n", x[g].repair,x[g].tot);
		      
		  printf("Status : ");
          puts(x[g].status); 
          printf("Vehicle Details are viewed successfully\n");
	      printf ("\n\n");
	      f = 0;
	    }


	}
      if (f == 1)
	printf ("\nNot Found\n");


    }
  else if (h == 4)
    {
      int f = 1;
      printf ("Enter Reference number = ");
      scanf ("%d", &f);
      for (g = 0; g < num; g++)
	{
	  if (f == x[g].refid)
	    {
	      printf ("\n");
	      printf ("Serial Number=%d\n", g);
	      printf ("Name = ");
	      puts (x[g].name);
	      printf ("Vehicle Number = ");
	      puts (x[g].vehno);
	      printf ("Reference no = %d\nAge = %d\n",x[g].refid, x[g].age);
		      
	      printf ("Service=  %s\n,Money Paid= %f\n", x[g].repair,x[g].tot);
		      
		  printf ("Phone Number of Customer = %s\n", x[g].phone);
		  printf("Status : ");
          puts(x[g].status);
          printf("Vehile Details are viewed successfully\n");
	      printf ("\n\n");
	      f = 0;
	    }

	}
      if (f == 1)
	printf ("Not Found\n\n");

    }
  else if (h == 5)
    {
      int f = 1;
	  fflush (stdin);
      printf ("Enter Phone number = ");
      gets(u);
	  fflush (stdin);
      for (g = 0; g < num; g++)
	{
	  if (strcmp (u, x[g].phone) == 0)
	    {
	      printf ("\n");
	      printf ("Serial Number=%d\n", g);
	      printf ("Name = ");
	      puts (x[g].name);
	      printf ("Vehicle Number = ");
	      puts (x[g].vehno);
	      printf ("Reference no = %d\n\nAge = %d\n",x[g].refid, x[g].age);
		  printf ("Phone Number of Customer = %s\n", x[g].phone);
	      printf ("Service=  %s\nMoney Paid= %f\n", x[g].repair, x[g].tot);
		     
		  printf("Status : ");
          puts(x[g].status);
          printf("Vehicle Details are viewed successfully\n");
	      printf ("\n\n");
	      f = 0;
	    }

	}
      if (f == 1)
	printf ("Not Found");
    }

  else
    printf ("\n\nInvalid input\n\n");
}

void
del ()
{
  int f, h;
  printf ("Enter the serial number of the Customer that you want to delete=");
  scanf ("%d", &f);
  if (f < num)
    {
      printf ("What do you want ?\n");
      printf
	("1.Remove the whole record\n2.Remove Name\n3.Remove Vehicle Number\n4.Remove age\n5.Remove Reference Id\n6.Remove phone number\nOption = ");
      scanf ("%d", &h);
      if (h == 1)
	{
	  while (f < num)
	    {
	      strcpy (x[f].name, x[f + 1].name);
	      strcpy (x[f].vehno, x[f + 1].vehno);
	      x[f].age = x[f + 1].age;
	      x[f].refid = x[f + 1].refid;
	      strcpy (x[f].phone, x[f + 1].phone);
	      f++;
	    }
	  num--;
	}
      else if (h == 2)
	{
	  strcpy (x[f].name, "Cleared");

	}
      else if (h == 3)
	{
	  strcpy (x[f].vehno, "Cleared");
	}
      else if (h == 4)
	{
	  x[f].age = 0;
	}
      else if (h == 5)
	{
	  x[f].refid = 0;
	}
      else if (h == 6)
	{
	  strcpy (x[f].phone, "Cleared");
	}

    }
  else
  {
      printf ("\n\nInvalid Serial number\n");
  }
    
    printf("Vehicle Details are deleted successfully\n");

}

void
read ()
{
  FILE *fp = fopen ("details.txt", "r");
  if (fp == NULL)
    {
      //create empty file, so that we can open it
      //in the next execution of this program
      fp = fopen ("details.txt", "w");
      fclose (fp);
      printf ("File does not exist, I JUST CREATED IT, exiting...\n\n\n");

    }

  num = fread (x, sizeof (struct ad), 100, fp);
  fclose (fp);
}

void
write ()
{
  FILE *fp = fopen ("details.txt", "w");
  if (fp == NULL)
    {
      printf ("Error");
      exit (1);
    }
  fwrite (x, sizeof (struct ad), num, fp);

  fclose (fp);
}





void
gen ()
{
  printf("********************WELCOME TO MECHANIC SECTION****************");
  printf("*************************GENERAL SERVICE***********************");
  int br;
  int j;
  char pd[50] = "Paid";
  char nd[50] = "Not Paid";
  float brkk=50.0;
  float washh=500.0;
  float chainn=50;
  float nob=0;
  int coup_arr[5]={55452,55453,55454,55455,55456};
  int c0,c2,c3,c4,c5,c6,c7,c8;
  int coupg,coupg1,coupg2,coupg3,coupg4,coupg5,coupg6,coupg7;
  printf ("General Service\n");
  printf ("Did the mechanic check Brakes: \n1.Yes\n2.No\n");
  scanf ("%d", &br);
  if (br == 1)
    {
      printf ("The Mechanic has checked it -\n");
    }
  else if (br == 2)
    {
      printf ("The Mechanic has not checked it-\n");
    }
  printf ("Did the mechanic wash the vehicle: \n1.Yes\n2.No\n");
  int vw;
  scanf ("%d", &vw);
  if (vw == 1)
    {
      printf ("Vehicle wash has been done\n");
    }
  else if (vw == 2)
    {
      printf ("Vehicle wash has not been done\n");
    }
  printf ("Did the mechanic check Chain System \n1.Yes\n2.No\n");
  int cs;
  scanf ("%d", &cs);
  if (cs == 1)
    {
      printf ("Chain System has been checked\n");
    }
  else if (cs == 2)
    {
      printf ("Chain System hasn't been checked\n");
    }
  
    printf("Select among the following\n1.Brakes checked,Washing checked,Chain Checked\n2.Brakes checked,Washing Checked,Chain unchecked\n3.Brakes Checked,Washing unchecked,Chain unchecked\n4.Brakes unchecked,Washing unchecked,Chain Unchecked\n5.Brakes checked,Washing unchecked,Chain Checked\n6.Brakes unchecked,Washing checked,Chain checked\n7.Brakes unchecked,Washing checked,Chain unchecked\n8.Brakes unchecked,Washing unchecked,chain checked\n");
  int chck;
  scanf ("%d", &chck);
  if (chck == 1)
    {
      printf ("The Total  = %f/-\n",brkk+washh+chainn);
      x[i].tot = brkk+washh+chainn;
      printf("Does customer has coupon code?\n1.Yes\n2.No\n");
      scanf("%d",&c0);
      if(c0==1)
      {
          printf("Enter coupon code: \n");
          scanf("%d",&coupg);
          for(j=0;j<5;j++)
          {
              if(coup_arr[j]==coupg)
              {
                  printf("You have succesfully claimed your discount of Rs.10\n");
                  x[i].tot = brkk+washh+chainn-10;
                  printf ("The Total = %f/-\n",x[i].tot);
				  break;
              }
			  
          }
	  }
	  else if(c0 == 2)
	  {
		  printf("Since the customer does not have coupon code,\n");
		  printf ("The Total  = %f/-\n",brkk+washh+chainn);
          x[i].tot = brkk+washh+chainn;

	  }
	  
	}
	
	  
  else if (chck == 2)
    {
      printf ("The Total = %f/-\n",brkk+washh);
      x[i].tot = brkk+washh;
	  printf("Does customer has coupon code?\n1.Yes\n2.No\n");
      scanf("%d",&c2);
      if(c2==1)
      {
          printf("Enter coupon code: \n");
          scanf("%d",&coupg1);
          for(j=0;j<5;j++)
          {
              if(coup_arr[j]==coupg1)
              {
                  printf("You have succesfully claimed your discount of Rs.30\n");
				  break;
              }
			  
          }
		  x[i].tot = brkk+washh-30;
          printf ("The Total = %f/-\n",x[i].tot);
	  }
	  else if(c2==2)
	  {
		  printf("Since the customer does not have coupon code,\n");
		  printf ("The Total  = %f/-\n",brkk+washh);
          x[i].tot = brkk+washh;

	  }
	  
    }
  else if (chck == 3)
    {
      printf ("The Total= %f/-\n",brkk);
      x[i].tot = brkk;
	  printf("Does customer has coupon code?\n1.Yes\n2.No\n");
      scanf("%d",&c3);
      if(c3==1)
      {
          printf("Enter coupon code: \n");
          scanf("%d",&coupg2);
          for(j=0;j<5;j++)
          {
              if(coup_arr[j]==coupg2)
              {
                  printf("You have succesfully claimed your discount of Rs.30\n");
                  x[i].tot = brkk-30;
                  printf ("The Total = %f/-\n",x[i].tot);
				  break;
              }
			  
          }
	  }
	  else if(c3==2)
	  {
		  printf("Since the customer does not have coupon code,\n");
		  printf ("The Total  = %f/-\n",brkk);
          x[i].tot = brkk;

	  }
    }
  else if (chck == 4)
    {
      printf ("The Total = %f/=\n",nob);
      x[i].tot = nob;
	  
    }
  else if (chck == 5)
    {
      printf ("The total = %f/-\n",brkk+chainn);
      x[i].tot = brkk+chainn;
	  printf("Does customer has coupon code?\n1.Yes\n2.No\n");
      scanf("%d",&c5);
      if(c5==1)
      {
          printf("Enter coupon code: \n");
          scanf("%d",&coupg4);
          for(j=0;j<5;j++)
          {
              if(coup_arr[j]==coupg4)
              {
                  printf("You have succesfully claimed your discount of Rs.20\n");
                  x[i].tot = brkk+chainn-20;
                  printf ("The Total = %f/-\n",x[i].tot);
				  break;
              }
			  
          }
	  }
	  else if(c5==2)
	  {
		  printf("Since the customer does not have coupon code,\n");
		  printf ("The Total  = %f/-\n",brkk+chainn);
          x[i].tot = brkk+chainn;

	  }
    }
  else if (chck == 6)
    {
      printf ("The Total = %f/-\n",washh+chainn);
      x[i].tot = washh+chainn;
	  printf("Does customer has coupon code?\n1.Yes\n2.No\n");
      scanf("%d",&c6);
      if(c6==1)
      {
          printf("Enter coupon code: \n");
          scanf("%d",&coupg5);
          for(j=0;j<5;j++)
          {
              if(coup_arr[j]==coupg5)
              {
                  printf("You have succesfully claimed your discount of Rs.20\n");
                  x[i].tot = washh+chainn-20;
                  printf ("The Total = %f/-\n",x[i].tot);
				  break;
              }
			  
          }
	  }
	  else if(c6==2)
	  {
		  printf("Since the customer does not have coupon code,\n");
		  printf ("The Total  = %f/-\n",washh+chainn);
          x[i].tot = washh+chainn;

	  }
	  
    }
  else if (chck == 7)
    {
      printf ("The Total = %f/-\n",washh);
      x[i].tot = washh;
	  printf("Does customer has coupon code?\n1.Yes\n2.No\n");
      scanf("%d",&c7);
      if(c7==1)
      {
          printf("Enter coupon code: \n");
          scanf("%d",&coupg6);
          for(j=0;j<5;j++)
          {
              if(coup_arr[j]==coupg6)
              {
                  printf("You have succesfully claimed your discount of Rs.20\n");
                  x[i].tot = washh-20;
                  printf ("The Total = %f/-\n",x[i].tot);
				  break;
              }
			  
          }
	  }
	  else if(c7==2)
	  {
		  printf("Since the customer does not have coupon code,\n");
		  printf ("The Total  = %f/-\n",washh);
          x[i].tot = washh;

	  }
    }
  else if (chck == 8)
    {
      printf ("The Total = %f/-\n",chainn);
      x[i].tot = chainn;
	  printf("Does customer has coupon code?\n1.Yes\n2.No\n");
      scanf("%d",&c8);
      if(c8==1)
      {
          printf("Enter coupon code: \n");
          scanf("%d",&coupg7);
          for(j=0;j<5;j++)
          {
              if(coup_arr[j]==coupg7)
              {
                  printf("You have succesfully claimed your discount of Rs.20\n");
                  x[i].tot = washh-20;
                  printf ("The Total = %f/-\n",x[i].tot);
				  break;
              }
			  
          }
	  }
	  else if(c8==2)
	  {
		  printf("Since the customer does not have coupon code,\n");
		  printf ("The Total  = %f/-\n",chainn);
          x[i].tot = chainn;

	  }
	  
    }
	
  printf("*********************WELCOME TO PAYMENT SECTON*************");
  printf("\n\n");
  int pay;
  printf (" Is payment process completed ?\n1.Yes\n2.No\n");
  scanf ("%d", &pay);
  if (pay == 1)
    {
      strcpy(x[i].status,pd);
    }
  else if (pay == 2)
    {
      strcpy(x[i].status,nd);
    }

}

void
oil ()
{
  printf("***********************WELCOME TO MECHANIC SECTION****************");
  printf("******************************OIL SERVICE*************************");
  
  int ol;
  float egn=300.0;
  float grl=150.0;
  char pd1[30] = "Paid";
  char nd1[30] = "Not Paid";
  float nob1=0;
  printf("Changing Oil\n");
  printf("Did the mechanic add new Engine Oil\n1.Yes\n2.No\n");
  scanf("%d",&ol);
  if(ol==1)
  {
      printf("New Engine Oil has been added\n");
  }
  else if(ol==2)
  {
      printf("Engine oil has not been added\n");
  }
  int gr;
  
  printf("Did mechanic add new gear oil\n1.Yes\n2.No\n");
  scanf("%d",&gr);
  if(gr==1)
  {
      printf("Gear oil has been added\n");
  }
  else if(gr==2)
  {
      printf("Gear oil has not been addded\n");
  }
  printf("Select among the follwing\n1.Engine Oil changed,Gear oil changed\n2.Engine Oil changed,Gear Oil not changed\n3.Engine Oil not changed,Gear Oil changed\n4.Engine Oil not changed,Gear oil not changed\n");
  int chck1;
  scanf("%d",&chck1);
  if(chck1==1)
  {
      printf("The total = %f\n",egn+grl);
      x[i].tot=egn+grl;
  }
  else if(chck1==2)
  {
      printf("The total = %f\n",egn);
      x[i].tot=egn;
  }
  else if(chck1==3)
  {
      printf("The total = %f\n",grl);
      x[i].tot=grl;
  }
  else if(chck1==4)
  {
      printf("The total = %f",nob1);
      x[i].tot=nob1;
  }
  
  printf("*********************WELCOME TO PAYMENT SECTON*************");
  printf("\n\n");
  int pay1;
  printf (" Is payment process completed ?\n1.Yes\n2.No\n");
  scanf ("%d", &pay1);
  if (pay1 == 1)
    {
      strcpy (x[i].status,pd1);
    }
  else if (pay1 == 2)
    {
      strcpy (x[i].status,nd1);
    }

}

void
color ()
{
  
  printf("**********************WELCOME TO MECHANIC SECTION***************");
  printf("****************************COLOR COATING***********************");
  int cl;
  char pd2[30] = "Paid";
  char nd2[30] = "Not Paid";
  printf("Colour Coating\n");
  printf("Is Colour coating done?\n1.Yes\n2.No");
  scanf("%d",&cl);
  if(cl==1)
  {
	  printf("Color Coating is completed\n");
	  
  }
  else if(cl==2)
  {
	  printf("Color Coating is not completed\n");
  }
  printf("Select among the follwing\n1.Color coating done\n2.Color coating not done\n");
  float clr=1500.0;
  int chck2;
  float nob2=0.0;
  scanf("%d",&chck2);
  if(chck2==1)
  {
	  printf("The total=%f\n",clr);
	  x[i].tot=clr;
  }
  else if(chck2==2)
  {
	  printf("The total=%f\n",nob2);
	  x[i].tot=nob2;
  }
  
   printf("*********************WELCOME TO PAYMENT SECTON*************");
   printf("\n\n");
  int pay2;
  printf("Is Payment Process done?\n1.Yes\n2.No\n");
  scanf("%d",&pay2);
  if(pay2==1)
  {
	  strcpy (x[i].status,pd2);
	  printf("Congratulations,you have successfully won a coupon\nyou can avail it only if you opt for general service.\n");
	   int lower = 55452, upper = 55456;

       srand(time(0));

       printf("The coupon code is : \n");
        int numcoup = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", numcoup);
  }
  else if(pay2==2)
  {
	  strcpy (x[i].status,nd2);
  }
}
