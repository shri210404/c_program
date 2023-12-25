#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float L1, L2, G1, G2, distance, distance_km, distance_nm, dL, dG;

    
    printf("Enter the co-ordinate of first place: ");
    scanf("%f %f", &L1, &G1);

    printf("Enter the co-ordinate of second place: ");
    scanf("%f %f", &L2, &G2);

   
    L = L2-L1;
    G = G2-G1;

    distance = sqrt((L*L)+(G)*(G));
    distance_km = distance*100;

    printf("The distance between two place in kilometer: %f", distance_km);
    distance_nm = distance_km/1.852;
    printf("\nThe distance between two place in nautical miles: %f", distance_nm);

    return 0;
}
