#include "./include/shell.h"

void launch_shell(int n)
{

	string ch = (string) malloc(200); 
	int counter = 0;
   		 
         

	do
	{
			print("K (");
			print(int_to_string(n));
			print(")> ");
		   //memory_copy(readStr(), ch,100);
		       ch = readStr(); 
			
		              
		    
		    if(strcmp(ch,"clear"))
		    {
		            clearScreen();
		    }
		    else if(strcmp(ch,"sum"))
		    {
		    	sum();
		    }	   
		   
		    else if(strcmp(ch,"sort"))
		    {
		    	sort();
		    }	    	   
		    
		    else if(strcmp(ch,"color"))
		    {
		    	set_background_color();
		    }
		    else if(strcmp(ch,"multiply"))
		    {
		    	multiply();
		    }
			else if(strcmp(ch,"help"))
		    {
		    	help();
		    }
			 else if(strcmp(ch,"exit"))
		    {
		    	print("\nGood Bye!\n");
		    }
		        
		    else
		    {
		            print("\nPlease Enter valid  command!\n");
		            print("K> ");
		    } 

			
			
			
	} while (!strcmp(ch,"exit"));

		}
		



void sum()
{
	print("\n total number you want to sum : ");
	int n = str_to_int(readStr());
	int i =0;
	print("\n");
	int arr[n];
	fill_array(arr,n);
	int s = sum_array(arr,n);
	print("Result: ");
	print(int_to_string(s));
	print("\n");
}
void fill_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		print("A[");
		print(int_to_string(i));
		print("]: ");
		arr[i] = str_to_int(readStr());
		print("\n");
	}
}
int sum_array(int arr[],int n)
{
	int i = 0;
	int s = 0;
	for (i = 0;i<n;i++)
	{
		s += arr[i];
	}
	return s;
}

void sort()
{
	int arr[100];
	print("\nArray size: ");
	int n = str_to_int(readStr());
	print("\n");
	fill_array(arr,n);
	int order = 1;
	insertion_sort(arr,n,order);
	print("\n Result:\n");
	print_array(arr,n);
}


void insertion_sort(int arr[],int n,int order) 
{
	int i = 0;
	for (i = 1;i<n;i++)
	{
		int aux = arr[i];
		int j = i;
		while((j > 0) && ((aux < arr[j-1]) && order ))
		{
			arr[j] = arr[j-1];
			j = j -1;
		}
		arr[j] = aux;
	}
}
void print_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		print(int_to_string(arr[i]));
		print("   ");
	}
	print("\n");
}

void set_background_color()
{
	print("\nColor codes : ");
	print("\n0 : black");
	print_colored("\n1 : blue",1,0);   
	print_colored("\n2 : green",2,0);
	print_colored("\n3 : cyan",3,0);
	print_colored("\n4 : red",4,0);
	print_colored("\n5 : purple",5,0);
	print_colored("\n6 : orange",6,0);
	print_colored("\n7 : grey",7,0);
	print_colored("\n8 : dark grey",8,0);
	print_colored("\n9 : blue light",9,0);
	print_colored("\n10 : green light",10,0);
	print_colored("\n11 : blue lighter",11,0);
	print_colored("\n12 : red light",12,0);
	print_colored("\n13 : rose",13,0);
	print_colored("\n14 : yellow",14,0);
	print_colored("\n15 : white",15,0);
	
	print("\n\n Text color ? : ");
	int text_color = str_to_int(readStr());
	print("BG ground ? : ");
	int bg_color = str_to_int(readStr());
if (text_color>=0 && text_color<16) 
{
    
     set_screen_color(text_color,bg_color);
	clearScreen();
}
else
{  print("\n enter valid number\n");
 print("K> ");
}
	
}

void multiply()
{
	print("\nNum 1 :");
	int num1 = str_to_int(readStr());
	print("\nNum 2 :");
	int num2 = str_to_int(readStr());
	print("\nResult : ");
	print(int_to_string(num1*num2)); 
	print("\n");
}

void help()
{
	
	print("\nclear     : Clears the screen");
	print("\nsum       :  Addition");
	print("\nmultiply  : multiplication");
	print("\nsort      : Sorting");
	print("\ncolor     : Changes the colors ");
	print("\nexit      : Quits");
		
	print("\n\n");
}

