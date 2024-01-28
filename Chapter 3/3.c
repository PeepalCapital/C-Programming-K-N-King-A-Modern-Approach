#include <stdio.h>

int main(void)
{
    int gs1, gid, pub, itno, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &gid, &pub, &itno, &check);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", gid);
    printf("Publisher code: %d\n", pub);
    printf("Item number: %d\n", itno);
    printf("Check digit: %d\n", check);

    return 0;
}
