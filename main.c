#include <stdio.h>
#include <stdlib.h>
void intense_scan(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -T4 -A -v %s",ip_adress);
    system(command);
}
void intense_scan_plus_UDP(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -sS -sU -T4 -A -v %s",ip_adress);
    system(command);
}
void intense_scan_all_TCP_ports(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -p 1-65535 -T4 -A -v %s",ip_adress);
    system(command);
}
void intense_scan_no_ping(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -T4 -A -v -Pn %s",ip_adress);
    system(command);
}
void ping_scan(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -sn %s" ,ip_adress);
    system(command);
}
void quick_scan(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -T4 -F %s",ip_adress);
    system(command);

}
void quick_scan_plus(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -sV -T4 -O -F --version-light %s" ,ip_adress);
    system(command);
}
void quick_traceroute(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -sn --traceroute %s",ip_adress);
    system(command);
}
void regular_scan(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap %s",ip_adress);
    system(command);
}
void slow_comphensive_scan(char ip_adress[512]) {
    char command[512];
    snprintf(command,sizeof(command),"nmap -sS -sU -T4 -A -v -PE -PP -PS80,443 -PA3389 -PU40125 -PY -g 53 --script 'default or (discovery and safe)' %s" ,ip_adress);
    system(command);
}

int main() {
    char ip_adress[512];
    int option;
    system("clear");
    printf("      __                           ___   __   _____ \n");
    printf("  /\\ \\ \\_ __ ___   __ _ _ __     / __\\ / /   \\_   \\\n");
    printf(" /  \\/ / '_ ` _ \\ / _` | '_ \\   / /   / /     / /\\/\n");
    printf("/ /\\  /| | | | | | (_| | |_) | / /___/ /___/\\/ /_  \n");
    printf("\\_\\ \\/ |_| |_| |_|\\__,_| .__/  \\____/\\____/\\____/  \n");
    printf("                       |_|                         \n");
    printf("------------------------------------------------------------ \n");
    printf("--------------------------OPTIONS-------------------------- \n");
    printf("----------------------------------------------------------- \n");
    printf("1: INTENSE SCAN \n");
    printf("2: INTENSE SCAN PLUS UDP\n");
    printf("3 : INTENSE SCAN ALL TCP PORTS\n");
    printf("4 : INTENSE SCAN NO PING\n");
    printf("5 : PING SCAN\n");
    printf("6 : QUICK SCAN\n");
    printf("7 : QUICK SCAN PLUS\n");
    printf("8 : QUICK TRACEROUTE\n");
    printf("9 : REGULAR SCAN\n");
    printf("10 : SLOW COMPHENSIVE SCAN\n");
    printf("11 :QUIT NMAP\n");
    printf("Please enter IP adress :");
    scanf("%511s",ip_adress);
    while (1) {
        printf("Enter OPTION: ");
        scanf("%d",&option);
        if (option == 1) {
            intense_scan(ip_adress);
        }
        else if(option == 2){
            intense_scan_plus_UDP(ip_adress);
        }
        else if(option == 3) {
            intense_scan_all_TCP_ports(ip_adress);
        }
        else if(option == 4) {
            intense_scan_no_ping(ip_adress);

        }
        else if(option == 5) {
            ping_scan(ip_adress);
        }
        else if(option == 6) {
            quick_scan(ip_adress);
        }
        else if(option == 7) {
            quick_scan_plus(ip_adress);
        }
        else if (option == 8) {
            quick_traceroute(ip_adress);
        }
        else if (option == 9) {
            regular_scan(ip_adress);
        }
        else if (option == 10) {
            slow_comphensive_scan(ip_adress);
        }
        else if (option == 11) {
            exit(0);
        }
        else {
         printf("Invalid option");
        }
        }
    }
