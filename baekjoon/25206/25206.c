#include <stdio.h>
#include <string.h>

struct subject {
    char name[60];
    double credit;
    char rating[5];
};

struct Nrating {
    char str[5];
    double rating;
};

int main(void) {
    struct subject chihun[20];
    struct Nrating N[10] = { {"A+",4.5},{"A0",4.0},{"B+",3.5},{"B0",3.0},
                            {"C+",2.5},{"C0",2.0},{"D+",1.5},{"D0",1.0},
                            {"F",0.0}, {"P",0.0} };

    double total = 0.0;
    double total_credit = 0.0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", chihun[i].name, &chihun[i].credit, chihun[i].rating);
        for (int j = 0; j < 9; j++) {
            if (0 == strcmp(chihun[i].rating, N[j].str)) {
                total_credit += chihun[i].credit;
                total += (chihun[i].credit * N[j].rating);
                break;
            }
        }
    }

    printf("%.12f", total/total_credit);
    return 0;
}