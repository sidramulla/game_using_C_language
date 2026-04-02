#include <stdio.h>
// #include <stdlib.h>

// structure to store level information
struct Level
{
    char story[200];
    char option1[100];
    char option2[100];
    int correctChoice;              // correct option
    char wrongchoicestatement[200]; // print this statement if the chioice is wrong
};

int main()
{
    system("chcp 65001"); //sets system to utf-8 lets us use emojis and symbols 
    int lives = 3;
    int choice;

    // array of structures (levels)
    struct Level levels[5] =
        {//  story .......................   choice.......               choice2..........       correctchoice....   wrong choice statement....
         {"You enter a spooky forest...", "Follow glowing mushrooms", "Follow strange noises", 1, "While following strange noises you tripped and fell!"},
         {"A monkey blocks your path!", "Give banana", "Dance battle", 1, "OH NO! the monkey kicked you cause he doesn't like dancing!"},
         {"You find a mysterious pond.", "Drink water", "Skip stones", 2, "THE WATER WAS POISONOUS!"},
         {"A wizard appears!", "Ask for help", "Challenge wizard", 1, "It's a wizard why would you challenge him , ofc you lost!!!!!"},
         {"Final challenge: Giant wolf!", "Throw food", "Run away screaming", 1, "The wolf thinks you are a coward and attacked you!"}};

    printf(" FOREST ADVENTURE GAME \n\n");
    printf("(⊙﹏⊙) YOU HAVE ENTERRED A DARK FOREST!(⊙﹏⊙)\n <3 You start with %d lives.Enter either 1 or 2 as answer. <3\n MAKE THE RIGHT CHOICES TO SURVIVE \n\n", lives);

    // loop through all levels
    for (int i = 0; i < 5; i++)
    {
        printf("LEVEL %d\n", i + 1);
        printf("%s\n", levels[i].story);

        printf("1. %s\n", levels[i].option1);
        printf("2. %s\n", levels[i].option2);

        printf("Enter choice: ");
        scanf("%d", &choice);

        // check if player picked correct option
        if (choice == levels[i].correctChoice)
        {
            printf(" ✓✓✓✓✓  Good choice! You survive. ✓✓✓✓✓\n\n");
        }
        else
        {
            lives--;
            printf("✗✗✗✗ Oops! Wrong choice.✗✗✗✗ Lives left: %d\n\n", lives);
            printf("%s\n\n", levels[i].wrongchoicestatement);

            if (lives == 0)
            {
                printf(" ☹️☹️☹️Game Over! The forest wins.☹️☹️☹️\n");
                return 0;
            }
        }
    }

    printf(" Congratulations! You escaped the forest with %d lives!\n", lives);
    printf("\n================================\n");
    printf("        CONGRATULATIONS\n");
    printf("           YOU WIN\n");
    printf("================================\n\n");

    printf("      \\o/      \\o/      \\o/\n");
    printf("       |        |        |\n");
    printf("      / \\      / \\      / \\\n");

    return 0;
}