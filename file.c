#include <stdio.h>
#include "file.h"

void saveContactsToFile(struct AddressBook *addressBook)
{
    int count=addressBook->contactCount;
    FILE* fp=fopen("contact.csv","w+");
    for(int i=0;i<count;i++)
    {
        fprintf(fp,"%d, %s, %s, %s\n",i+1,addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
    }
    fclose(fp);
  
}

void loadContactsFromFile(struct AddressBook *addressBook)
{
    FILE* fp=fopen("contact.csv","r");
    int i=0;
    while(!feof(fp))
    {
        fscanf(fp,"%[^,] ,%[^,] ,%[^\n]\n",addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
        i++;
    }
    fclose(fp);
    
}
