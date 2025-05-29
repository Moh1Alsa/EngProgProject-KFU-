#include <stdio.h>

int main() {
    float length;
    float load;
    float position;
    float reaction1;
    float reaction2;

    // this is the program header mentioning the purpose and who made it
    printf("===================================================================================================\n");
    printf("\n                                     Simple Beam Analysis Program                \n");
    printf("\n                   By: Mohammed Alsaeed, Abdulhrman Alhemil, Mubarak Alali\n");
    printf("===================================================================================================\n");

    // this step to get the beam values from the user and see if they are valid
    printf("Enter beam length in (m): ");
    scanf("%f", &length);
    while (length <= 0) {
        printf("Warning: Length must be positive\n");
        printf("Enter beam length in (m): ");
        scanf("%f", &length);
    }
    printf("Enter load in (N): ");
    scanf("%f", &load);
    while (load <= 0) {
        printf("Warning: Load must be positive\n");
        printf("Enter load in (N): ");
        scanf("%f", &load);
    }
    printf("Enter load position in (m): ");
    scanf("%f", &position);
    while (position <= 0 || position >= length) {
        printf("Warning: Position must be between 0 and beam length %.2f m\n", length);
        printf("Enter load position in (m): ");
        scanf("%f", &position); 
    }

    // this step to calculate the reactions and deffine formuals
    reaction1 = (load * (length - position)) / length;
    reaction2 = (load * position) / length;

    // this step to display the results
    printf("\nResults:\n");
    printf("Beam Length: %.2f m\n", length);
    printf("Load Magnitude: %.2f N\n", load);
    printf("Load Position: %.2f m\n", position);
    printf("\nReactions:\n");
    printf("Reaction 1 (left support): %.2f N\n", reaction1);
    printf("Reaction 2 (right support): %.2f N\n", reaction2);

    // this step to compare the reactions and see which one is carrying more load
    if (reaction1 > reaction2) {
        printf("\nSupport 1 is carrying more load.\n");
    } else if (reaction2 > reaction1) {
        printf("\nSupport 2 is carrying more load.\n");
    } else {
        printf("\nBoth supports are carrying equal load.\n");
    }
    printf("===================================================================================================\n");
    printf("\n                           Thank you for using the Beam Analysis Program\n");
    printf("\n  This Simple Program was made By : Mohammed Alsaeed, Abdulhrman Alhemil, Mubarak Alali\n");
    printf("\n                             Instructed By : Dr. Abdul Raouf Khan\n");
    printf("\n                    Mechanical Engineering Students at King Faisal University\n");
    printf("===================================================================================================\n");
    return 0;
}
