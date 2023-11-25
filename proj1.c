#include<stdio.h>
int main(){
    int game ,points=0 ;
    int ans1,ans2,ans3,ans4,ans5;
    printf("Press 0 or 1 to play or quit the game : ");
    scanf("%d",&game);
    if (game==1)
    {
        printf("Game has begun \n");
        printf("5 points for Right answer , -2 for wrong Answers\n");
    }else if (game==0)
    {
        printf("Game has ended \n");
    }else{
        printf("Invalid input\n");
    }
    

    if (game==1)
    {
        printf("Q1.What is the capital of indonesia ? \n");
        printf("1.Jakarta \n");
        printf("2.Bokaro \n");
        printf("3.Taiwan \n");
        printf("4.Singapore \n");

        printf("Enter your answer : ");
        scanf("%d",&ans1);
        if (ans1==1)
        {
            printf("Correct answer !!");
            points=points+5;
        }else{
            printf("Wrong Answer \n");
            points=points-2;
        }
        printf("Points :%d \n",points);

        printf("Q2.Kyrie irving is associated with which proffesional sport ? \n");
        printf("1.Football \n");
        printf("2.FMX \n");
        printf("3.Basketball \n");
        printf("4.MMA \n");

        printf("Enter your answer : ");
        scanf("%d",&ans2);
        if (ans2==3)
        {
            printf("Correct answer !!\n");
            points=points=5;
        }else{
            printf("Wrong Answer \n");
            points=points-2;
        }
        printf("Points:%d \n",points);

        printf("Q3.David gilmour is a famous ? \n");
        printf("1.pionist \n");
        printf("2.painter \n");
        printf("3.actor \n");
        printf("4.guitarist \n");

        printf("Enter your answer : ");
        scanf("%d",&ans3);
        if (ans3==4)
        {
            printf("Correct answer !!\n");
            points=points+5;
        }else{
            printf("Wrong Answer \n");
            points=points-2;
        }
        printf("Points:%d \n",points);
        printf("Q4.Who is the CEO of microsoft in 2023 ? \n");
        printf("1.Sundar Pichai \n");
        printf("2.Satya Nadela \n");
        printf("3.Naval Ravikant \n");
        printf("4.John Jones \n");

        printf("Enter your answer : ");
        scanf("%d",&ans4);
        if (ans4==2)
        {
            printf("Correct answer !!\n");
            points=points+5;
        }else{
            printf("Wrong Answer \n");
            points=points-2;
        }
        printf("Points:%d \n",points);

        printf("Q5.Zero was invented by ? \n");
        printf("1.Aristotle \n");
        printf("2.Isaac Newton \n");
        printf("3.Imanuel kant \n");
        printf("4.Arya bhatt \n");

        printf("Enter your answer : ");
        scanf("%d",&ans5);
        if (ans5==4)
        {
            printf("Correct answer !!\n");
            points=points+5;
        }else{
            printf("Wrong Answer \n");
            points=points-2;
        }
        printf("Points:%d \n",points);

        printf("Quiz Finished \n");
        printf("Your score was %d \n",points);
        if (points>=12)
        {
            printf("Well Done ! \n");
        }else{
            printf("Explore the world a bit more");
        }
        
    }
    
    
    


    return 0;

}