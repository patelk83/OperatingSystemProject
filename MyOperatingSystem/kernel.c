#include "./include/rd.h"

#include "./include/conv.h"
#include "./include/shell.h"
main()
{
	
	clearScreen();
	
print("Hello Please enter a password  (pass:'root')");
       printch('\n');
       print("K> ");
       while (1)
       {
                string ch = readStr();
                print("\n");
                
               if(strcmp(ch,"root"))
                {
                       print("Hi Welcome!!\nPlease enter a command 'help' for suggestion \n ");  
			launch_shell(0); 
                }
                             
                else
                {
                        print("Bad command!\n");
 			print("K> ");
                }      
       }
        
}
