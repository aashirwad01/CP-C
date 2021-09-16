#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
void rules1();
void rules2();
void q1(int);
void q2(int);
void ans1(int,char);
void ans2(int,char);
int ar[6];
char p1,p2;
void win();
int points1,points2;
void main()
  {
	clrscr();

	 cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<"                                   WELCOME TO                     "<<endl;
	 cout<<"********************************************************************************"<<endl;
	 cout<<"      ******************************************************************"<<endl;
	 
                   
                    cout<<""<<endl; 
                    cout<<""<<endl;                    
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                     cout<<"*****                               EXTREME                               ******"<<endl;
	 cout<<""<<endl; 
                    cout<<""<<endl;                    
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                     cout<<"                              qqqqqqQuizzinGggggggg     "<<endl;
	 cout<<""<<endl; 
                    cout<<""<<endl;                    
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl; 
                    cout<<"                               press any key to continue"<<endl;
	 getch();

	 clrscr();
	  randomize();
	 rules1();cout<<"Enter any key to continue"<<endl;
	 getch();

	 int i;int rand;int j; int m=0;char ch; ch=' '; int n;
	 for(i=0;i<6;i++)
	  {
		rand=random(10);
		ar[i]=rand;
		for(j=0;j<6;j++)
		{
		 if(ar[i]==ar[j])
		  m++;
	  }
			if((m>1)||(ar[i]==0))
		  {
ar[i]=0;i--;
}
m=0;
}
puts("LEVEL 1");
for(i=0;i<6;i++)
{
 n=ar[i];
 q1(n);ch=' ';
 for(j=1;j<=20;j++)
 {
 delay(1000);
 cout<<j<<"";
 if(kbhit())
 {
 ch=getch();
 break;
 }
 if(ch!=' ')
 break;
 }
 cout<<""<<endl;
 cout<<"                                   "<<ch<<endl;cout<<"        Enter any key to proceed"<<endl;
 getch();
puts(" ");
 ans1(n,ch);puts("Please wait");delay(3000);clrscr();puts(" ");puts(" ");puts(" ");puts(" ");
 }
 puts("                                                Points of player 1");
 cout<<points1<<endl;
 puts("                                                Points of player 2");
 cout<<points2<<endl;
 cout<<"                        Enter any key to proceed"<<endl;
 getch();
clrscr();
cout<<"LEVEL 2"<<endl;
 cout<<"                        Enter any key to proceed"<<endl;
 getch();
clrscr();
rules2();
cout<<"                          Enter any key to proceed"<<endl;
 getch();clrscr();
n=0;ch=' ';m=0;rand=0;
 for(i=0;i<6;i++)
{
rand=random(10);
ar[i]=rand;
for(j=0;j<6;j++)
{
if(ar[i]==ar[j])
m++;
}
if((m>1)||(ar[i]==0))
{
ar[i]=0;i--;
}
m=0;
}

for(i=0;i<6;i++)
{
 cout<< "If you want to pawn press P else N"<<endl;
 cout<<"                        Player 1 your chance"<<endl;
 cin>>p1;
 puts("                            Player 2 your chance");
 cin>>p2;
 clrscr();
 n=ar[i];
 q2(n);  ch=' ';
 for(j=1;j<=20;j++)
 {
 delay(1000);
 cout<<j<<"";
 if(kbhit())
 {
 ch=getch();
 break;
 }
 if(ch!=' ')
 break;
 }
 cout<<""<<endl;
 cout<<"                      "<<ch<<endl;cout<<"   Enter any key to proceed"<<endl;
 getch();
puts(" ");puts(" ");
 ans2(n,ch);puts("Please wait");delay(3000);clrscr();puts(" ");puts(" ");puts(" ");puts(" ");
 }
 puts("                    Points of player 1");
 cout<<points1<<endl;
 puts("                    Points of player 2");
 cout<<points2<<endl;
		cout<<"                              Enter any key to proceed"<<endl;
 getch(); clrscr();
 win();
 getch();
 }



	void ans2( int n1,char ch1)
	{
	  switch(n1)
	  {
	case 1:
	{switch(ch1)
	{
	case 'A':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; }
	 case '1':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
  cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2= points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points1=points1;
	 break;  }

		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  } }break;}

		case 2:
	{switch(ch1)
	{
	case 'A':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '1':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }

		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  }}break; }
	case 3:
	{switch(ch1)
	{
	case 'B':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'A':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '2':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2= points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }

		case '1':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  }}  break;}
	case 4:
	{switch(ch1)
	{
	case 'A':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '1':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }


		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  } } break;}
	case 5:
	{ switch(ch1)
	{
	case 'D':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'A':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '4':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }

		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '1':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  } }break;}
	case 6:
	{switch(ch1)
	{
	case 'A':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '1':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }

		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  } } break;}
	case 7:
	{switch(ch1)
	{
	case 'D':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'A':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '4':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }

		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '1':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  } }  break;}
	case 8:
  {	switch(ch1)
	{
	case 'B':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'A':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '2':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }

		case '1':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  } }   break;}
	case 9:
  {	switch(ch1)
	{
	case 'A':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '1':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points1=points2*2;
	 if(p1=='N')
	 points2=points2;
	 break;  }

		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  } }   break;}
	case 10:
	{switch(ch1)
	{
	case 'A':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 1 WINS 100 POINTS         "<<endl;
	 points1 = points1+100;
	 if(p1=='P')
	 points1=points1*2;
	 if(p1=='N')
	 points1=points1;
	 break;  }

		case 'B':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }

	case 'C':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break;  }
		case 'D':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p1=='P')
	 points1=(points1*(0.5));
	 if(p1=='N')
	 points1=points1;
	 break; } case '1':
	 {
	 cout<<"                   RIGHT  ANS"<<endl;cout<<" "<<endl;
	 cout<<"                PLAYER 2 WINS 100 POINTS         "<<endl;
	 points2 = points2+100;
	 if(p2=='P')
	 points2=points2*2;
	 if(p2=='N')
	 points2=points2;
	 break;  }

		case '2':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }

	case '3':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;
	 break;  }
		case '4':
	 {
	 cout<<"                  WRONG ANS"<<endl;cout<<" "<<endl;


	 if(p2=='P')
	 points2=(points2*(0.5));
	 if(p2=='N')
	 points2=points2;

	 break;  }} break;}
		 }}
	void ans1( int n1,char ch1)
	 {
	switch(n1)
		{
		 case 1:
		  { switch(ch1)
		{
		case 'A':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		 case '1':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}   }  break;      }
		case 2:
		{switch(ch1)
		{
		case 'B':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'A':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		case '2':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '1':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}      }    break;}
		case 3:
		{switch(ch1)
		{
		case 'A':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		 case '1':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}      }  break; }
		case 4:
		{switch(ch1)
		{
		case 'A':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case '1':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}       }break; }
		case 5:
		{switch(ch1)
		{
		case 'A':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		 case '1':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}       }break;}
		case 6:
		{switch(ch1)
		{
		case 'D':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'A':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		case '4':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '1':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}      } break; }
		case 7:
		{switch(ch1)
		{
		case 'A':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
	  case '1':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}     }    break;}
		case 8:
		{switch(ch1)
		{
		case 'C':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'A':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		 case '3':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '1':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}    }      break;}
		case 9:
	  {	switch(ch1)
		{
		case 'A':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'B':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		 case '1':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '2':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}   }      break;  }
		case 10:
		{switch(ch1)
		{
		case 'B':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points1=points1+100;
		break;
		}
		case 'A':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		  case 'C':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}  case 'D':
		{
		puts("                      WRONG ANS");
		points1=points1;
		break;
		}
		 case '2':
		{
		puts("          YOU GOT THE RIGHT ANS");
		points2=points2+100;
		break;
		}
		case '1':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}
		  case '3':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}  case '4':
		{
		puts("                      WRONG ANS");
		points2=points2;
		break;
		}

			}   }  break;}  }

						 void q1(  int n1)
						 {
						 switch(n1)
						 {
						 case 1:
						 {
						  cout<<"Q. Only President of India to have served as Lok Sabha speaker?"<<endl;
						  cout<<"              A/1 Neelam Sanjeev Reddy"<<endl;
						  cout<<"              B/2 Rajendra Prasad"<<endl;
						  cout<<"              C/3 K.R. Narayana"<<endl;
						  cout<<"              D/4 S. Radhakrishnan"<<endl;
						  break;
						  }
						  case 2:
						  {
						  cout<<"Q. The film to have won Maximum number of Oscar awards?"<<endl;
						  cout<<"             A/1 Gandhi"<<endl;
						  cout<<"             B/2 Ben Hur"<<endl;
						  cout<<"             C/3 The Last Emperor"<<endl;
						  cout<<"             D/4 The Godfather"<<endl;
						  break;
						  }
						  case 3:
						  {
						  cout<<"Q. The first batsman to score centuries against all 8 Test-playing Nations of the World?"<<endl;
						  cout<<"            A/1 Steve Waugh"<<endl;
						  cout<<"            B/2 Sachin Tendulkar"<<endl;
						  cout<<"            C/3 Ricky Ponting"<<endl;
						  cout<<"            D/4 Jacques Kallis"<<endl;
						  break;
						  }
						  case 4:
						  {
						  cout<<"Q. Which religious faith is associated with Lotus Temple in New Delhi?"<<endl;
						  cout<<"            A/1 Bahai"<<endl;
						  cout<<"            B/2 Krishna"<<endl;
						  cout<<"            C/3 Shakti"<<endl;
						  cout<<"            D/4 Parsi"<<endl;
						  break;
						  }
						  case 5:
						  {
						  cout<<"Q. Who among the following was contemporary of Alexander the Great?"<<endl;
						  cout<<"          A/1 Chandragupta Maurya"<<endl;
						  cout<<"          B/2 Ashoka"<<endl;
						  cout<<"          C/3 Vikramaditya"<<endl;
						  cout<<"          D/4 Bhima"<<endl;
						  break;
						  }
						  case 6:
						  {
						  cout<<"Q. Abhas Kumar Ganguly is better known as?"<<endl;
						  cout<<"          A/1 Mukesh Kumar"<<endl;
						  cout<<"          B/2 Sourav Ganguly"<<endl;
						  cout<<"          C/3 Ashok Kumar"<<endl;
						  cout<<"          D/4 Kishore Kumar"<<endl;
						  break;
						  }
						  case 7:
						  {
						  cout<<"Q. Which law states that wavelength corresponding to maximum intensity of radiation is inversely proportional to temperature?"<<endl;
						  cout<<"         A/1 Wien's Displacement Law"<<endl;
						  cout<<"         B/2 Einstein's General Theory"<<endl;
						  cout<<"         C/3 Newton's Law of Wavelength"<<endl;
						  cout<<"         D/4 Stefan's Law"<<endl;
						  break;
						  }
						  case 8:
						  {
						  cout<<"Q. World's first tramway was built in?"<<endl;
						  cout<<"         A/1 London"<<endl;
						  cout<<"         B/2 Kolkata"<<endl;
						  cout<<"         C/3 New York"<<endl;
						  cout<<"         D/4 Glasgow"<<endl;
						  break;
						  }
						  case 9:
						  {
						  cout<<"Q. First film to have won the National Film awards?"<<endl;
						  cout<<"         A/1 Shyamchi Aai"<<endl;
						  cout<<"         B/2 Pather Panchali"<<endl;
						  cout<<"         C/3 Mirza Ghalim"<<endl;
						  cout<<"         D/4 Do Aankhen Baarah Haath"<<endl;
						  break;
						  }
						  case 10:
						  {
						  cout<<"Q. British Government awarded Kaiser-e-Hind award in 1915 to whom?"<<endl;
						  cout<<"        A/1 Lord Hardinge"<<endl;
						  cout<<"        B/2 Mohandas Karamchand Gandhi"<<endl;
						  cout<<"        C/3 Mohammad Ali Jinnah"<<endl;
						  cout<<"        D/4 Rabindranath Tagore"<<endl;
						  break;
						  }
						  }
						  }
					  void q2(  int n1)
					  {
						 switch(n1)
						 {
						 case 1:
						 cout<<"Q.What is the name of Parliament of Japan"<<endl;
						 cout<<"             A/1 Diet"<<endl;
						 cout<<"            B/2 Storting"<<endl;
						 cout<<"            C/3 Ho Chi"<<endl;
						 cout<<"            D/4 Riksdag"<<endl;
						 break;
						 case 2:
						 cout<<"Q. On which novel is the TV Serial `Raag Darbaari` based?"<<endl;
						 cout<<"           A/1 Raag Darbaari"<<endl;
						 cout<<"           B/2 Ishq-e-Punjab"<<endl;
						 cout<<"           C/3 Ayodha Charita"<<endl;
						 cout<<"           D/4 Godan"<<endl;
						 break;
						 case 3:
						 cout<<"Q. Who was the first President of BCCI?"<<endl;
						 cout<<"          A/1 Gurunath Maiyyapan"<<endl;
						 cout<<"          B/2 R.E. Grantgowen"<<endl;
						 cout<<"          C/3 Maharaja Ranjit Singh Ji"<<endl;
						 cout<<"          D/4 Trevor Grace"<<endl;
						 break;
						 case 4:
						 cout<<"Q. Largest freshwater lake in the world?"<<endl;
						 cout<<"         A/1 Lake Superior"<<endl;
						 cout<<"        B/2 Lake Baikal"<<endl;
						 cout<<"        C/3 Lake Victoria"<<endl;
						 cout<<"        D/4 Lake Michigan"<<endl;
						 break;
						 case 5:
						 cout<<"Q. Arthur Miller's second wife was a world renowned actress. Who was she?"<<endl;
						 cout<<"       A/1 Diana Keaton"<<endl;
						 cout<<"       B/2 Jennifer Lawrence"<<endl;
						 cout<<"      C/3 Meryl Streep"<<endl;
						 cout<<"       D/4 Marilyn Monroe"<<endl;
						 break;
						 case 6:
						 cout<<"Q. First European to go to China?"<<endl;
						 cout<<"         A/1 Marco Polo"<<endl;
						 cout<<"         B/2 Vasco Colombia"<<endl;
						 cout<<"        C/3 Washington Resigne"<<endl;
						 cout<<"        D/4 Marshi Defoe"<<endl;
						 break;
						 case 7:
						 cout<<"Q. Largest mountain range of India?"<<endl;
						 cout<<"          A/1 Himalaya"<<endl;
						 cout<<"         B/2 Ajanta"<<endl;
						 cout<<"         C/3 Parasnath"<<endl;
						 cout<<"         D/4 Aravali"<<endl;;
						 break;
						 case 8:
						 cout<<"Q. Movie `Fitoor` is based on which novel?"<<endl;
						 cout<<"         A/1 Half Girlfriend"<<endl;
						 cout<<"         B/2 Great Expectations"<<endl;
						 cout<<"         C/3 Hamlet"<<endl;
						 cout<<"         D/4 As You Like it"<<endl;
						 break;
						 case 9:
						 cout<<"Q. Zika virus is spread through?"<<endl;
						 cout<<"        A/1 Aedes Aegypti"<<endl;
						 cout<<"        B/2 Aedes Romancci"<<endl;
						 cout<<"        C/3 Asian Tiger mosquito"<<endl;
						 cout<<"        D/4 Anopheles Albimanus"<<endl;
						 break;
						 case 10:
						 cout<<"Q. Shakespeare's last novel was?"<<endl;
						 cout<<"         A/1 The Tempest"<<endl;
						 cout<<"         B/2 Hamlet"<<endl;
						 cout<<"         C/3 All's Well that Ends Well"<<endl;
						 cout<<"         D/4 Great Expectations"<<endl;
						 break;
						}
					  }

		 void rules1()
		 {
		  cout<<"1.                     You would be thrown one question at a time." <<endl<<"Player 1 will choose options A,B,C,D. Player 2 will choose options 1,2,3,4."<<endl;puts(" ");
		  cout<<"2.                               You would get 20 seconds to answer." <<endl<<"The one who presses the key first gets to answer the question. You should press directly the right option"<<endl;cout<<"   "<<endl;puts(" ");
		  cout<<"                        Make caps lock"<<endl;puts(" ");
		  cout<<"                      Enter any key to continue";
		  getch();
		  clrscr();
		 }
		 void rules2()
		 {
		  cout<<"1.	You would be thrown one question at a time."<<endl<<" Player 1 will choose options A,B,C,D. Player 2 will choose options 1,2,3,4."<<endl;puts(" ");
		  cout<<"2.              You would get 20 seconds to answer." <<endl<<"The one who presses the key first gets to answer the question. You should press directly the right option"<<endl;puts(" ");
		  cout<<"3.              Before every question you would be asked whether you want to bet your points or not? "<<endl<<"               If you give the right answer after choosing to pawn your points will be doubled else halfed."<<endl;puts(" ");
		  cout<<"                 Make caps lock"<<endl;puts(" ");
		  cout<<"                 Enter any key to continue"<<endl;
		  getch();
		  clrscr();
		 }
		 void win()
		 {
		  if(points1>points2)
		 { cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
                                        cout<<" "<<endl;puts(" ");puts(" ");
					cout<<"                                  PLAYER 1 WINS"<<endl;}
else  if(points1==points2)
		 { cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;puts(" ");puts(" ");
					 cout<<"                                 Tie"<<endl;}
		  else
		  {cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;puts(" ");puts(" ");
                                       
				    cout<<"                                      Player 2 Wins"<<endl;cout<<""<<endl;cout<<""<<endl;puts(" ");}
	cout<<" -------------------------------------END OF QUIZ------------------------------"<<endl<<"                                 PRESS ANY KEY"<<endl;
cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;
	       puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ALL IS WELL THAT ENDS WELL@@@@@@@@@@@@@@@@@@@@@@");puts(" ");puts(" ");puts(" ");puts("/*---------------------------------------------------------------------------/*");}
