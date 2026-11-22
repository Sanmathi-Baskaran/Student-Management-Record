#include "header.h"

void stud_add(void)
{
    ST *temp;
    ST *ptr;
    int roll;
    int found;

    temp=malloc(sizeof(ST));

    if(temp==NULL)
    {
        printf("Memory Not Allocated\n");
        return;
    }

    printf("Enter Student Name: ");
    scanf(" %[^\n]",temp->name);

    printf("Enter Percentage: ");
    scanf("%f",&temp->percentage);

    for(roll=1; ;roll++)
    {
        found=0;

        for(ptr=hptr;ptr!=NULL;ptr=ptr->next)
        {
            if(ptr->rollno==roll)
            {
                found=1;
                break;
            }
        }

        if(found==0)
            break;
    }
