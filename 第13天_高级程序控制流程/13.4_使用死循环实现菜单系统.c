/*
 Demonstrates using an infinite loop to implement
 */
# include <stdio.h>
# define DELAY 150000	//Used if delay loop.

int menu(void);
void delay(void);

int main(int argc, char const *argv[])
{
    int choice;

    while(1)
    {
        //Get the user's selectiog

        choice = menu();

        //Branch based on the input
        if (choice == 1)
        {
            puts("\nExecuting task A.");

            delay();
        }else if (choice == 2)
        {
            puts("\nExecuting task B.");

            delay();
        }else if (choice == 3)
        {
            puts("\nExecuting task C.");

            delay();
        }else if (choice == 4)
        {
            puts("\nExecuting task D.");

            delay();
        }else if (choice == 5)
        {
            puts("\nExiting program now..");
            delay();
            break;
        }
        else{
            puts("\nInvalid choice, try again.");
            delay();
        }
    }


    return 0;
}
//Displays a menu and inputs user's selection
int menu(void){
    int reply;
    
    puts("\nEnter 1 for task A.");
    puts("\nEnter 2 for task B.");
    puts("\nEnter 3 for task C");
    puts("\nEnter 4 for task D.");
    puts("\nEnter 5 to exit program.");
    
    scanf("%d", &reply);
    
    return reply;
    
}

void (delay)(void){
    
    for (int i = 0; i < DELAY; ++i)
    {
        ;
    }
}







