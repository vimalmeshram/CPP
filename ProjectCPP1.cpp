#include <stdio.h>
#include <string.h>
#include <conio.h> 


struct user {
    int user_id;
    char name[20];
    char mob[20];
    char occupation[20];
} u1[5];

void addUser() {
    for (int i = 0; i < 5; i++) {
        u1[i].user_id = i + 1;
        printf("Name: ");
        scanf("%s", u1[i].name);
        printf("Mobile number: ");
        scanf("%s", u1[i].mob);
        printf("Occupation: ");
        scanf("%s", u1[i].occupation);
    }
    printf("User added Successfully \n");
}

void display() {
    for (int i = 0; i < 5; i++) {
        if (u1[i].user_id != -1) { 
            printf("User ID: %d\n", u1[i].user_id);
            printf("Name: %s\n", u1[i].name);
            printf("Mobile number: %s\n", u1[i].mob);
            printf("Occupation: %s\n", u1[i].occupation);
            printf("\n");
        }
    }
}

void update() {
    int alpha, i;
    printf("Enter User ID to update: ");
    scanf("%d", &i);
    i--; 
    if (i >= 0 && i < 5 && u1[i].user_id != -1) { 
        printf("What do you want to update?\n");
        printf("1: Name \n");
        printf("2: Mobile number \n");
        printf("3: Occupation \n");

        scanf("%d", &alpha);
        switch (alpha) {
            case 1:
                printf("Enter new name: ");
                scanf("%s", u1[i].name);
                break;
            case 2:
                printf("Enter new mobile number: ");
                scanf("%s", u1[i].mob);
                break;
            case 3:
                printf("Enter new occupation: ");
                scanf("%s", u1[i].occupation);
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
        printf("Updated details:\n");
        printf("Name: %s\n", u1[i].name);
        printf("Mobile number: %s\n", u1[i].mob);
        printf("Occupation: %s\n", u1[i].occupation);
    } else {
        printf("Invalid User ID! Try again.\n");
    }
}

void deleteUser() {
    int i;
    printf("Enter User ID to delete: ");
    scanf("%d", &i);
    i--; 
    if (i >= 0 && i < 5 && u1[i].user_id != -1) { 
        u1[i].user_id = -1; 
        printf("User deleted successfully\n");
    } else {
        printf("Invalid User ID! Try again.\n");
    }
}

int main() {
    char username[20];
    char password[20];
    char s1[20];
    char p1[20];
    char ch;
    int j, choice;

    printf("Welcome To Admin Section\n");

    printf("Set Username: ");
    scanf("%s", s1);
    printf("Set Password: ");

    j = 0;
    while ((ch = getch()) != 13) { 
        p1[j++] = ch;
        printf("*");
    }
    p1[j] = '\0'; 
    printf("\n");

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    
    j = 0;
    while ((ch = getch()) != 13) { 
        password[j++] = ch;
        printf("*");
    }
    password[j] = '\0'; 
    printf("\n");

    if (strcmp(username, s1) == 0 && strcmp(password, p1) == 0) {
        printf("Login Successful\n");

        do {
            printf("Select one option from below:\n");
            printf("1: Add New User \n");
            printf("2: Display Users \n");
            printf("3: Update Existing User \n");
            printf("4: Delete User \n");
            printf("5: Exit \n");

            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    addUser();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    update();
                    break;
                case 4:
                    deleteUser();
                    break;
                case 5:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid choice! Try again.\n");
            }
        } while (choice != 5);
    } else {
        printf("Retry\n");
    }

   
}

