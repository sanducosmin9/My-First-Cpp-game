#include <iostream>
#include <graphics.h>
#include <winbgim.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <MMsystem.h>
using namespace std;

int x, y, lungime, solutie[8][8], generare[8][8];

void patrat(int lungime, int x, int y)
{
    int latura;
    latura=lungime/2;
    line(x-latura,y-latura,x+latura,y-latura);
    line(x+latura,y-latura,x+latura,y+latura);
    line(x+latura,y+latura,x-latura,y+latura);
    line(x-latura,y+latura,x-latura,y-latura);

}

void verificare();
void menu();
void mouseClick();


void random(int &numar, int &numar2)
{
    int num, num2, a=225, b=275, c=325, d=375, e=425, f=475, g=525, h=575;
    num = rand()%8;
    num2 = rand()%8;
    if(num==0)
        numar = a;
    if(num==1)
        numar = b;
    if(num==2)
        numar = c;
    if(num==3)
        numar = d;
    if(num==4)
        numar = e;
    if(num==5)
        numar = f;
    if(num==6)
        numar = g;
    if(num==7)
        numar = h;
    if(num2==0)
        numar2 = a;
    if(num2==1)
        numar2 = b;
    if(num2==2)
        numar2 = c;
    if(num2==3)
        numar2 = d;
    if(num2==4)
        numar2 = e;
    if(num2==5)
        numar2 = f;
    if(num2==6)
        numar2 = g;
    if(num2==7)
        numar2 = h;
}

int i, j, aux1, aux2, cerc, lvl1, lvl2, lvl3; // variabilele folosite pentru crearea nivelelor

void level1()
{
    settextstyle(0,0,0);
    lvl1=1;
    rectangle(200,100,380,150);
    outtextxy(225,115,"VERIFICARE");
    rectangle(450,100,600,150);
    outtextxy(500,115,"MENIU");
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
          {
              rectangle(200+i*50,200+j*50,200+(i+1)*50,200+(j+1)*50); // aici pornim de la coordonatele x=200, y=200 pana la x=600, y=600
          }
    }
    setfillstyle(SOLID_FILL,WHITE);
    setcolor(WHITE);
    for (cerc=1;cerc<=8;cerc++)
    {
        random(x,y);
        aux1=x;
        aux2=y;
        x=x-225;
        y=y-225;
        x=x/50;
        y=y/50;
        if(generare[x][y]==0)
        {
            generare[x][y]=1;
            circle(aux1,aux2,12.5);
            floodfill(aux1,aux2,WHITE);
        }
        else
            cerc--;
    }
    mouseClick();
}

void level2()
{
    settextstyle(0,0,0);
    lvl1=1;
    rectangle(200,100,380,150);
    outtextxy(225,115,"VERIFICARE");
    rectangle(450,100,600,150);
    outtextxy(500,115,"MENIU");
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
          {
              rectangle(200+i*50,200+j*50,200+(i+1)*50,200+(j+1)*50); // aici pornim de la coordonatele x=200, y=200 pana la x=600, y=600
          }
    }
    setfillstyle(SOLID_FILL,WHITE);
    for (cerc=1;cerc<=8;cerc++)
    {
        random(x,y);
        aux1=x;
        aux2=y;
        x=x-225;
        y=y-225;
        x=x/50;
        y=y/50;
        if(generare[x][y]==0)
        {
            generare[x][y]=1;
            circle(aux1,aux2,12.5);
            floodfill(aux1,aux2,WHITE);
        }
        else
            cerc--;
    }
    setfillstyle(SOLID_FILL,RED);
    for (cerc=1;cerc<=8;cerc++)
    {
        random(x,y);
        aux1=x;
        aux2=y;
        x=x-225;
        y=y-225;
        x=x/50;
        y=y/50;
        if(generare[x][y]==0)
        {
            generare[x][y]=2;
            circle(aux1,aux2,12.5);
            floodfill(aux1,aux2,WHITE);
        }
        else
            cerc--;
    }
    mouseClick();
}

void level3()
{
    settextstyle(0,0,0);
    lvl1=1;
    rectangle(200,100,380,150);
    outtextxy(225,115,"VERIFICARE");
    rectangle(450,100,600,150);
    outtextxy(500,115,"MENIU");
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
          {
              rectangle(200+i*50,200+j*50,200+(i+1)*50,200+(j+1)*50); // aici pornim de la coordonatele x=200, y=200 pana la x=600, y=600
          }
    }
    setfillstyle(SOLID_FILL,WHITE);
    for (cerc=1;cerc<=8;cerc++)
    {
        random(x,y);
        aux1=x;
        aux2=y;
        x=x-225;
        y=y-225;
        x=x/50;
        y=y/50;
        if(generare[x][y]==0)
        {
            generare[x][y]=1;
            circle(aux1,aux2,12.5);
            floodfill(aux1,aux2,WHITE);
        }
        else
            cerc--;
    }
    setfillstyle(SOLID_FILL,RED);
    for (cerc=1;cerc<=8;cerc++)
    {
        random(x,y);
        aux1=x;
        aux2=y;
        x=x-225;
        y=y-225;
        x=x/50;
        y=y/50;
        if(generare[x][y]==0)
        {

            generare[x][y]=2;
            circle(aux1,aux2,12.5);
            floodfill(aux1,aux2,WHITE);
        }
        else
            cerc--;
    }
    setfillstyle(SOLID_FILL,BLUE);
    for (cerc=1;cerc<=8;cerc++)
    {
        random(x,y);
        aux1=x;
        aux2=y;
        x=x-225;
        y=y-225;
        x=x/50;
        y=y/50;
        if(generare[x][y]==0)
        {
            generare[x][y]=3;
            circle(aux1,aux2,12.5);
            floodfill(aux1,aux2,WHITE);
        }
        else
            cerc--;
    }
    mouseClick();

}

int centru(int x) // pentru a afla coordonatele centrului cercului
{
    if(x>=200&&x<250)
        return 225;
    if(x>=250&&x<300)
        return 275;
    if(x>=300&&x<350)
        return 325;
    if(x>=350&&x<400)
        return 375;
    if(x>=400&&x<450)
        return 425;
    if(x>=450&&x<500)
        return 475;
    if(x>=500&&x<550)
        return 525;
    if(x>=550&&x<600)
        return 575;
}

int matrice(int x)
{
    if(x>=200&&x<250)
        return 0;
    if(x>=250&&x<300)
        return 1;
    if(x>=300&&x<350)
        return 2;
    if(x>=350&&x<400)
        return 3;
    if(x>=400&&x<450)
        return 4;
    if(x>=450&&x<500)
        return 5;
    if(x>=500&&x<550)
        return 6;
    if(x>=550&&x<600)
        return 7;
}

int margine(int x, int y)
{
    int i, j, marginx,marginy;
    for(i=1;i<=6;i++)
        for(j=1;j<=6;j++)
    {
        marginx=200+50*i;
        marginy=200+50*j;
        if(x==marginx&&y==marginy)
            return 1;
    }
    return 0;
}

int alb[8], rosu[8], albastru[8], contor;

void mouseClick()
{
    int culoare=2, arie=0, cerculet=0, linie, coloana, edge=0, start=0, aux2, aux;

    while(contor<=64)
    {
        getmouseclick(WM_LBUTTONUP,x,y);
        if(x>200&&x<350&&y>100&&y<150)
            verificare();
        if(x>450&&x<600&&y>100&&y<150)
        {
            lvl1=0;
            lvl2=0;
            lvl3=0;
            cleardevice();
            culoare=2;
            contor=0;
            start=0;
            arie=0;
            for(i=0;i<=7;i++)
                for(j=0;j<=7;j++)
            {
                solutie[i][j]=0;
                generare[i][j]=0;
            }
            for(i=2;i<=12;i++)
                        {
                            if(i==4 || i==7 || i==10)
                                i++;
                            alb[i]=0;
                            rosu[i]=0;
                            albastru[i]=0;
                        }
            menu();
        }
        linie=matrice(x);
        coloana=matrice(y);
        if(margine(x,y)==1)
                edge=1;
        else edge=0;
        if(start==0&&edge==0&&solutie[linie][coloana]==0&&x>=200&&x<=600&&y>=200&&y<=600)
        {
            clearmouseclick(WM_LBUTTONUP);
            i=centru(mousex());
            j=centru(mousey());
            aux=i;
            aux2=j;
            i=i-225;
            j=j-225;
            i=i/50;
            j=j/50;
            if(generare[i][j]==1||generare[i][j]==2||generare[i][j]==3)
                cerculet=1;
            else cerculet=0;
            if(cerculet==1&&sqrt((mousex()-centru(mousex()))*(mousex()-centru(mousex()))+(mousey()-centru(mousey()))*(mousey()-centru(mousey())))>12.5) // distanta dintre doua drepte
            {
                arie++;
                if(arie==8)
                    start=0;
                if(arie==9)
                {
                    arie=1;
                    culoare++;
                    if(culoare == 4 || culoare == 7 || culoare == 8 || culoare == 10)
                        culoare ++;
                }
                setfillstyle(SOLID_FILL,culoare);
                floodfill(mousex(),mousey(),WHITE);
                cerculet=0;
                solutie[linie][coloana]=culoare;
                if(generare[i][j]==1)
                    alb[culoare]++;
                if(generare[i][j]==2)
                    rosu[culoare]++;
                if(generare[i][j]==3)
                    albastru[culoare]++;
            }
            else if(cerculet==0)
            {
                arie++;
                if(arie==8)
                    start=0;
                if(arie==9)
                {
                    arie=1;
                    culoare++;
                    if(culoare == 4 || culoare == 7 || culoare == 8 || culoare == 10)
                        culoare ++;
                }
                setfillstyle(SOLID_FILL,culoare);
                floodfill(mousex(),mousey(),WHITE);
                solutie[linie][coloana]=culoare;
            }
            start=1;
         }
         else if(start==1&&edge==0&&solutie[linie][coloana]==0&&(arie>=1&&(solutie[linie+1][coloana]==culoare||solutie[linie-1][coloana]==culoare||solutie[linie][coloana+1]==culoare||solutie[linie][coloana-1]==culoare)))
        {
            clearmouseclick(WM_LBUTTONUP);
            i=centru(mousex());
            j=centru(mousey());
            i=i-225;
            j=j-225;
            i=i/50;
            j=j/50;
            if(generare[i][j]==1||generare[i][j]==2||generare[i][j]==3)
                cerculet=1;
            else cerculet=0;
            if(cerculet==1&&sqrt((mousex()-centru(mousex()))*(mousex()-centru(mousex()))+(mousey()-centru(mousey()))*(mousey()-centru(mousey())))>12.5) // distanta dintre doua drepte
            {
                arie++;
                if(arie==8)
                    start=0;
                if(arie==9)
                {
                    arie=1;
                    culoare++;
                    if(culoare == 4 || culoare == 7 || culoare == 8 || culoare == 10)
                        culoare ++;
                }
                setfillstyle(SOLID_FILL,culoare);
                floodfill(mousex(),mousey(),WHITE);
                cerculet=0;
                solutie[linie][coloana]=culoare;
                if(generare[i][j]==1)
                    alb[culoare]++;
                if(generare[i][j]==2)
                    rosu[culoare]++;
                if(generare[i][j]==3)
                    albastru[culoare]++;

            }
            else if(cerculet==0)
            {
                arie++;
                if(arie==8)
                    start=0;
                if(arie==9)
                {
                    arie=1;
                    culoare++;
                    if(culoare == 4 || culoare == 7 || culoare == 10)
                        culoare ++;
                }
                setfillstyle(SOLID_FILL,culoare);
                floodfill(mousex(),mousey(),WHITE);
                solutie[linie][coloana]=culoare;
            }
         }

        getmouseclick(WM_RBUTTONUP,x,y);
        linie=matrice(x);
        coloana=matrice(y);
        if(edge==0&&solutie[linie][coloana]==culoare&&x>=200&x<=600&&y>=200&y<=600&&(arie>=1&&(solutie[linie+1][coloana]==culoare||solutie[linie-1][coloana]==culoare||solutie[linie][coloana+1]==culoare||solutie[linie][coloana-1]==culoare)))
        {
            clearmouseclick(WM_RBUTTONUP);
            i=centru(mousex());
            j=centru(mousey());
            i=i-225;
            j=j-225;
            i=i/50;
            j=j/50;
            if(generare[i][j]==1||generare[i][j]==2||generare[i][j]==3)
                cerculet=1;
            else cerculet = 0;
            if(cerculet==1&&sqrt((mousex()-centru(mousex()))*(mousex()-centru(mousex()))+(mousey()-centru(mousey()))*(mousey()-centru(mousey())))>12.5)
            {
                if(arie>=1)
                {
                    setfillstyle(SOLID_FILL,BLACK);
                    floodfill(mousex(),mousey(),WHITE);
                    arie--;
                    contor--;
                    solutie[linie][coloana]=0;
                }
                else if (arie==0&&culoare>=2)
                {
                    setfillstyle(SOLID_FILL,BLACK);
                    floodfill(mousex(),mousey(),WHITE);
                    arie=6;
                    culoare--;
                }
                if(generare[i][j]==1)
                    alb[culoare]--;
                if(generare[i][j]==2)
                    rosu[culoare]--;
                if(generare[i][j]==3)
                    albastru[culoare]--;
             }
                else if(cerculet==0)
                {
                    if(arie>=1)
                    {
                        setfillstyle(SOLID_FILL,BLACK);
                        floodfill(mousex(),mousey(),WHITE);
                        arie--;
                        contor--;
                        solutie[linie][coloana]=0;
                    }
                }
        }
    }


}

void verificare()
{
    int ok=1;
    if(lvl1==1)
    {
        for(i=2;i<=12;i++)
        {
            if(i==4 || i==7 || i==10)
                i++;
            if(alb[i]!=1)
            {
                ok=0;
                outtextxy(380,120,"GRESIT");
            }
        }
    }
    if(lvl2==1)
    for(i=2;i<=12;i++)
    {
        if(i==4 || i==7 || i==10)
            i++;
        if(alb[i]!=1||rosu[i]!=1)
        {
            ok=0;
            outtextxy(380,120,"GRESIT");
        }
    }
    if(lvl3==1)
    for(i=2;i<=12;i++)
    {
        if(i==4 || i==7 || i==10)
            i++;
        if(alb[i]!=1||rosu[i]!=1||albastru[i]!=1)
        {
            ok=0;
            outtextxy(380,120,"GRESIT");
        }
    }
    if(ok==1)
        outtextxy(270,170,"FELICITARI, AI CASTIGAT");



}

int W=800,H=800;

void menu();
void start();
void options();
void howto();
void quit();


int main()
{
    initwindow(W,H," IMPARTIREA CAREULUI ");
    PlaySound(TEXT("muzica.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
    x=200;
    y=200;
    lungime=50;
    srand(time(NULL));
    menu();
    mouseClick();
    getch();
    closegraph();
    return 0;
}

void start()
{
    int ok;
    rectangle(200,370,500,430);
    line(300,370,300,430);
    line(400,370,400,430);
    settextstyle(1,0,4);
    outtextxy(250,280,"LEVELS:");
    outtextxy(240,385,"1");
    outtextxy(340,385,"2");
    outtextxy(440,385,"3");
    settextstyle(1,0,2);
    rectangle(50,600,200,650);
    outtextxy(80,615,"BACK");
    POINT cursorPosition;
    int mX,mY;
    while(1)
    {
        GetCursorPos(&cursorPosition);
        mX=cursorPosition.x;
        mY=cursorPosition.y;
        cout << mX << " " << mY << endl;
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            if(mX>50 && mX<200 && mY>626 && mY<675)
            {
                cleardevice();
                ok=1;
            }
            if(ok==1)
                break;
        }
        getmouseclick(WM_LBUTTONUP,x,y);
        if(x>200&&x<300&&y>370&&y<430)
        {
            cleardevice();
            level1();
        }
        else if(x>300&&x<400&&y>370&&y<430)
        {
            cleardevice();
            level2();
        }
        else if(x>400&&x<500&&y>370&&y<430)
        {
            cleardevice();
            level3();
        }
        x=mousex();
        y=mousey();

        delay(600);
    }

    menu();
}

void options()
{
    int ok;
    rectangle(200,370,600,430);
    line(300,370,300,430);
    line(400,370,400,430);
    line(500,370,500,430);
    setfillstyle(1,7);
    floodfill(210,380,WHITE);
    setfillstyle(1,10);
    floodfill(310,380,WHITE);
    setfillstyle(1,YELLOW);
    floodfill(410,380,WHITE);
    setfillstyle(1,11);
    floodfill(510,380,WHITE);
    outtextxy(215,320,"BACKGROUND:");

    POINT cursorPosition;
    int mX,mY;
    while(1)
    {
        GetCursorPos(&cursorPosition);
        mX=cursorPosition.x;
        mY=cursorPosition.y;
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            if(mX>200 && mX<300 & mY>395 && mY<455)
            {
                setbkcolor(7);
                cleardevice();
                ok=1;
            }
            if(mX>300 && mX<400 & mY>395 && mY<455)
            {
                setbkcolor(10);
                cleardevice();
                ok=1;
            }
            if(mX>400 && mX<500 & mY>395 && mY<455)
            {
                setbkcolor(YELLOW);
                cleardevice();
                ok=1;
            }
            if(mX>500 && mX<600 & mY>395 && mY<455)
            {
                setbkcolor(11);
                cleardevice();
                ok=1;
            }

            if(ok==1)
                break;
        }

        delay(600);
    }
   menu();
}

void howto()
{
    int ok;
    settextstyle(1,0,4);
    outtextxy(50,100,"RULES:");
    settextstyle(1,0,2);
    outtextxy(50,200,"1.You're allowed to move just in nearby boxes");
    outtextxy(50,250,"2.Depending on level you've chosen you ought to");
    outtextxy(75,280,"group 1/2/3 dots");
    outtextxy(50,330,"3.At the end table must be fully coloured");
    outtextxy(50,380,"4.Depending on level you've chosen you ought to");
    outtextxy(75,410,"have sections of 8 boxes");
    rectangle(50,600,200,650);
    outtextxy(80,615,"BACK");

    POINT cursorPosition;
    int mX,mY;
    while(1)
    {
        GetCursorPos(&cursorPosition);
        mX=cursorPosition.x;
        mY=cursorPosition.y;
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            if(mX>50 && mX<200 && mY>626 && mY<675)
            {
                cleardevice();
                ok=1;
            }
            if(ok==1)
                break;
        }

        delay(600);
    }
    menu();

}

void menu()
{
    int ok;
    settextstyle(1,0,4);
    outtextxy(100,200,"IMPARTIREA CAREULUI");
    rectangle(200,300,600,350);
    rectangle(200,350,600,400);
    rectangle(200,400,600,450);
    rectangle(200,450,600,500);
    settextstyle(1,0,4);
    outtextxy(320,310,"START");
    outtextxy(290,360,"OPTIONS");
    outtextxy(290,410,"HOW TO?");
    outtextxy(330,460,"QUIT");
    POINT cursorPosition;
    int mX,mY;
    while(1)
    {
        GetCursorPos(&cursorPosition);
        mX=cursorPosition.x;
        mY=cursorPosition.y;
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            if(mX>200 && mX<600 && mY>325 && mY<375)
            {
                cleardevice();
                ok=1;


            }
            if(mX>200 && mX<600 && mY>375 && mY<425)
            {
                cleardevice();
                ok=2;
            }

            if(mX>200 && mX<600 && mY>425 && mY<475)
            {
                cleardevice();
                ok=3;
            }
            if(mX>200 && mX<600 && mY>475 && mY<525)
            {
                closegraph(-2);
            }
        if(ok==1 || ok==2 || ok==3)
            break;
        }

        delay(600);
    }
            if(ok==1)
                start();
            else if(ok==2)
                options();
            else if(ok==3)
                howto();
}
