#include<stdio.h>
main()
{
    int r,area,circumference;
    scanf("%d",&r);
    area=3.14*r*r;
    circumference=3.14*2*r;
    if(area==circumference)
    printf("Green's Theorem is valid for r=%d",r);
    else printf("Green's Theorem is invalid for r=%d",r);
    return 0;

}