#include <stdio.h>

int main() {
    char labName[50];
    int computers, networkDevices, securityTools;
    float costPerComputer, costPerDevice, softwareCost;
    float computerCost, networkCost, totalLabInvestment;

    // Input
    printf("Enter Lab Name: ");
    scanf(" %[^\n]", labName);

    printf("Enter Number of Computers: ");
    scanf("%d", &computers);

    printf("Enter Number of Network Devices: ");
    scanf("%d", &networkDevices);

    printf("Enter Number of Security Tools: ");
    scanf("%d", &securityTools);

    printf("Enter Cost per Computer: ");
    scanf("%f", &costPerComputer);

    printf("Enter Cost per Network Device: ");
    scanf("%f", &costPerDevice);

    printf("Enter Annual Security Software Cost: ");
    scanf("%f", &softwareCost);

    // Processing
    computerCost = computers * costPerComputer;
    networkCost = networkDevices * costPerDevice;
    totalLabInvestment = computerCost + networkCost + softwareCost;

    // Output
    printf("\n========================================\n");
    printf("       CYBERSECURITY LAB REPORT\n");
    printf("========================================\n");
    printf("Lab Name              : %s\n", labName);
    printf("Computers             : %d\n", computers);
    printf("Network Devices       : %d\n", networkDevices);
    printf("Security Tools        : %d\n", securityTools);
    printf("Computer Cost         : %.2f\n", computerCost);
    printf("Network Device Cost   : %.2f\n", networkCost);
    printf("Software Cost         : %.2f\n", softwareCost);
    printf("----------------------------------------\n");
    printf("Total Lab Investment  : %.2f\n", totalLabInvestment);
    printf("----------------------------------------\n");
    printf("========================================\n");

    return 0;
}
