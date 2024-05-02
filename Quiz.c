#include <stdio.h>
void main(){
    int sum=0,a,b,c,d,e,f,g,h,i,j,k,m;
    
    printf("How would you know your friend?\n");
    printf("What you want to do?\n PLAY/EXIT(1/0)\n ");
    scanf("%i",&a);
    
    if(a==1){
    SHASHI:
    
    printf("Q-1 What would your friend choose when it's snowing?\n 1-Ice skating\n 2-skiing\n 3-snowboarding\n 4-Curling\n");
    scanf("%i",&b);
    if(b==1){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");

    printf("Q-2 Which type of movies does your friend like?\n 1-Horror\n 2-Romance\n 3-Comedy\n 4-Thriller\n");
    scanf("%i",&c);
    if(c==4){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");
    
    printf("Q-3 When your friend is bored, what does she do?\n 1-Reads a book\n 2-Watches a movie\n 3-Calls a friend\n 4-Listens music\n");
        scanf("%i",&d);
    if(d==3){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");
    
    printf("Q-4 What is her biggest fear?\n 1-Heights\n 2-Blood\n 3-Confined spaces\n 4-Lizards\n");
    scanf("%i",&e);
    if(e==2){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");
    
     printf("Q-5 What food does she hate?\n 1-Broccoli\n 2-Cheese\n 3-Spinach\n 4-Capsicum\n");
    scanf("%i",&f);
    if(f==1){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");
    
     printf("Q-6 What app does she use most often?\n 1-Instagram\n 2-Whatsapp\n 3-Snapchat\n 4-facebook\n");
    scanf("%i",&g);
    if(g==2){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");
    
     printf("Q-7 What is her birthday month?\n 1-January\n 2-April\n 3-September\n 4-December\n");
    scanf("%i",&h);
    if(h==4){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");
    
    printf("Q-8 What will she do, if she gets 1 billion dollar?\n 1-Buys land on moon\n 2-World tour\n 3-Donate\n 4-Others\n");
    scanf("%i",&i);
    if(i==2){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");

     printf("Q-9 What is her favourite colour?\n 1-White\n 2-Black\n 3-Blue\n 4-Lavendar\n");
    scanf("%i",&j);
    if(j==2){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");
    
     printf("Q-10 What does she choose?\n 1-Money\n 2-Love\n 3-Family\n 4-Friends\n");
    scanf("%i",&k);
    if(k==3){
        printf("Correct Answer\n");
        sum++;
    }
    else printf("Wrong Answer\n");


    
    printf("RESULTS:\n Points = %d\n",sum);
    }
    
    else printf("THANK YOU\n");
    
    printf("Play Again/Exit(1/0)\n");
    scanf("%i",&m);
    if(m==1)
    goto SHASHI;
    
    else printf("good");
}