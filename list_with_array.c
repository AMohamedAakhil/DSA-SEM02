// List implementation using arrays

#include <stdio.h>

int addition();
int insertion();
int deletion();
int display();

int a[10] = {1, 2, 3, 4, 5};

int main() {
    int x;
    int count = 0;

    for (int i=0; i<10; i++) {
        if (a[i] != '\0') {
            count++;
        }
    }

    printf("\n Your choice: \n1. Addition \n2.Insertion \n3.Deletion \n4.Display - \n");
    scanf("%d", &x);

    printf("\nSelection is %d", x);

    switch(x) {
        case 1: {
            addition(count);
        }
        case 2: {
            insertion(count);
        }
        case 3: {
            deletion(count);
        }
        case 4: {
            display(count);
        }
        case 5: {
            printf("Exiting program");
        }

    }

    return 0;

}

int addition(int count) {
    int n;
    printf("\nAvailable Space is %d", 10-count);
    printf("Enter Number of Elements in Array to be Added");
    scanf("%d", &n);

    if (n>10-count) {
        printf("\nSize too large");
    }
    else {
        printf("Enter Elements: ");
        for (int i=count; i<count+n; i++) {
            scanf("%d", &a[i]);
        }
        printf("Created Successfully");
    }

    main();
}

int insertion(int count) {
    int pos, value;
    printf("Enter the position where the element is to be inserted: ");
    scanf("%d", &pos);

    if (pos>count+1) {
        printf("Invalid Position");
    }
    else {
        printf("Enter element to be inserted: ");
        scanf("%d", &value);

        for (int i=count; i>=pos-1; i--) {
            a[i+1] = a[i];
        }
        a[pos-1] = value;
        printf("Inserted Element Successfully");
    }

    main();
}

int deletion(int count) {
    int pos;
    printf("Enter the position where the element needs to be deleted");
    scanf("%d", &pos);

    if (pos>count+1) {
        printf("Invalid Location Entered.");
    }
    else {
        for (int i=pos; i<count; i++) {
            a[i-1] = a[i];
        }
        count = count - 1;
        printf("Deletion done successfully!");
    }

    main();
}

int display(int count) {
    for (int i=0; i<count; i++) {
        printf("\t%d", a[i]);
    }

    main();
}