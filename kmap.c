#include<stdio.h>
void main()
{  
int i,j,n,ch,sel;
printf("K-map solver of 3 variables\n\n");
while (1)
{
int f=0,    k[8]={-1,-1,-1,-1,-1,-1,-1,-1},l[8]={0,0,0,0,0,0,0,0}, y[6]={0,0,0,0,0,0};
printf("\nChoose 1: Continue, 2:Exit\n");
scanf("%d",&sel); 
if(sel==2)
{       	 
   printf("Thank you  \n");        	break;
}
if(sel==1)
{
printf("Enter how many minterms you want to enter:\n");
scanf("%d",&n); 
if(n>8)
{  	
 printf("You have entered wrong minterms because maximum minterm in 3 variable is 8:");     return;
}
if (n!=0)
{
printf("Enter the minterms:\n");
 for(i=0;i<n;i++)
 scanf("%d",&k[i]);
}
printf("\nFinal Matrix\n");
for(i=0;i<8;i++)
   for(j=0;j<8;j++)
        	if(k[i]-j==0)
        	        	l[j]=1;
printf("| %d | %d | %d | %d | ",l[0],l[1],l[3],l[2]);
printf("\n| %d | %d | %d | %d | ",l[4],l[5],l[7],l[6]);
printf("\n");
for(i=0;i<8;i++)     	
if(l[i]==1)        	
   f++;
printf("\nSelect your choice \n1:SOP 2:POS\n");
 scanf("%d",&ch);
if(ch==1)
{
printf("\nSOP equation \n ");   	if(f==8) 
	printf("x=1");
else
{ 
printf("x=(");	   

if(l[0]==1&&l[1]==1&&l[4]==1&&l[5]==1)        	
{   		 
  y[0]=1;        	 printf(" !B +");  	
}        	
if(l[2]==1&&l[3]==1&&l[6]==1&&l[7]==1)        	
{       	        	 
	y[1]=2;      	        	 printf(" B +");            	       
}        	
if(l[0]==1&&l[1]==1&&l[2]==1&&l[3]==1)        	
{       	        	 
	y[2]=3;      	 printf(" !A +");     	  	        	    
}        	
if(l[4]==1&&l[5]==1&&l[6]==1&&l[7]==1)        	
{       	        	      
	y[3]=4;      	printf(" A +");     	
}        	
if(l[0]==1&&l[2]==1&&l[4]==1&&l[6]==1)        	
{    	
	y[4]=5;      	printf(" !C +");   	
}  	
if(l[1]==1&&l[3]==1&&l[7]==1&&l[5]==1)        	
{  
	y[5]=6;      	printf(" C +");         	
}        	
if(y[4]!=5&&y[0]!=1&&l[0]==1&&l[4]==1)          	 
              	printf(" !B!C +");               	
if(y[0]!=1&&l[1]==1&&l[5]==1&&y[5]!=6)
        	 printf(" !BC +");                  	
if(y[5]!=6&&y[1]!=2&&l[3]==1&&l[7]==1)
        	 printf(" BC +");   	  	    
if(y[4]!=5&&y[1]!=2&&l[2]==1&&l[6]==1)
        	 printf(" B!C +");        	          
if(y[0]!=1&&l[0]==1&&l[1]==1&&y[2]!=3)
        	 printf(" !A!B +");
if(y[1]!=2&&l[3]==1&&l[2]==1&&y[2]!=3)
        	 printf(" !AB +");      	
if(y[1]!=2&&l[7]==1&&l[6]==1&&y[3]!=4)
        	 printf(" AB +"); 	
if(y[0]!=1&&l[4]==1&&l[5]==1&&y[3]!=4)
        	 printf(" !BA +");  
if(y[5]!=6&&l[3]==1&&l[1]==1&&y[2]!=3)
        	 printf(" !AC +");  
if(y[5]!=6&&l[5]==1&&l[7]==1&&y[3]!=4)
        	 printf(" AC +");  
if(y[2]!=3&&y[4]!=5&&l[0]==1&&l[2]==1)
        	 printf(" !A!C +");
if(y[4]!=5&&l[4]==1&&l[6]==1&&y[3]!=4)
        	 printf(" A!C +");
if(l[1]==0&&l[4]==0&&l[0]==1&&l[2]==0)
        	 printf(" !A!B!C +");
if(l[0]==0&&l[5]==0&&l[1]==1&&l[3]==0)
        	 printf(" !A!BC +");        	
if(l[1]==0&&l[2]==0&&l[3]==1&&l[7]==0)
        	 printf(" !ABC +");  	
if(l[3]==0&&l[6]==0&&l[0]==0&&l[2]==1)
        	 printf(" !AB!C +");
if(l[0]==0&&l[4]==1&&l[6]==0&&l[5]==0)
        	 printf(" A!B!C +");

if(l[1]==0&&l[4]==0&&l[5]==1&&l[7]==0)
        	 printf(" A!BC +");
if(l[3]==0&&l[5]==0&&l[6]==0&&l[7]==1)
        	 printf(" ABC +");
if(l[2]==0&&l[4]==0&&l[6]==1&&l[7]==0)
        	 printf(" AB!C +");  
}
	printf(" 0 )\n");
	    	printf("Thank you  \n");
} 
else if(ch==2)
{
printf("\nPOS equation \n");
if(f==8) 
	printf("x=0");
else if(f==0)
	printf("x=1");
else
{ 
printf("x=");	    
if(l[0]==0&&l[1]==0&&l[4]==0&&l[5]==0)        	
{   		        	
y[0]=1;          	        	 printf("(B)");  	
}        	
if(l[2]==0&&l[3]==0&&l[6]==0&&l[7]==0)        	
{       	 
	y[1]=2;                  	 printf("(!B)");  
}        	
if(l[0]==0&&l[1]==0&&l[2]==0&&l[3]==0)        	
{  
	y[2]=3;      	  printf("(A)");     	
}        	
if(l[4]==0&&l[5]==0&&l[6]==0&&l[7]==0)        	
{  
	y[3]=4;      	 printf("(!A)");     	
}        	
if(l[0]==0&&l[2]==0&&l[4]==0&&l[6]==0)        	
{  
	y[4]=5;      	 printf("(C)");  
}  	
if(l[1]==0&&l[3]==0&&l[7]==0&&l[5]==0)        	
{  
	y[5]=6;      	 printf("(!C)");     	
}        	
if(y[4]!=5&&y[0]!=1&&l[0]==0&&l[4]==0)          	 
             	printf("(B+C)");
if(y[0]!=1&&l[1]==0&&l[5]==0&&y[5]!=6)
        	 printf("(B+!C)");  
if(y[5]!=6&&y[1]!=2&&l[3]==0&&l[7]==0)
        	 printf("(!B+!C)");   	
if(y[4]!=5&&y[1]!=2&&l[2]==0&&l[6]==0)
        	 printf("(!B+C)");  
if(y[0]!=1&&l[0]==0&&l[1]==0&&y[2]!=3)
        	 printf("(A+B)");
if(y[1]!=2&&l[3]==0&&l[2]==0&&y[2]!=3)
	printf("(A+!B)");  	
if(y[1]!=2&&l[7]==0&&l[6]==0&&y[3]!=4)
        	 printf("(!A+!B)");  

if(y[0]!=1&&l[4]==0&&l[5]==0&&y[3]!=4)
        	 printf("(!A+B)");  
if(y[5]!=6&&l[3]==0&&l[1]==0&&y[2]!=3)
        	 printf("(A+!C)");  
if(y[5]!=6&&l[5]==0&&l[7]==0&&y[3]!=4)
        	 printf("(!A+!C)");  
if(y[2]!=3&&y[4]!=5&&l[0]==0&&l[2]==0)
        	 printf("(A+C)");
if(y[4]!=5&&l[4]==0&&l[6]==0&&y[3]!=4)
        	 printf("(!A+C)");
if(l[1]==1&&l[4]==1&&l[0]==0&&l[2]==1)
        	 printf("(A+B+C)");
if(l[0]==1&&l[5]==1&&l[1]==0&&l[3]==1)
        	 printf("(A+B+!C)");        	
if(l[1]==1&&l[2]==1&&l[3]==0&&l[7]==1)
        	 printf("(A+!B+!C)");  	
if(l[3]==1&&l[6]==1&&l[0]==1&&l[2]==0)
        	 printf("(A+!B+C)");
if(l[0]==1&&l[4]==0&&l[6]==1&&l[5]==1)
        	 printf("(!A+B+C)");
if(l[1]==1&&l[4]==1&&l[5]==0&&l[7]==1)
        	 printf("(!A+B+!C)");
if(l[3]==1&&l[5]==1&&l[6]==1&&l[7]==0)
        	 printf("(!A+!B+!C)");
if(l[2]==1&&l[4]==1&&l[6]==0&&l[7]==1)
        	 printf("(!A+!B+C)");  
}
	    	printf("\nThank you  \n");
}
else  	printf("Invalid choice\n");
} 
else   printf("Invalid choice\n");
}
 }
