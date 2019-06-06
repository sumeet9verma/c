#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void bird();
void handup();
void handdown();
void heli();
void para();
int a,b,c,d,e,k;


void main()
{

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

setcolor(GREEN);
b=0;
c=0;
d=0;

for(a=0;a<80;a++)
{
heli();
delay(100);
cleardevice();
k=k+3;
}
heli();
for(a=0;a<90;a++)
{
para();
heli();
if(a>20){k=k+6;}
delay(100);
cleardevice();
if(a<50){
b=b+2;
}
}

getch();

}
void heli(){
ellipse(100+k,200,270,90,20,15);
line(100+k,185,80+k,185);
line(100+k,215,80+k,215);
ellipse(80+k,210,160,270,15,5);
ellipse(80+k,190,90,170,15,5);
line(65+k,190,5+k,195);
line(65+k,210,5+k,200);
//circle(5+k,197,15);
if(a%2==0){
pieslice(5+k,197,30,60,15);
pieslice(5+k,197,210,240,15);
}
else{
pieslice(5+k,197,120,150,15);
pieslice(5+k,197,300,330,15);
}
bar(90+k,185,92+k,170);
bar(70+k,168,110+k,170);
line(94+k,190,94+k,196);
line(96+k,200,110+k,200);
ellipse(102+k,195,160,220,8,8);
line(90+k,215,85+k,230);
line(95+k,215,100+k,230);
bar(80+k,230,108+k,232);
}

void para()
{
arc(340,260+b,0,180,20);
arc(340,263+b,0,180,20);
line(320,263+b,330,280+b);
line(360,263+b,350,280+b);
line(330,280+b,331,290+b);
line(328,280+b,330,290+b);
line(350,280+b,348,290+b);
line(349,280+b,347,290+b);
ellipse(340,280+b,0,360,4,6);
rectangle(336,285+b,344,302+b);
bar(330,288+b,336,289+b);
bar(338,302+b,339,310+b);
bar(342,302+b,343,310+b);
line(336,302+b,339,312+b);
ellipse(344,312+b,0,360,2,1);
ellipse(338,312+b,0,360,2,1);

}






