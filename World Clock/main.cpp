#include<stdio.h>
#include<time.h>
#include<graphics.h>
#include<conio.h>

int gd=0, gm, n, hr=0, mn=0, sc=0;
struct tm *currentTime;
char a[100];
time_t t;

void myTime_digital();
int worldTime_hour();
int worldTime_min();
void myTime_analog();

int worldTime_min()
{
    if(n==30)
        return 30;
    else if(n==31)
         return -15;
    else if(n==21 ||n==43)
         return -30;
    else if(n==1 || n==23)
        return -30;
}

int worldTime_hour()
{
    if(n==5 || n==54)
        return 0;
    else if(n==22||n==46||n==52)
        return 1 ;
    else if(n==34 || n==1 || n==23)
        return -1;
    else if(n==9||n==20||n==28||n==39)
        return 2;
    else if(n==48)
        return -2;
    else if(n==26||n==41)
        return 3;
    else if(n==16 || n==19|| n==24||n==27||n==36||n==37||n==38||n==47)
        return -3;
    else if(n==12 || n==13 || n==15||n==17||n==18 || n==25|| n==40 || n==53 || n==4)
        return -4;
    else if(n==3)
        return 4;
    else if(n==32||n==42||n==44||n==45)
        return -5;
    else if(n==11||n==35||n==49)
        return -6;
    else if(n==33)
        return 7;
    else if(n==2||n==6||n==50)
        return -9;
    else if(n==7||n==51||n==8)
        return -10;
    else if(n==10||n==14 || n==29)
        return -11;
    /*else if()
        return -12;*/


}

void myTime_digital()
{
    initgraph(&gd, &gm, "");
    while(1){
    time(&t);

    currentTime = localtime(&t);
    if(n==30 || n==31 || n==21 || n==43 || n==1 || n==23) {
        mn = worldTime_min();

    }

    else
        hr = worldTime_hour();
    if(n==1 || n== 23)
        hr = worldTime_hour();

        currentTime->tm_hour = currentTime->tm_hour+hr;
        currentTime->tm_min = currentTime->tm_min+mn;
        currentTime->tm_sec = currentTime->tm_sec+sc;
        if(currentTime->tm_hour > 12) currentTime->tm_hour = currentTime->tm_hour-12;

        if(currentTime->tm_min >59) {
            currentTime->tm_hour = currentTime->tm_hour + 1;
            currentTime->tm_min = currentTime->tm_min -60;
        }
        else if(currentTime->tm_min <0) {
            currentTime->tm_hour = currentTime->tm_hour - 1;
            currentTime->tm_min = currentTime->tm_min +60;
        }

    settextstyle(3, HORIZ_DIR, 1);
    setcolor(WHITE);
    if(n==1)
        outtextxy(300,0, "Afghanisthan");
    else if(n==2)
        outtextxy(300,0, "Argentina");
    else if(n==3)
        outtextxy(300,0, "Australia (Canberra)");
    else if(n==4)
        outtextxy(300,0, "Belgium");
    else if(n==5)
        outtextxy(300,0, "Bhutan");
    else if(n==6)
        outtextxy(300,0, "Brazil (Rio de Janeiro)");
    else if(n==7)
        outtextxy(300,0, "Canada");
    else if(n==8)
        outtextxy(300,0, "Chile (Santiago)");
    else if(n==9)
        outtextxy(300,0, "China");
    else if(n==10)
        outtextxy(300,0, "Colombia");
    else if(n==11)
        outtextxy(300,0, "Coste divorie");
    else if(n==12)
        outtextxy(300,0, "Cratia");
    else if(n==13)
        outtextxy(300,0, "Denmark");
    else if(n==14)
        outtextxy(300,0, "Ecuador (Quito)");
    else if(n==15)
        outtextxy(300,0, "Egypt");
    else if(n==16)
        outtextxy(300,0, "Finland (Helsinki)");
    else if(n==17)
        outtextxy(300,0, "France (Paris)");
    else if(n==18)
        outtextxy(300,0, "Germany (Berlin)");
    else if(n==19)
        outtextxy(300,0, "Greece");
    else if(n==20)
        outtextxy(300,0, "Hong kong");
    else if(n==21)
        outtextxy(300,0, "India");
    else if(n==22)
        outtextxy(300,0, "Indonesia (Jarkarta)");
    else if(n==23)
        outtextxy(300,0, "Iran");
    else if(n==24)
        outtextxy(300,0, "Iraq");
    else if(n==25)
        outtextxy(300,0, "Italy");
    else if(n==26)
        outtextxy(300,0, "Japan");
    else if(n==27)
        outtextxy(300,0, "Kuwait");
    else if(n==28)
        outtextxy(300,0, "Malaysia");
    else if(n==29)
        outtextxy(300,0, "Mexico (Mexico City)");
    else if(n==30)
        outtextxy(300,0, "Myanmar");
    else if(n==31)
        outtextxy(300,0, "Nepal");
    else if(n==32)
        outtextxy(300,0, "Netherland");
    else if(n==33)
        outtextxy(300,0, "New Zeland (Wellington)");
    else if(n==34)
        outtextxy(300,0, "Pakistan");
    else if(n==35)
        outtextxy(300,0, "Portugal (Lisbon)");
    else if(n==36)
        outtextxy(300,0, "Qatar");
    else if(n==37)
        outtextxy(300,0, "Russia(Moscow)");
    else if(n==38)
        outtextxy(300,0, "Saudi Arabia");
    else if(n==39)
        outtextxy(300,0, "Singapore");
    else if(n==40)
        outtextxy(300,0, "South Africa (Cape town)");
    else if(n==41)
        outtextxy(300,0, "South Korea");
    else if(n==42)
        outtextxy(300,0, "Spain");
    else if(n==43)
        outtextxy(300,0, "Sri Lanka");
    else if(n==44)
        outtextxy(300,0, "Sweden");
    else if(n==45)
        outtextxy(300,0, "Switzerland");
    else if(n==46)
        outtextxy(300,0, "Thailand");
    else if(n==47)
        outtextxy(300,0, "Turkey");
    else if(n==48)
        outtextxy(300,0, "UAE");
    else if(n==49)
        outtextxy(300,0, "U.K");
    else if(n==50)
        outtextxy(300,0, "Uruguay");
    else if(n==51)
        outtextxy(300,0, "USA (Florida,Miami)");
    else if(n==52)
        outtextxy(300,0, "Vietnam");
    else if(n==53)
        outtextxy(300,0, "Zimbabwe");
    else if(n==54)
        outtextxy(300,0, "Bangladesh");

    strftime(a, 100, "%I:%M:%S", currentTime);
    setcolor(11);
    settextstyle(3, HORIZ_DIR, 5);
    outtextxy(200, 200, a);
    delay(1000);
    cleardevice();
    if(GetAsyncKeyState(VK_RBUTTON)) {
        return;
        }
    }
    getch();
    closegraph();
}

void myTime_analog()
{
    initgraph(&gd, &gm, "");
    int midX = getmaxx() / 2;
    int midY = getmaxy() / 2;
    int I, M, S;
    int coordsForHourX[] = {38, 46, 53, 60, 65, 69, 72, 74, 75, 74, 72, 69, 65, 60, 53, 46, 38, 28, 19, 10, 0, -10, -19, -28, -38, -46, -53, -46, -65, -69, -72, -74, -75, -74, -72, -69, -65, -60, -53, -46, -38, -28, -19, -10, 0, 10, 19, 28};
    int coordsForHourY[] = {-65, -60, -53, -46, -38, -28, -19, -10, 0, 10, 19, 28, 38, 46, 53, 60, 65, 69, 72, 74, 75, 74, 72, 69, 65, 60, 53, 60, 38, 28, 19, 10, 0, -10, -19, -28, -38, -46, -53, -60, -65, -69, -72, -74, -75, -74, -72, -69};

    int coordsForSecX[60] = {0, 14, 27, 40, 53, 65, 76, 87, 97, 105,
                                   113, 119, 124, 127, 129, 130, 129, 127, 124, 119,
                                   113, 105, 97, 87, 76, 65, 53, 40, 27, 14, 0,
                                   -14, -27, -40, -53, -65, -76, -87, -97, -105,
                                   -113, -119, -124, -127, -129, -130, -129, -127, -124, -119,
                                  -113, -105, -97, -87, -76, -65, -53, -40, -27, -14};

    int coordsForSecY[60] = {-130, -129, -127, -124, -119,
                                  -113, -105, -97, -87, -76, -65, -53, -40, -27, -14, 0, 14, 27, 40, 53,
                                   65, 76, 87, 97, 105, 113, 119, 124, 127, 129, 130,
                                   129, 127, 124, 119, 113, 105, 97, 87, 76,
                                   65, 53, 40, 27, 14, 0, -14, -27, -40, -53,
                                   -65, -76, -87, -97, -105, -113, -119, -124,-127, -129};

    int coordsForMinX[60] = {0, 11, 23, 34, 45, 55, 65, 74, 82, 89,
                            95, 100, 105, 108, 109, 110, 109, 108, 105, 100, 95,
                            89, 82, 74, 65, 55, 45, 34, 23, 11, 0,
                            -11, -23, -34, -45, -55, -65, -74, -82, -89,
                            -95, -100, -105, -108, -109, -110, -109, -108, -105, -100, -95,
                            -89, -82, -74, -65, -55, -45, -34, -23,-11};


    int coordsForMinY[60] = {-110, -109, -108, -105, -100, -95, -89, -82, -74, -65,
                            -55, -45, -34, -23, -11, 0, 11, 23, 34, 45,
                            55, 65, 74, 82, 89, 95, 100, 105, 108, 109, 110,
                            109, 108, 105, 100, 95, 89, 82, 74, 65,
                            55, 45, 34, 23, 11, 0, -11, -23, -34, -45,
                            -55, -65, -74, -82, -89, -95, -100, -105, -108, -109};


    while(1) {
    time(&t);


    currentTime = localtime(&t);
    setcolor(LIGHTBLUE);
    circle(midX, midY, 150);
    //outtextxy(200,0, "");
    setcolor(LIGHTGRAY);
    outtextxy(midX+70+(-5), midY-121+(-5), "1");
    outtextxy(midX+121-5, midY-70-5, "2");
    outtextxy(midX+140-5, midY-0-7, "3");
    outtextxy(midX+121-7, midY+70-7, "4");
    outtextxy(midX+70-5, midY+121-10, "5");
    outtextxy(midX+0-3, midY+140-10, "6");
    outtextxy(midX-70-0, midY+121-10, "7");
    outtextxy(midX-121-2, midY+70-10, "8");
    outtextxy(midX-140-3, midY+0-7, "9");
    outtextxy(midX-121-5, midY-70-3, "10");
    outtextxy(midX-70-5, midY-121-5, "11");
    outtextxy(midX+0-6, midY-140-5, "12");

    //settextstyle(3, HORIZ_DIR, 3);
    if(n==1)
        outtextxy(300,0, "Afghanisthan");
    else if(n==2)
        outtextxy(300,0, "Argentina");
    else if(n==3)
        outtextxy(300,0, "Australia (Canberra)");
    else if(n==4)
        outtextxy(300,0, "Belgium");
    else if(n==5)
        outtextxy(300,0, "Bhutan");
    else if(n==6)
        outtextxy(300,0, "Brazil (Rio de Janeiro)");
    else if(n==7)
        outtextxy(300,0, "Canada");
    else if(n==8)
        outtextxy(300,0, "Chile (Santiago)");
    else if(n==9)
        outtextxy(300,0, "China");
    else if(n==10)
        outtextxy(300,0, "Colombia");
    else if(n==11)
        outtextxy(300,0, "Coste divorie");
    else if(n==12)
        outtextxy(300,0, "Cratia");
    else if(n==13)
        outtextxy(300,0, "Denmark");
    else if(n==14)
        outtextxy(300,0, "Ecuador (Quito)");
    else if(n==15)
        outtextxy(300,0, "Egypt");
    else if(n==16)
        outtextxy(300,0, "Finland (Helsinki)");
    else if(n==17)
        outtextxy(300,0, "France (Paris)");
    else if(n==18)
        outtextxy(300,0, "Germany (Berlin)");
    else if(n==19)
        outtextxy(300,0, "Greece");
    else if(n==20)
        outtextxy(300,0, "Hong kong");
    else if(n==21)
        outtextxy(300,0, "India");
    else if(n==22)
        outtextxy(300,0, "Indonesia (Jarkarta)");
    else if(n==23)
        outtextxy(300,0, "Iran");
    else if(n==24)
        outtextxy(300,0, "Iraq");
    else if(n==25)
        outtextxy(300,0, "Italy");
    else if(n==26)
        outtextxy(300,0, "Japan");
    else if(n==27)
        outtextxy(300,0, "Kuwait");
    else if(n==28)
        outtextxy(300,0, "Malaysia");
    else if(n==29)
        outtextxy(300,0, "Mexico (Mexico City)");
    else if(n==30)
        outtextxy(300,0, "Myanmar");
    else if(n==31)
        outtextxy(300,0, "Nepal");
    else if(n==32)
        outtextxy(300,0, "Netherland");
    else if(n==33)
        outtextxy(300,0, "New Zeland (Wellington)");
    else if(n==34)
        outtextxy(300,0, "Pakistan");
    else if(n==35)
        outtextxy(300,0, "Portugal (Lisbon)");
    else if(n==36)
        outtextxy(300,0, "Qatar");
    else if(n==37)
        outtextxy(300,0, "Russia(Moscow)");
    else if(n==38)
        outtextxy(300,0, "Saudi Arabia");
    else if(n==39)
        outtextxy(300,0, "Singapore");
    else if(n==40)
        outtextxy(300,0, "South Africa (Cape town)");
    else if(n==41)
        outtextxy(300,0, "South Korea");
    else if(n==42)
        outtextxy(300,0, "Spain");
    else if(n==43)
        outtextxy(300,0, "Sri Lanka");
    else if(n==44)
        outtextxy(300,0, "Sweden");
    else if(n==45)
        outtextxy(300,0, "Switzerland");
    else if(n==46)
        outtextxy(300,0, "Thailand");
    else if(n==47)
        outtextxy(300,0, "Turkey");
    else if(n==48)
        outtextxy(300,0, "UAE");
    else if(n==49)
        outtextxy(300,0, "U.K");
    else if(n==50)
        outtextxy(300,0, "Uruguay");
    else if(n==51)
        outtextxy(300,0, "USA (Florida,Miami)");
    else if(n==52)
        outtextxy(300,0, "Vietnam");
    else if(n==53)
        outtextxy(300,0, "Zimbabwe");
    else if(n==54)
        outtextxy(300,0, "Bangladesh");

    if(n==30 || n==31 || n==21 || n==43 || n==1 || n==23) {
        mn = worldTime_min();

    }

    else
        hr = worldTime_hour();
    if(n==1 || n== 23)
        hr = worldTime_hour();

        currentTime->tm_hour = currentTime->tm_hour+hr;
        currentTime->tm_min = currentTime->tm_min+mn;
        currentTime->tm_sec = currentTime->tm_sec+sc;
        if(currentTime->tm_hour > 12) currentTime->tm_hour = currentTime->tm_hour-12;

        if(currentTime->tm_min >59) {
            currentTime->tm_hour = currentTime->tm_hour + 1;
            currentTime->tm_min = currentTime->tm_min -60;
        }
        else if(currentTime->tm_min <0) {
            currentTime->tm_hour = currentTime->tm_hour - 1;
            currentTime->tm_min = currentTime->tm_min +60;
        }

    strftime(a, 100, "%I", currentTime);
    sscanf(a, "%d", &I);

    strftime(a, 100, "%M", currentTime);
    sscanf(a, "%d", &M);

    setcolor(LIGHTGREEN);
    line(midX, midY, midX+coordsForHourX[((I-1)*60+M)/15], midY+coordsForHourY[((I-1)*60+M)/15]);
    line(midX, midY+1, midX+coordsForHourX[((I-1)*60+M)/15], midY+coordsForHourY[((I-1)*60+M)/15]+1);
    line(midX, midY+2, midX+coordsForHourX[((I-1)*60+M)/15], midY+coordsForHourY[((I-1)*60+M)/15]+2);


    setcolor(YELLOW);
    line(midX, midY, midX+coordsForMinX[M], midY+coordsForMinY[M]);
    line(midX, midY+1, midX+coordsForMinX[M], midY+coordsForMinY[M]+1);

    strftime(a, 100, "%S", currentTime);
    sscanf(a, "%d", &S);
    setcolor(LIGHTRED);
    line(midX, midY, midX+coordsForSecX[S], midY+coordsForSecY[S]);
    delay(1000);
    cleardevice();
    if(GetAsyncKeyState(VK_RBUTTON)) {
        return;
        }
    }

    getch();
    closegraph();
}



int main()
{
    char country;
    printf("\n\t\t\t\t\tWorld Clock\n");
    printf("\t\t\t\t\t-----------\n\n");
    FILE *fin = fopen("country-list.txt", "r");
    printf("\nHere is our country list:\n\n\n");
    while(1) {
        country = fgetc(fin);
        if(country == EOF) break;
        printf("%c", country);
    }
    printf("\n\nMake a choice between them : ");
    scanf("%d", &n);
    system("cls");

    printf("\n\t\t\t\t\tWorld Clock\n");
    printf("\t\t\t\t\t-----------\n\n");
    int x;
    int y;
    printf("Which clock you will prefer?\n\n1. Digital Clock\n\n2. Analog Clock");
    printf("\n\nPress 1 or 2 : ");
    scanf("%d", &y);
    system("cls");
    if(y==1) myTime_digital();
    else if(y==2) myTime_analog();


    printf("Do you want to know another time?\n1.YES\n2.NO\nPress 1 or 2 : ");
    scanf("%d", &x);
    if(x==1) {
        system("cls");
        main();
    }
    return 0;
}
