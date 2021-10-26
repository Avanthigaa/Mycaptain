#include <stdio.h>

int main()
{
    int choice;
    printf("MENU\n\n1.Pizza\n2.Burger\n3.Pasta\n4.French Fries\n5.Sandwich\n\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nFood item - Pizza\nPrice - Rs 239");
            break;
        case 2:
            printf("\nFood item - Burger\nPrice - Rs 129");
            break;
        case 3:
            printf("\nFood item - Pasta\nPrice - Rs 179");
            break;
        case 4:
            printf("\nFood item - French Fries\nPrice - Rs 99");
            break;
        case 5:
            printf("\nFood item - Sandwich\nPrice - Rs 149");
            break;
        default : 
            printf("Invalid choice");
            break;
    }
    
    

    return 0;
}
