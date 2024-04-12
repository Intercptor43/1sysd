#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct step step;
struct step {
    long double x, y;
    step *next;
};

step *create_step(long double x, long double y) {
    step *newstep;

    newstep = malloc(sizeof(step));

    newstep->x = x;
    newstep->y = y;
    newstep->next = NULL;

    return newstep;
}

void show_path(step *head) {
    step *walk = head;
    int n = 0;

    while (walk) {
        printf("Step %d : (%.2Lf, %.2Lf)\n", n, walk->x, walk->y);
        n++;
        walk = walk->next;
    }
}

step *insert_step(step *head,  long double x, long double y) {
    step *walk = head, *newstep;

    newstep = create_step(x, y);

    if (head == NULL) {
        newstep->next = head;
        head = newstep;
    } else {
        while (walk->next != NULL) {
            walk = walk->next;
        }
        walk->next = newstep;
    }
    return head;
}

long double path_length(step *head) {
    step *walk = head;
    long double length = 0.0;

    while (walk->next != NULL) {
        length += sqrtl(powl(walk->next->x - walk->x, 2) + powl(walk->next->y - walk->y, 2));
        walk = walk->next;
    }

    return length;
}

int main() {
    step *head = NULL;

    head = insert_step(head, 1.0, 2.0);
    head = insert_step(head, 3.0, 1.0);
    head = insert_step(head, 4.5, 3.2);
    head = insert_step(head, 2.1, 4.0);

    show_path(head);

    printf("Longueur du chemin: %.6Lf\n", path_length(head));

    exit(EXIT_SUCCESS);
}
