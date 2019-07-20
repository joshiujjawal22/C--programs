#include <stdio.h>
#include<string.h>
#include <time.h>
#include <conio.h>
#include <unistd.h> // for usleep function
struct kbc
{
   char q[7][2000];
   char a[7][2];
   int i;
   char ans_a[7][2000];
   char ans_b[7][2000];
   char ans_c[7][2000];
   char ans_d[7][2000];


};
int printRandoms(int lower, int upper,
                             int count)
{
    int i;
     srand(time(0));
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
       return num;
    }
}

void launch()
{
    for (int i = 0; i < 50; i ++) printf("\n"); // jump to bottom of console
    printf("              CONGRATULATIONS!! YOU HAVE GOT THE RIGHT ANSWER!!\n");



}
void launchl()
{
    for (int i = 0; i < 50; i ++) printf("\n"); // jump to bottom of console
    printf("                       HARD LUCK!! TRY AGAIN!!!\n");



}
void launche()
{
    for (int i = 0; i < 50; i ++) printf("\n"); // jump to bottom of console
    printf("                                    WELCOME TO KBC!!\n");



}
int main()
{
    struct kbc e[5];
    strcpy(e[0].q[0],"Team creativity can be promoted in which of the following ways?");
    strcpy(e[0].ans_a[0],"Establishing a competitive environment to promote creative ideas ");
    strcpy(e[0].ans_b[0],"Establishing challenges for the team");
    strcpy(e[0].ans_c[0],"Evaluating ideas during the idea generation stage");
    strcpy(e[0].ans_d[0],"Stressing deadlines to encourage intensity and focus");
    e[0].a[0][0]='a';
    e[0].a[0][1]='d';
    strcpy(e[0].q[1],"Which of the following is an effective technique for dealing with troublesome group members?");
    strcpy(e[0].ans_a[1],"Embrace their disruptive behavior ");
    strcpy(e[0].ans_b[1],"Use the same behaviors as the disruptive member to demonstrate why their behaviors are flawed");
    strcpy(e[0].ans_c[1],"Create an environment where the disruptive member does not feel welcome");
    strcpy(e[0].ans_d[1],"Confront the person directly ");
    e[0].a[1][0]='c';
    e[0].a[1][1]='d';
    strcpy(e[0].q[2],"Goals work best for building teams when");
    strcpy(e[0].ans_a[2],"they are clearly stated");
    strcpy(e[0].ans_b[2],"there are many goals to challenge the team");
    strcpy(e[0].ans_c[2],"the goals create competition within the group");
    strcpy(e[0].ans_d[2],"no goal is shared by every member on the team");
    e[0].a[2][0]='a';
    e[0].a[2][1]='c';
    strcpy(e[0].q[3],"Breaking down a problem into its constituent parts during team discussion is which of the following steps in the Standard Agenda?");
    strcpy(e[0].ans_a[3],"Criteria development ");
    strcpy(e[0].ans_b[3],"Identification of the problem");
    strcpy(e[0].ans_c[3],"Analyzing the problem");
    strcpy(e[0].ans_d[3],"Evaluating problem solutions");
    e[0].a[3][0]='b';

    e[0].a[3][1]='c';
    strcpy(e[0].q[4],"Groupthink is");
    strcpy(e[0].ans_a[4],"a process where group members gather to decide issues");
    strcpy(e[0].ans_b[4],"a process of group members stressing disagreement and skepticism");
    strcpy(e[0].ans_c[4],"a process of group members stressing cohesiveness and agreement instead of skepticism and optimum decision making");
    strcpy(e[0].ans_d[4],"a process of breaking rigid thinking by placing a problem in a different frame of reference");
    e[0].a[4][0]='a';
    e[0].a[4][1]='d';
    strcpy(e[0].q[5],"Which of the following are typically seen as being associated with strategic decisions?");
    strcpy(e[0].ans_a[5],"The organisation's long-term direction");
    strcpy(e[0].ans_b[5],"The detailed planning of a department's work over the next month");
    strcpy(e[0].ans_c[5],"The values and expectations of powerful actors in the organisation");
    strcpy(e[0].ans_d[5],"The scope of the organisation's activities");
    e[0].a[5][0]='a';
    e[0].a[5][1]='d';
    strcpy(e[0].q[6],"In question below, identify the two statements necessary to make the conclusion in the beginning of the question true.\nJonathan is swimming.");
    strcpy(e[0].ans_a[6],"Jonathan is in the pool during the winter.");
    strcpy(e[0].ans_b[6],"Jonathan is in the pool.");
    strcpy(e[0].ans_c[6],"Swimming takes place in the pool during the winter.");
    strcpy(e[0].ans_d[6],"All the boys in the pool are swimming.");
    e[0].a[6][0]='b';
    e[0].a[6][1]='d';
    //set 2




    strcpy(e[1].q[0],"What are the skills needed for data analysis ?");
    strcpy(e[1].ans_a[0],"Campaign Management");
    strcpy(e[1].ans_b[0],"Pareto");
    strcpy(e[1].ans_c[0],"Analytical and creative mind");
    strcpy(e[1].ans_d[0],"Benchmarking");
      e[1].a[0][0]='a';
    e[1].a[0][1]='c';
    strcpy(e[1].q[1],"Which of the sets of activities best indicate the cyclic nature of action research stratergy ? ");
    strcpy(e[1].ans_a[1],"Plan , act ");
    strcpy(e[1].ans_b[1],"Reflect , Observe");
    strcpy(e[1].ans_c[1],"Observe , Reflect");
    strcpy(e[1].ans_d[1],"Reflect , act");
      e[1].a[1][0]='a';
    e[1].a[1][1]='c';
    strcpy(e[1].q[2],"Choose two correct common analytical tools ");
    strcpy(e[1].ans_a[2],"Data analysis");
    strcpy(e[1].ans_b[2],"Pareto");
    strcpy(e[1].ans_c[2],"Issue tree");
    strcpy(e[1].ans_d[2],"Leave how things work");
      e[1].a[2][0]='b';
    e[1].a[2][1]='c';
    strcpy(e[1].q[3],"When you meet someone new , What is a good way to show respect ?");
    strcpy(e[1].ans_a[3],"Greet them");
    strcpy(e[1].ans_b[3],"Shake their hand");
    strcpy(e[1].ans_c[3],"Ignore them");
    strcpy(e[1].ans_d[3],"Use rude language");
      e[1].a[3][0]='b';
    e[1].a[3][1]='a';
    strcpy(e[1].q[4],"Correct way to streamline work processes are");
    strcpy(e[1].ans_a[4],"Analyse the current workflow");
    strcpy(e[1].ans_b[4],"Breakdown the process");
    strcpy(e[1].ans_c[4],"Don't think of other possible ways");
    strcpy(e[1].ans_d[4],"Focus only on one process");
      e[1].a[4][0]='b';
    e[1].a[4][1]='a';
    strcpy(e[1].q[5],"Why are analytical skills critical at work ?");
    strcpy(e[1].ans_a[5],"For identifying trends");
    strcpy(e[1].ans_b[5],"For streamlining processes");
    strcpy(e[1].ans_c[5],"For confidence build-up");
    strcpy(e[1].ans_d[5],"For data-analysis");
      e[1].a[5][0]='b';
    e[1].a[5][1]='a';
    strcpy(e[1].q[6],"Choose the two correct analytical tools");
    strcpy(e[1].ans_a[6],"Pareto");
    strcpy(e[1].ans_b[6],"Process-mapping");
    strcpy(e[1].ans_c[6],"Research");
    strcpy(e[1].ans_d[6],"Logic");
  e[1].a[6][0]='b';
    e[1].a[6][1]='a';
    //set 3





    strcpy(e[2].q[0],"Which of these is a creative skill ?");
    strcpy(e[2].ans_a[0],"Examining problems");
    strcpy(e[2].ans_b[0],"Imagination");
    strcpy(e[2].ans_c[0],"Process Mapping");
    strcpy(e[2].ans_d[0],"Benchmarking");
      e[2].a[0][0]='b';
    e[2].a[0][1]='a';
    strcpy(e[2].q[1],"First and last step in process of problem solving is ?");
    strcpy(e[2].ans_a[1],"define a problem");
    strcpy(e[2].ans_b[1],"organising the data");
    strcpy(e[2].ans_c[1],"practicing the solution");
    strcpy(e[2].ans_d[1],"design a solution");
     e[2].a[1][0]='a';
    e[2].a[1][1]='c';
    strcpy(e[2].q[2],"identify the common analytical tools");
    strcpy(e[2].ans_a[2],"For a feild analysis");
    strcpy(e[2].ans_b[2],"Identifying issue steps");
    strcpy(e[2].ans_c[2],"7-S framework");
    strcpy(e[2].ans_d[2],"Bird eye view");
     e[2].a[2][0]='c';
    e[2].a[2][1]='a';
    strcpy(e[2].q[3],"Identify bad pieces of advice about business process automation ?");
    strcpy(e[2].ans_a[3]," Once you've built out the automation ,you will never have to change it again.");
    strcpy(e[2].ans_b[3],"The bulk of your time sholud be spent on building out the automation.");
    strcpy(e[2].ans_c[3],"Building out the automation is the shortest phase of the whole project.");
    strcpy(e[2].ans_d[3],"Collaboration must extend to more than one person involved in the actual business process.");
     e[2].a[3][0]='b';
    e[2].a[3][1]='a';
    strcpy(e[2].q[4],"Which of the following are the steps to improve analytical thinking skills ?");
    strcpy(e[2].ans_a[4],"Be Observant");
    strcpy(e[2].ans_b[4],"Read Books");
    strcpy(e[2].ans_c[4],"Scatter Diagrams");
    strcpy(e[2].ans_d[4],"Fire Force Framework");
 e[2].a[4][0]='b';
    e[2].a[4][1]='a';
    strcpy(e[2].q[5],"Which of the following are typically seen as being associated with strategic decisions?");
    strcpy(e[2].ans_a[5],"The organisation's long-term direction");
    strcpy(e[2].ans_b[5],"The detailed planning of a department's work over the next month");
    strcpy(e[2].ans_c[5],"The values and expectations of powerful actors in the organisation");
    strcpy(e[2].ans_d[5],"The scope of the organisation's activities");
     e[2].a[5][0]='a';
    e[2].a[5][1]='d';
    strcpy(e[2].q[6],"Which of the following are the skills needed for cse jobs ?");
    strcpy(e[2].ans_a[6],"Mathematics");
    strcpy(e[2].ans_b[6],"Bird eye view to a problem");
    strcpy(e[2].ans_c[6],"Communication");
    strcpy(e[2].ans_d[6],"Cause and effect Diagrams");
     e[2].a[6][0]='a';
    e[2].a[6][1]='c';
    //set 4





    strcpy(e[3].q[0],"Identify the correct statement ?");
    strcpy(e[3].ans_a[0],"An even no. is divisible by 2");
    strcpy(e[3].ans_b[0]," An odd no. is divisible by 2");
    strcpy(e[3].ans_c[0],"No even is odd");
    strcpy(e[3].ans_d[0],"Sum of odd and even is always even");
     e[3].a[0][0]='a';
    e[3].a[0][1]='c';
    strcpy(e[3].q[1],"Which of these is a correct way for analytical approach to logic building ?");
    strcpy(e[3].ans_a[1],"Try to solve a logical puzzle");
    strcpy(e[3].ans_b[1],"Issue tree");
    strcpy(e[3].ans_c[1],"Learn by doing");
    strcpy(e[3].ans_d[1],"7-S Framework");
     e[3].a[1][0]='c';
    e[3].a[1][1]='a';
    strcpy(e[3].q[2],"Goals work best for building teams when");
    strcpy(e[3].ans_a[2],"they are clearly stated");
    strcpy(e[3].ans_b[2],"there are many goals to challenge the team");
    strcpy(e[3].ans_c[2],"the goals create competition within the group");
    strcpy(e[3].ans_d[2],"no goal is shared by every member on the team");
     e[3].a[2][0]='a';
    e[3].a[2][1]='c';
    strcpy(e[3].q[3],"Choose the words which are not similar to the other words in the group ?");
    strcpy(e[3].ans_a[3],"Peas");
    strcpy(e[3].ans_b[3],"Cabbage");
    strcpy(e[3].ans_c[3],"Tomato");
    strcpy(e[3].ans_d[3],"Grass");
     e[3].a[3][0]='c';
    e[3].a[3][1]='d';
    strcpy(e[3].q[4],"Groupthink is");
    strcpy(e[3].ans_a[4],"a process where group members gather to decide issues");
    strcpy(e[3].ans_b[4],"a process of group members stressing disagreement and skepticism");
    strcpy(e[3].ans_c[4],"a process of group members stressing cohesiveness and agreement instead of skepticism and optimum decision making");
    strcpy(e[3].ans_d[4],"a process of breaking rigid thinking by placing a problem in a different frame of reference");
     e[3].a[4][0]='a';
    e[3].a[4][1]='d';
    strcpy(e[3].q[5],"Which of these skills are essential for analytical skills ?");
    strcpy(e[3].ans_a[5],"Communication");
    strcpy(e[3].ans_b[5],"Bird eye view to a problem");
    strcpy(e[3].ans_c[5],"Applying concepts");
    strcpy(e[3].ans_d[5],"Research");
     e[3].a[5][0]='a';
    e[3].a[5][1]='d';
    strcpy(e[3].q[6],"What are the correct statements under deductive reasoning ?");
    strcpy(e[3].ans_a[6],"Logical process , conclusion based on multiple problems");
    strcpy(e[3].ans_b[6],"Logical process , conclusion based on specific problems");
    strcpy(e[3].ans_c[6]," Basic form of valid reasoning");
    strcpy(e[3].ans_d[6],"Logical process with an incomplete set of observations");
     e[3].a[6][0]='a';
    e[3].a[6][1]='c';
    //set 5





    strcpy(e[4].q[0],"Which of these is a communication skill ?");
    strcpy(e[4].ans_a[0],"talking at the same time as someone else.");
    strcpy(e[4].ans_b[0],"listening to what people say.");
    strcpy(e[4].ans_c[0],"putting your fingers in your ears");
    strcpy(e[4].ans_d[0],"talking clearly.");
     e[4].a[0][0]='b';
    e[4].a[0][1]='d';
    strcpy(e[4].q[1],"Which of the following is an effective technique for dealing with troublesome group members?");
    strcpy(e[4].ans_a[1],"Embrace their disruptive behavior ");
    strcpy(e[4].ans_b[1],"Use the same behaviors as the disruptive member to demonstrate why their behaviors are flawed");
    strcpy(e[4].ans_c[1],"Create an environment where the disruptive member does not feel welcome");
    strcpy(e[4].ans_d[1],"Confront the person directly ");
     e[4].a[1][0]='c';
    e[4].a[1][1]='d';
    strcpy(e[4].q[2],"Which of these is a correct way to solve a problem ?");
    strcpy(e[4].ans_a[2],"Birds eye view to a problem.");
    strcpy(e[4].ans_b[2],"Breaking a large problem into smaller parts.");
    strcpy(e[4].ans_c[2],"Focusing on a simpler problem.");
    strcpy(e[4].ans_d[2],"Just find the solution by not knowing how exactly things work.");
     e[4].a[2][0]='b';
    e[4].a[2][1]='a';
    strcpy(e[4].q[3],"Breaking down a problem into its constituent parts during team discussion is which of the following steps in the Standard Agenda?");
    strcpy(e[4].ans_a[3],"Criteria development ");
    strcpy(e[4].ans_b[3],"Identification of the problem");
    strcpy(e[4].ans_c[3],"Analyzing the problem");
    strcpy(e[4].ans_d[3],"Evaluating problem solutions");
         e[4].a[3][0]='c';
    e[4].a[3][1]='d';
    strcpy(e[4].q[4],"Positive self talk is :-");
    strcpy(e[4].ans_a[4],"Bragging.");
    strcpy(e[4].ans_b[4],"Self-Defeating.");
    strcpy(e[4].ans_c[4],"Saying positive things about yourself to yourself.");
    strcpy(e[4].ans_d[4],"Having positive attitude.");
     e[4].a[4][0]='c';
    e[4].a[4][1]='d';
    strcpy(e[4].q[5],"Why is brain-storming important ?");
    strcpy(e[4].ans_a[5]," improves critical thinking.");
    strcpy(e[4].ans_b[5],"improves problem solving skills of an individual");
    strcpy(e[4].ans_c[5],"helps determining problem.");
    strcpy(e[4].ans_d[5],"helps focussing on single solution.");
     e[4].a[5][0]='d';
    e[4].a[5][1]='a';
    strcpy(e[4].q[6],"In question below, identify the two statements necessary to make the conclusion in the beginning of the question true.\nJonathan is swimming.");
    strcpy(e[4].ans_a[6],"Jonathan is in the pool during the winter.");
    strcpy(e[4].ans_b[6],"Jonathan is in the pool.");
    strcpy(e[4].ans_c[6],"Swimming takes place in the pool during the winter.");
    strcpy(e[4].ans_d[6],"All the boys in the pool are swimming.");
     e[4].a[6][0]='b';
    e[4].a[6][1]='d';
    char an[2],cr[2];

    int x=0,c=0;
    name: x=0;

    c=0;
    long int amount=0;
    x=printRandoms(0,4,1);
    char p;
    printf("\n\n                                        WELCOME TO KBC!!Press Enter!!");
    p=getch();
    launche();
    while(c!=99)
    {
       system("cls");
       printf("---------------------------------------KBC---------------------------------------\n");
      if(c!=0)  printf("                              AMOUNT IN BANK-%d\n",amount);
    printf("QUESTION NO %d IS - ",c+1);
    printf("%s\n",e[x].q[c]);
    printf("YOUR OPTIONS ARE-\n");
    printf("A - %s\n",e[x].ans_a[c]);
    printf("B - %s\n",e[x].ans_b[c]);
    printf("C - %s\n",e[x].ans_c[c]);
    printf("D - %s\n",e[x].ans_d[c]);
    printf("Enter First Answer-");
    scanf("%c",&an[0]);
    fflush(stdin);
      printf("Enter Second Answer-");
    scanf("%c",&an[1]);
    fflush(stdin);
    cr[0]=e[x].a[c][0];
    cr[1]=e[x].a[c][1];

    if(c==6)
       {
         printf("\n\n\n\n\n   \n\n\n\n\n                                    CONGRATS!! YOU HAVE COMPLETED THE KBC QUIZ\n                \n\n\n\n\n                       YOU WON RS. %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",amount);
         break;
       }
    if(an[0]==cr[0])
    {
        if(an[1]==cr[1])
        {
            amount=10000+(amount*10);
            launch();
            c++;
            //winner();
        }
         else
    {
        //loser();
        launchl();
        if(c==0)
        {
            printf("\n\n\n\n\n                                    OOH!!! INCORRECT ANSWER\n                                    YOU WON RS. 0\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        else
             printf("\n\n\n\n\n                                    OOH!!! INCORRECT ANSWER\n                                    YOU WON RS. %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",amount);
        c=99;
    }
    }
    else if(an[0]==cr[1])
    {
        if(an[1]==cr[0])
        {
           amount=amount+(amount*10);
            launch();
            c++;
           // winner();
        }
         else
    {
        //loser();
        launchl();
        if(c==0)
        {
            printf("\n\n\n\n\n                                    OOH!!! INCORRECT ANSWER\n                                    YOU WON RS. 0\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        else
             printf("\n\n\n\n\n                                    OOH!!! INCORRECT ANSWER\n                                    YOU WON RS. %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",amount);
        c=99;
    }
    }
    else
    {
        //loser();
        launchl();
        if(c==0)
        {
            printf("\n\n\n\n\n                                    OOH!!! INCORRECT ANSWER\n                                    YOU WON RS. 0\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        else
             printf("\n\n\n\n\n                                    OOH!!! INCORRECT ANSWER\n                                    YOU WON RS. %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",amount);
        c=99;
    }

    }



    return 0;
}

