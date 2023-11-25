#include<stdio.h>
#include<time.h>
#include<string.h>

struct busDetails
{
    char name[10];
    int ticketPrice;
    int timeofDep;
    char source[20];
    char destination[20];
    int seatsAvl;
};
int main(){

    struct busDetails bus[5];
    //Bus1
     strcpy(bus[0].name, "Volvo");
    bus[0].ticketPrice = 500;
    bus[0].timeofDep = 0600;
    strcpy(bus[0].source, "Chandigarh");
    strcpy(bus[0].destination, "Shimla");
    bus[0].seatsAvl = 30;
    //Bus2
    strcpy(bus[1].name, "Mercedez");
    bus[1].ticketPrice = 800;
    bus[1].timeofDep = 1300;
    strcpy(bus[1].source, "Delhi");
    strcpy(bus[1].destination, "Chandigarh");
    bus[1].seatsAvl = 28;
     //Bus3
    strcpy(bus[2].name, "Volvo");
    bus[2].ticketPrice = 600;
    bus[2].timeofDep = 0700;
    strcpy(bus[2].source, "Delhi");
    strcpy(bus[2].destination, "Agra");
    bus[2].seatsAvl = 20;
    //Bus4
    strcpy(bus[3].name, "Tata");
    bus[3].ticketPrice = 650;
    bus[3].timeofDep = 0600;
    strcpy(bus[3].source, "Delhi");
    strcpy(bus[3].destination, "Kasol");
    bus[3].seatsAvl = 25;

    char password[10]="@abc";    //Already stored in the database ...Not too advanced till now
    int mob;
    int i,j,k;
    char passWrd[10];
    printf("Welcome to Login Page \n Please verify your account \n");
    while (sizeof(mob)>=10)
    {
    printf("Enter Mobile number : ");
    scanf("%d",&mob);
    sizeof(mob)>=10 ? printf(" ") : printf("Enter correct number");
    }
    
    
    
    
    
    printf("Enter your password: ");
    scanf("%s", passWrd); 

    if (strcmp(password, passWrd) == 0) {
        printf("Password matched\nUser login Successful\n");
    } else {
        printf("Password does not match\nUser login Failed\n");
    }
    



}