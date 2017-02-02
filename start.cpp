#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream>
using namespace std;
int target();
int i=0,k=0;
hit(){



}
shoot(){
    char ch;
    /* if(k==)
       hit();
       if(k==)
        hit();
        if(k==)
       hit();
       if(k==)
       hit();
       if(k==)
       hit();

*/
a:
 for(i=i;i<=getmaxy();i++){
        if(k>=666){
            k=0;
            target();
        }
        if (kbhit()){
        if(ch==32)
            {
                  system("pause");
                }
        }
setfillstyle(1,6);
setcolor(LIGHTGREEN);
        bar(626,10+i,630,110+i);//largest bar
        setfillstyle(1,3);
        bar(621,20+i,625,100+i);
        setfillstyle(1,1);
        bar(616,30+i,620,90+i);
        setfillstyle(1,2);
        bar(611,40+i,615,80+i);
        setfillstyle(1,4);
        bar(606,50+i,610,70+i);//smallest bar
        line(157+k,203,180+k,203);
         delay(20);

        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar(626,10+i,630,110+i);
        bar(621,20+i,625,100+i);
        bar(616,30+i,620,90+i);
        bar(611,40+i,615,80+i);
        bar(606,50+i,610,70+i);
        line(157+k,203,180+k,203);
        k=k+6;
       cout<<k<<"  "<<i<<endl;
 }

 i=0;
 goto a;
}
target()
{

 int dely=20;
 a:
 for(i=i;i<=getmaxy();i++)
 {

   setfillstyle(1,6);
        bar(626,10+i,630,110+i);//largest bar
        setfillstyle(1,3);
        bar(621,20+i,625,100+i);
        setfillstyle(1,1);
        bar(616,30+i,620,90+i);
        setfillstyle(1,2);
        bar(611,40+i,615,80+i);
        setfillstyle(1,4);
        bar(606,50+i,610,70+i);//smallest bar
         delay(dely);
        setfillstyle(SOLID_FILL,0);
        bar(626,10+i,630,110+i);
        bar(621,20+i,625,100+i);
        bar(616,30+i,620,90+i);
        bar(611,40+i,615,80+i);
        bar(606,50+i,610,70+i);
         if(kbhit())
            {
                int ch=getch();
                if(ch==27)
                {
                    closegraph();
                    exit(0);
                    }
        if(ch==32)
            {
                  shoot();  //shoot();
                }
        }

  }
 i=0;
 goto a;
}





man(int x, int y){
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
         line(x+69,y+365,x+68,y+358);// left thigh start
         line(x+69,y+359,x+68,y+351);
         line(x+69,y+349,x+69,y+342);
         line(x+70,y+341,x+69,y+339);
         line(x+70,y+337,x+73,y+333);
         line(x+73,y+331,x+74,y+330);
         line(x+76,y+328,x+71,y+325);// left thigh
         line(x+72,y+324,x+75,y+318);//back bone part
         line(x+75,y+317,x+76,y+308);
         line(x+77,y+307,x+75,y+301);
         line(x+76,y+300,x+71,y+293);
         line(x+72,y+292,x+67,y+288);
         line(x+70,y+288,x+63,y+285);
         line(x+66,y+284,x+58,y+288);
         line(x+61,y+286,x+55,y+289);//back bone
         line(x+57,y+290,x+47,y+287);//left hand elbow s
         line(x+49,y+286,x+43,y+284);
         line(x+45,y+283,x+42,y+282);
         line(x+42,y+281,x+45,y+276);
         line(x+47,y+273,x+53,y+273);
         line(x+45,y+276,x+47,y+273);
         line(x+54,y+272,x+54,y+270);// left hand elbow
         line(x+54,y+268,x+58,y+267);//arrrow bag
         line(x+55,y+267,x+55,y+267);
         line(x+60,y+265,x+61,y+264);
         line(x+60,y+264,x+60,y+264);
         line(x+59,y+264,x+59,y+264);
         line(x+62,y+263,x+66,y+263);
         line(x+60,y+264,x+58,y+265);//arrow bag
         line(x+67,y+262,x+72,y+266);
         line(x+68,y+261,x+68,y+261);
         line(x+68,y+261,x+68,y+261);
         line(x+73,y+265,x+74,y+266);
         line(x+75,y+265,x+76,y+264);//head s
         line(x+75,y+262,x+69,y+258);
         line(x+69,y+256,x+68,y+255);
         line(x+68,y+254,x+67,y+253);
         line(x+67,y+251,x+67,y+248);
        line(x+68,y+248,x+67,y+247);
        line(x+67,y+246,x+69,y+243);
        line(x+68,y+243,x+71,y+240);
        line(x+70,y+240,x+75,y+238);
        line(x+74,y+237,x+80,y+236);
        line(x+79,y+235,x+85,y+236);
        line(x+85,y+235,x+89,y+238);//head e
        line(x+89,y+236,x+91,y+243);// face part s
        line(x+91,y+239,x+92,y+249);
        line(x+93,y+249,x+93,y+250);
        line(x+92,y+248,x+94,y+254);
        line(x+94,y+249,x+96,y+262);
        line(x+97,y+259,x+97,y+264);
        line(x+97,y+261,x+100,y+265);
        line(x+98,y+263,x+101,y+265);// face part e
        line(x+96,y+263,x+104,y+266);// right hand top
        line(x+104,y+265,x+106,y+265);
        line(x+107,y+264,x+109,y+264);
        line(x+111,y+263,x+116,y+266);
        line(x+111,y+260,x+111,y+260);
        line(x+111,y+260,x+111,y+260);
        line(x+111,y+263,x+111,y+263);
        line(x+108,y+263,x+112,y+264);
        line(x+171,y+264,x+118,y+267);
        line(x+70,y+364,x+70,y+368);
        line(x+69,y+363,x+71,y+373);// right hand top
        line(x+71,y+371,x+72,y+373);
        line(x+72,y+371,x+74,y+375);//left knee
        line(x+74,y+375,x+77,y+376);
        line(x+78,y+376,x+82,y+375);
        line(x+81,y+376,x+88,y+371);
        line(x+86,y+372,x+92,y+368);
        line(x+94,y+362,x+92,y+366);
        line(x+95,y+360,x+95,y+361);
        line(x+93,y+365,x+91,y+369);
        line(x+96,y+360,x+98,y+366);// left knee
        line(x+99,y+365,x+95,y+370);
        line(x+97,y+368,x+93,y+373);
        line(x+93,y+373,x+94,y+375);
        line(x+95,y+375,x+99,y+375);
        line(x+102,y+375,x+108,y+374);
        line(x+101,y+375,x+99,y+375);
        line(x+106,y+374,x+109,y+371);
        line(x+110,y+369,x+106,y+365);
        line(x+110,y+369,x+109,y+372);
        line(x+107,y+364,x+107,y+357);
        line(x+90,y+353,x+98,y+349);
        line(x+98,y+350,x+101,y+347);
        line(x+101,y+347,x+105,y+349);
        line(x+104,y+347,x+107,y+351);
        line(x+108,y+357,x+107,y+352);
        line(x+91,y+351,x+90,y+349);//left leg
        line(x+90,y+351,x+92,y+344);
        line(x+92,y+343,x+96,y+341);
        line(x+97,y+339,x+101,y+336);
        line(x+103,y+335,x+103,y+335);
        line(x+103,y+335,x+103,y+335);
        line(x+101,y+337,x+107,y+337);//right leg
        line(x+106,y+337,x+117,y+336);
        line(x+114,y+337,x+122,y+336);
        line(x+118,y+372,x+120,y+364);
        line(x+120,y+362,x+122,y+357);
        line(x+122,y+357,x+122,y+352);
        line(x+123,y+351,x+122,y+345);
        line(x+123,y+337,x+121,y+346);
        line(x+117,y+372,x+118,y+374);//right foot
        line(x+118,y+374,x+120,y+374);
        line(x+119,y+375,x+126,y+375);
        line(x+126,y+375,x+131,y+375);
        line(x+133,y+375,x+140,y+375);//bottom right foot
        line(x+134,y+375,x+131,y+375);
         outtextxy(x+126,y+380,"Archer");
        line(x+140,y+375,x+149,y+375);
        line(x+149,y+375,x+148,y+375);
        line(x+145,y+376,x+152,y+374);
        line(x+153,y+372,x+153,y+370);
        line(x+154,y+370,x+150,y+369);
        line(x+152,y+368,x+146,y+369);
        line(x+148,y+368,x+137,y+367);
        line(x+140,y+364,x+140,y+364);
        line(x+140,y+364,x+140,y+364);
        line(x+140,y+366,x+136,y+364);
        line(x+139,y+366,x+135,y+364);
        line(x+141,y+347,x+136,y+353);
        line(x+136,y+353,x+135,y+358);
        line(x+135,y+357,x+136,y+362);
        line(x+142,y+347,x+142,y+342);
        line(x+142,y+341,x+145,y+334);
        line(x+145,y+335,x+146,y+327);
        line(x+146,y+329,x+146,y+318);
        line(x+147,y+317,x+141,y+315);
        line(x+143,y+315,x+129,y+313);//line 138 - 151 right stomach
        line(x+134,y+313,x+124,y+313);
        line(x+127,y+312,x+121,y+312);
        line(x+109,y+299,x+112,y+305);
        line(x+112,y+304,x+115,y+309);
        line(x+117,y+309,x+121,y+312);
        line(x+118,y+309,x+115,y+307);
        line(x+109,y+298,x+111,y+290);
        line(x+111,y+291,x+111,y+285);
        line(x+111,y+286,x+118,y+283);
        line(x+118,y+282,x+131,y+282);
        line(x+130,y+282,x+143,y+280);
        line(x+143,y+279,x+153,y+277);
        line(x+153,y+278,x+163,y+277);
        line(x+161,y+276,x+166,y+276);
        line(x+162,y+276,x+171,y+279);
        line(x+173,y+278,x+176,y+278);
        line(x+172,y+278,x+173,y+278);
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);// bow
        line(x+107,y+171,x+117,y+176);
        line(x+117,y+176,x+123,y+180);
        line(x+123,y+180,x+130,y+184);
        line(x+130,y+184,x+139,y+193);
        line(x+139,y+193,x+145,y+202);
        line(x+145,y+202,x+152,y+211);
        line(x+152,y+211,x+157,y+222);
        line(x+158,y+222,x+162,y+235);
        line(x+163,y+235,x+166,y+247);
        line(x+166,y+247,x+169,y+262);
        line(x+141,y+358,x+149,y+352);
        line(x+149,y+352,x+155,y+345);
        line(x+155,y+345,x+160,y+337);
        line(x+160,y+337,x+163,y+330);
        line(x+163,y+330,x+166,y+324);
        line(x+166,y+325,x+170,y+309);
        line(x+169,y+310,x+171,y+295);
        line(x+171,y+297,x+171,y+278);
        line(x+141,y+358,x+147,y+358);
        line(x+147,y+358,x+156,y+350);
        line(x+156,y+350,x+163,y+341);
        line(x+163,y+341,x+170,y+328);
        line(x+170,y+329,x+173,y+315);
        line(x+173,y+316,x+176,y+302);
        line(x+176,y+302,x+177,y+285);
        line(x+177,y+285,x+176,y+279);
        line(x+176,y+260,x+173,y+246);
        line(x+108,y+170,x+113,y+170);
        line(x+113,y+170,x+120,y+172);
        line(x+120,y+172,x+125,y+175);
        line(x+125,y+175,x+130,y+179);
        line(x+130,y+179,x+137,y+185);
        line(x+137,y+185,x+141,y+189);
        line(x+141,y+189,x+148,y+196);
        line(x+148,y+196,x+153,y+203);
        line(x+153,y+203,x+158,y+213);
        line(x+155,y+205,x+164,y+222);
        line(x+164,y+220,x+172,y+247);
        line(x+172,y+247,x+172,y+244);
        line(x+54,y+269,x+49,y+265);
        line(x+49,y+265,x+44,y+262);
        line(x+44,y+262,x+43,y+260);
        line(x+43,y+260,x+44,y+261);
        line(x+44,y+259,x+44,y+258);
        line(x+44,y+258,x+46,y+256);
        line(x+46,y+256,x+51,y+259);
        line(x+51,y+259,x+53,y+263);
        line(x+53,y+264,x+53,y+264);
        line(x+53,y+261,x+54,y+264);
        line(x+54,y+259,x+48,y+255);
        line(x+48,y+254,x+47,y+252);
        line(x+48,y+251,x+52,y+250);
        line(x+52,y+250,x+57,y+256);
        line(x+57,y+256,x+55,y+258);
        line(x+57,y+256,x+59,y+260);
        line(x+59,y+260,x+61,y+262);
        line(x+55,y+258,x+60,y+264);
        line(x+61,y+256,x+64,y+261);
        line(x+52,y+245,x+57,y+244);
        line(x+57,y+244,x+60,y+248);
        line(x+61,y+248,x+63,y+251);
        line(x+63,y+251,x+63,y+253);
        line(x+63,y+253,x+68,y+261);
        line(x+61,y+254,x+56,y+254);
        line(x+59,y+253,x+52,y+250);
        line(x+52,y+250,x+52,y+244);
        line(x+178,y+263,x+182,y+263);//arrow head
        line(x+182,y+263,x+183,y+262);
        line(x+183,y+261,x+192,y+264);
        line(x+183,y+263,x+192,y+264);//point
        line(x+192,y+264,x+185,y+268);
        line(x+183,y+265,x+184,y+268);
        line(x+184,y+265,x+177,y+265);
        setcolor(LIGHTGREEN);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        line(x+177,y+278,x+180,y+272);
        line(x+180,y+272,x+178,y+266);
}
arrow(int xp, int yp)
{
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    //Arrow
    line(xp+5,yp+5,xp+100,yp+5);

    //left bottom
    int toptipl[8] = {xp+0,xp+0,xp+5,xp+0,yp+10,yp+5,yp+5,yp+5};
    fillpoly(4, toptipl);
    int bottipl[8] = {xp+0,xp+10,xp+5,xp+5,yp+10,yp+5,yp+5,yp+10};
    fillpoly(4, bottipl);

    //right bottom
    int toptipr[8] = {xp+10,xp+0,xp+15,xp+0,yp+20,yp+5,yp+15,yp+5};
    fillpoly(4, toptipr);
    int bottipr[8] = {xp+10,xp+10,xp+15,xp+5,yp+20,yp+5,yp+15,yp+10};
    fillpoly(4, bottipr);

    //tip
    int tip[6] = {xp+93,xp+1,xp+100,yp+5,yp+93,yp+9};
    fillpoly(3, tip);
}



int main()
{
    int gd = DETECT, gm;
    char driver[] = "C:\\turboc3\\BGI";
    initgraph(&gd, &gm, driver);
    arrow(0,0);
    arrow(15,15);
    arrow(30,30);
    arrow(45,45);
    arrow(60,60);
    man(-30,-60);
    target();
    getch();
    return 0;

}
