#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include<dos.h>


struct Bus_Detail
{
    int Bus_no;
    char Route[100];
    int Seat[30];
};


void Graphics_Menu();
void Draw_Seats_Graphics(int Seat[]);
int View_Bus(int *Bus_no, int *Seat, char *Route);
int Book_Ticket(int *Bus_no, int *Seat, char *Route, FILE *fptr);
int Cancel_Ticket(int *Bus_no, int *Seat, char *Route);


void Graphics_Menu()
{
    int gd, gm;

    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setfillstyle(SOLID_FILL, BLUE);
    bar(0, 0, getmaxx(), 80);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(WHITE);
    outtextxy(120, 25, "BUS RESERVATION SYSTEM");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(YELLOW);
    outtextxy(150, 140, "1. View Bus Detail");
    outtextxy(150, 190, "2. Book Ticket");
    outtextxy(150, 240, "3. Cancel Ticket");
    outtextxy(150, 290, "4. Exit");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    setcolor(WHITE);
    outtextxy(120, 360, "Enter your choice in console window");

    getch();
    closegraph();
}



void Graphics_Menu_0()
{
    int gd, gm;

    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setfillstyle(SOLID_FILL, BLUE);
    bar(0, 0, getmaxx(), 80);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(WHITE);
    outtextxy(120, 25, "BUS RESERVATION SYSTEM");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(YELLOW);
    outtextxy(150, 140, "1. Nagpur To Pune");
    outtextxy(150, 190, "2. Nashik To Pune");
    outtextxy(150, 240, "3. Nanded To Pune");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    setcolor(WHITE);
    outtextxy(120, 360, "Enter your choice in console window");

    getch();
    closegraph();
}


void Draw_Seats_Graphics(int Seat[])
{
    int x, y;
    int seatNo;
    int row, col;
    char num[5];

    x = 100;
    y = 150;
    seatNo = 0;

    cleardevice();
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(180, 50, "BUS SEAT LAYOUT");

    for (row = 0; row < 6; row++)
    {
        x = 100;
        for (col = 0; col < 5; col++)
        {
            if (seatNo >= 30)
                break;

            if (Seat[seatNo] == 0)
                setfillstyle(SOLID_FILL, GREEN);
            else
                setfillstyle(SOLID_FILL, RED);

            bar(x, y, x + 60, y + 40);
            rectangle(x, y, x + 60, y + 40);

            sprintf(num, "%d", seatNo + 1);
            outtextxy(x + 20, y + 12, num);

            x = x + 80;
            seatNo++;
        }
        y = y + 60;
    }

    outtextxy(100, 520, "GREEN = Available");
    outtextxy(350, 520, "RED = Booked");
}


int View_Bus(int *Bus_no, int *Seat, char *Route)
{
    int gd, gm;
    int i;

    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("\nBus Number : %d\n", *Bus_no);
    printf("Bus Route  : %s\n\n", Route);

    for (i = 0; i < 30; i++)
    {
        if (Seat[i] == 0)
            printf("Seat %d : Vacant\t", i + 1);
        else
            printf("Seat %d : Booked\t", i + 1);

        if ((i + 1) % 4 == 0)
            printf("\n");
    }

    Draw_Seats_Graphics(Seat);

    getch();
    closegraph();
    return 0;
}


int Book_Ticket(int *Bus_no, int *Seat, char *Route, FILE *fptr)
{
    int seat_num;
    char name[50];

    getchar();
    printf("Enter your name: ");
    gets(name);   


    printf("Enter seat number (1-30): ");
    scanf("%d", &seat_num);

    if (seat_num < 1 || seat_num > 30)
    {
        printf("Invalid seat number!\n");
        return 0;
    }

    if (Seat[seat_num - 1] == 1)
    {
        printf("Seat already booked!\n");
        return 0;
    }

    Seat[seat_num - 1] = 1;


 fptr = fopen("bus_reservation.txt", "a");

if (fptr == NULL)
{
    printf("ERROR: File not opened!\n");
    getch();
    return 0;
}

fprintf(fptr, "Route : %s\n", Route);
fprintf(fptr, "Bus No: %d\n", *Bus_no);
fprintf(fptr, "Name  : %s\n", name);
fprintf(fptr, "Seat  : %d\n", seat_num);
fprintf(fptr, "----------------------\n");

fflush(fptr);
fclose(fptr);


    printf("\nTicket booked successfully!\n");
    return 0;
}


int Cancel_Ticket(int *Bus_no, int *Seat, char *Route)
{
    int seat_num;

    printf("Enter seat number to cancel: ");
    scanf("%d", &seat_num);

    if (seat_num < 1 || seat_num > 30)
    {
        printf("Invalid seat number!\n");
        return 0;
    }

    if (Seat[seat_num - 1] == 0)
    {
        printf("Seat is not booked!\n");
        return 0;
    }

    Seat[seat_num - 1] = 0;
    printf("Ticket cancelled successfully!\n");
    return 0;
}


int main()
{
    int i,a;
    int Choice;
    int choice;
    FILE *fptr;


    

    struct Bus_Detail Bus_1[3];


    sound(400); delay(300);
    sound(500); delay(300);
    sound(600); delay(300);
    sound(700); delay(300);
    nosound();


    Bus_1[0].Bus_no=101;
    strcpy(Bus_1[0].Route,"Nagpur to Pune");


    Bus_1[1].Bus_no=102;
    strcpy(Bus_1[1].Route,"Nashik to Pune");


    Bus_1[2].Bus_no=103;
    strcpy(Bus_1[2].Route,"Nanded to Pune");


    for(a=0;a<30;a++)
    {
        Bus_1[0].Seat[a]=0;
        Bus_1[1].Seat[a]=0;
        Bus_1[2].Seat[a]=0;
    }

    

    while (1)
    {
        Graphics_Menu_0();
        printf("Enter which Bus you want\n");
        scanf("%d",&choice);
        choice=choice-1;


        if(choice < 0 || choice > 2)
    {
        printf("Invalid bus choice\n");
        continue;
    }


        Graphics_Menu(); 

        printf("\nEnter your choice: ");
        scanf("%d", &Choice);

        switch(Choice)
        {
            case 1:{
                View_Bus(&Bus_1[choice].Bus_no, Bus_1[choice].Seat, Bus_1[choice].Route);
                break;
            }

            case 2:
            {
                Book_Ticket(&Bus_1[choice].Bus_no, Bus_1[choice].Seat, Bus_1[choice].Route,fptr);
                break;
            }

            case 3:
            {
                Cancel_Ticket(&Bus_1[choice].Bus_no, Bus_1[choice].Seat, Bus_1[choice].Route);
                break;
            }

            case 4:
            {
                exit(0);
            }

            default:
            {
                printf("Enter the valid Choice;\n");
            }
        }
    }
}
