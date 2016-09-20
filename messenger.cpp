#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>
#include<iomanip.h>

void compose();
int option(int);
//void tempe();
void delet();
void modify();
void signup();
void signin();
void running(char []);
void start();
int countr(char[],char[]);
void dispo();
int findc(char []);
int givec();
void div();
void changec();
void settings();

int i=0,check=0,reto,tn,cd,cdn;
char ask,tmt,key[12], n[20], m[12];

class user
{char city[10],dob[12];
 public:
 char name[20],pass[12],mob[12];int ocode,ncode;
void inprof()
{cout<<"\n\tPress enter for next step.\n";
 gotoxy(1,4);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                    Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(1,8);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                    Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(1,12);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                    Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(1,16);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                    Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(1,20);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                    Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(5,6);  cout<<"Enter User Name";
 gotoxy(5,10); cout<<"Mobile No.";
 gotoxy(5,14); cout<<"Password";
 gotoxy(5,18); cout<<"Enter city";
 gotoxy(5,22); cout<<"D.O.B.(dd.mm.yy)";
 gotoxy(27,6); gets(name);
 gotoxy(27,10);cin>>mob;
 gotoxy(27,14);gets(pass);
 gotoxy(27,18);gets(city);
 gotoxy(27,22);gets(dob);
 }
 void outprof()
 {cout<<"Name :-"<<setw(12)<<name;
  cout<<"\tContact. :-"<<endl;
 }
 void lists(int sno)
 {cout<<setw(3)<<sno<<setw(20)<<name<<setw(19)<<mob<<endl;
// <<setw(5)<<ocode<<setw(5)<<ncode<<endl;
 }
}park,nw;


class msgctr
{
public:
int c,cs,d,m,y,hr,mn,sc;
char mob1[12], mo[12],tmo[12];
char msg[100],sender[20],box,sub[20],sts;
void send(char*by,int dte,int mon,int yrs,int hrs,int min,int sec)
{cout<<"\n\tType Your message \n\n\n";
 cout<<"ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n";
 cout<<"  Ý\n\n\n";
 cout<<"                                      Ý\n";
 cout<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß ";
 gotoxy(1,12);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                       Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(1,16);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                       Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(5,14); cout<<"To(mobile)";
 gotoxy(5,18); cout<<"Enter subject";
 gotoxy(7,8);gets(msg);
 gotoxy(27,14);cin>>mob1;
 gotoxy(27,18);gets(sub);
 strcpy(sender,by);box='i'; d=dte;m=mon;y=yrs;hr=hrs;mn=min;sc=sec;sts='u';
}

void req(char *m,int tc,char *by)
{
 strcpy(msg,m);strcpy(sender,by);
 cout<<"\nenter mobile no.:-";cin>>mob1;cs=tc;box='r';
}

void tsend(char*str,char*tby)
{strcpy(msg,str);strcpy(sender,tby);
 gotoxy(1,12);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                       Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(5,14);cout<<"Mobile No. ";cin>>mob1;
}

void sendo(char*mg,int cod,char t[],int dte,int mon,int yrs,int hrs,int min,int sec)
{strcpy(msg,mg);strcpy(mob1,t);
// strcpy(mo,no);
d=dte;m=mon;y=yrs;hr=hrs;mn=min;sc=sec;c=cod;box='o';
}

void inbox(int s)
{cout<<"\ns.no:-"<<s<<setw(20)<<"\t\tstatus:-"<<sts<<"\nsubject:-"<<sub
 <<setw(20)<<"\tby:-"<<sender;
}

void outbox()
{cout<<"\n\tmessage:-\n\t"<<msg;
 cout<<"\n\tTo:- "<<mob1;
 cout<<"\n\tdate:- "<<d<<'-'<<m<<'-'<<y;
 cout<<"\n\ttime:- "<<hr<<'.'<<mn<<'.'<<sc
     <<"\n\t------------------------------------\n";
}
void mg()
{clrscr();
cout<<"ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n";
 cout<<"  Ý\n\n\n";
 cout<<"                                      Ý\n";
 cout<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß ";
 gotoxy(5,3); cout<<"\n\t"<<msg;
 cout<<"\n\n\n\tdate:- "<<d<<'-'<<m<<'-'<<y;
 cout<<"\n\ttime:- "<<hr<<'.'<<mn<<'.'<<sc;
}


}mci,mco;

void main()
{textbackground(BLACK);int x,y ;
start();
textcolor(MAGENTA);
clrscr();
while(ask!='3')
{clrscr();
 for(x=9;x<16;++x)
 {for(y=30;y<45;++y)
  {gotoxy(y,x);cout<<(char)219;delay(7);
  }
 }
 gotoxy(33,10);cout<<"1.sign up";
 gotoxy(33,12);cout<<"2.sign in";
 gotoxy(33,14);cout<<"3. exit";
 gotoxy(44,15);cout<<(char)175;
 gotoxy(1,18);
 cout<<"\ndeveloped by:-"<<
 "\numesh kumar dhakar";
 gotoxy(45,15);
 ask=getch();clrscr();
 if(ask=='3') exit(0);
 if(ask=='1')signup();
 else        signin();
 }
}

int option(char a)
{ clrscr();

switch(a)
 {case '1':{
	   struct date d;getdate(&d);
	   struct time t;gettime(&t);
	   mci.send(n,d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min, t.ti_sec);
	   mci.c=findc(mci.mob1);
	   ofstream snd("box",ios::app|ios::binary);
	   snd.write((char*)&mci,sizeof(mci));
	   mco.sendo(mci.msg,cd,mci.mob1,d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min, t.ti_sec);
	   snd.write((char*)&mco,sizeof(mco));
	   running("Sending");
	   snd.close();
	   break;
	  }
  case '2' :{int p;  tn=0;
	   ifstream bo("box",ios::binary);
	   bo.seekg(0,ios::beg);
	   cout<<"\n\t--------------INBOX--------------";
	   running("Checking Your messages");
	   while(bo.read((char*)&mci,sizeof(mci)))
	   {if(mci.box=='i')
	    {if(cd==mci.c)
	     {check=8;
	      ++tn;
	      mci.inbox(tn);
	      cout<<"\n------------------------------------------\n";
	     }
	    }
	   }
	   if(check!=8)cout<<"\nempty";
	   else
	   {
	    cout<<"\n---------------";
	    cout<<"\nenter serial no:-";int s;cin>>s;

  tn=0;
  ifstream b("box",ios::binary);
  ofstream st("box",ios::ate|ios::binary);
  b.seekg(0,ios::beg);
  while(b.read((char*)&mci,sizeof(mci)))
  {if(mci.box=='i'&&cd==mci.c)
   {++tn;
    if(tn==s)
    {mci.mg();
     p=b.tellg();
     st.seekp(p-sizeof(mci),ios::beg);
     mci.sts='r';
     st.write((char*)&mci,sizeof(mci));
     break;
    }
   }
  }

	    b.close();
	    st.close();
	  }

	  /* ifstream b("box",ios::binary);
	   fstream sts("box",ios::ate|ios::binary);
	   b.seekg(0,ios::beg);      tn=0;
	   while(b.read((char*)&mci,sizeof(mci)))
	   {if(mci.box=='i'&&cd==mci.c)
	     {++tn;
	      if(tn==s)
	      {mci.mg();
	       mci.sts='r';
	       p=b.tellg();
	       sts.seekp(p-sizeof(mci),ios::beg);
	       sts.write((char*)&mci,sizeof(mci));
	       break;
	      }
	     }
	   }

	    b.close();
	    sts.close();   */

	/*   fstream rr("box",ios::in|ios::binary);
	  // rr.seekg(0,ios::beg);
	   while(rr.read((char*)&mci,sizeof(mci)))
	   {if(mci.box=='r'&&cd==mci.c)
	     {check=15;
	      mci.inbox();
	      cout<<"\naccept req(y/n)?";
	      ask=getch();
	      if(ask=='y')
	      {changec();
	       fstream tp("tpr",ios::app|ios::binary);
	       fstream c("box",ios::in|ios::binary);
	       c.seekp(0);
	       while(c.read((char*)&mci,sizeof(mci)))
	       {if(mci.box!='r')
		tp.write((char*)&mci,sizeof(mci));
	       }
	       tp.close();
	       c.close();
	       remove("box");
	       rename("tpr","box");
	      }
	     }
	   }
	   if(check!=15)
	   cout<<"empty";


	     rr.close();  */
	   bo.close();
	   break;
	   }
  case '3' : {
	   fstream obx("box",ios::in|ios::binary);
	   obx.seekp(0);
	   cout<<"\n\t--------------OUTBOX--------------";
	   while(obx.read((char*)&mco,sizeof(mco)))
	   {if(mco.box=='o'&&cd==mco.c)
	    {check=9;
	     mco.outbox();
	    }
	   }
	   if(check!=9)
	   {cout<<"\n\tempty";
	   }
	   obx.close();
	   break;
	   }
  case '4' : return 2;

  case '5' :{
	  fstream ac("acc",ios::in|ios::binary);
	  running("Creating List of ALL USERS");
	  cout<<"\n\n ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n";
	  cout<<"\n\nS.NO\t\tUSER NAME\tMOBILE NO.\n";
	   ac.seekg(0);
	   i=0;
	   while(ac.read((char*)&park,sizeof(park)))
	   {i++;
	   park.lists(i);
	   }
	   cout<<" ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n";
	   ac.close();
	   break;
	   }
	   //break;
  case '7' :{//settings();
	     cout<<"\n\t\tavailable soon";
	    }
 }
 cout<<"\n\npress any key to go back";
 getch();
 return 5;
}


void delet()
{ clrscr();
char sure;
fstream tpr("tpr",ios::app|ios::binary);
	   fstream acc("acc",ios::in|ios::binary);
	    cout<<"\n\n\tARE YOU SURE TO DELETE ACCOUNT(y/n)?";
	   cin>>sure;
	   if(sure=='y')
	   acc.seekp(0);
	   while(acc.read((char*)&park,sizeof(park)))
	   {if(park.ocode!=cd)
	    tpr.write((char*)&park,sizeof(park));
	   }
	   running("Deleting Account...");
	   tpr.close();
	   acc.close();
	   remove("acc");
	   rename("tpr","acc");
 }

void modify()
{clrscr();
 int p ;
 ifstream ac("acc",ios::binary);
 ofstream aco("acc",ios::ate|ios::binary);
 ac.seekg(0,ios::beg);
 while(ac.read((char*)&park,sizeof(park)))
 {if(cd==park.ocode)
  {p=ac.tellg();
   break;
  }
 }
 park.inprof();
 aco.seekp(p-sizeof(park),ios::beg);
 aco.write((char*)&park,sizeof(park));
 strcpy(n,park.name);strcpy(m,park.mob);
 running("Modifying Data...");
}

void signup()
{
 nw.inprof(); nw.ocode=givec();
 ofstream acc("acc",ios::app|ios::binary);
 acc.write((char*)&nw,sizeof(nw));
 acc.close();
 running("Adding New User...");
 dispo();
}



void signin()
{st:
 clrscr();
 gotoxy(1,12);
 cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t\t\tÝ                       Þ";
 cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßß";
 gotoxy(5,14);
 cout<<"Enter Password";
 gotoxy(27,14);
 gets(key);
 running("Verifying Password...");
 ifstream in("acc",ios::binary);
 in.seekg(0,ios::beg);
 while(in.read((char*)&nw,sizeof(nw)))
 {if(strcmp(nw.pass,key)==0)
  {check=4;
  dispo();
  return;
  }
  in.close();
 }
 if(check!=4)
 {gotoxy(1,5);
 cout<<"\t\tPassword is incorrect";
 sleep(1);
 return ;
 }
}

void running(char act[])
{clrscr();
 gotoxy(10,10);cout<<act;
 cout<<"\n\t  ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
 cout<<"\n\t  Ý               Þ";
 cout<<"\n\t  ßßßßßßßßßßßßßßßßß";
 for(int i=11;i<28;++i)
 {gotoxy(i,12);
  cout<<(char)219;
  delay(50);
 }
 delay(200);
 clrscr();
}

void dispo()
{  int ib,ob,u,sts;strcpy(n,nw.name);strcpy(m,nw.mob); cd=nw.ocode;
   me:
   ib=ob=u=sts=0;
   ifstream o("box",ios::binary);
   o.seekg(0,ios::beg);
   while(o.read((char*)&mco,sizeof(mco)))
   {if(mco.c==cd&&mco.box=='o') ++ob;
   }
   ifstream i("box",ios::binary);
   i.seekg(0,ios::beg);
   while(i.read((char*)&mci,sizeof(mci)))
   {if(mci.c==cd&&mci.box=='i')
    {++ib;
     if(mci.sts=='u') ++sts;
    }
   }
  /* ifstream s("box",ios::binary);
   s.seekg(0,ios::beg);
   while(s.read((char*)&mci,sizeof(mci)))
   {if(mci.c==cd&&mci.box=='i')
     {if(mci.sts=='u') ++sts;
     }
   } */
   //s.close();
   i.close();
   o.close();

   ifstream all("acc",ios::binary);all.seekg(0,ios::beg);
   while(all.read((char*)&park,sizeof(park)))
   ++u;
   all.close();


   clrscr();
   cout<<endl<<n<<"                      "<<m;
   cout<<"\n====================================";
   cout<<"\n\n\t1.compose\n\n\t2.inbox("<<sts<<'/'<<ib<<")\n\n\t3.outbox("<<ob<<")\n\n\t4.signout\n\n\t5.list("<<u<<")\n\n\t6.tempelates\n\n\t7.settings";
   cout<<"\n\n\tenter choice...";
   char choice=getche();
   reto=option(choice);
   if(reto==2)
   return ;
   else
   goto me;
}
int givec()
{int cc;
 fstream fi("acc",ios::in,ios::binary);
 fi.seekp(0,ios::beg);
 while(fi.read((char*)&park,sizeof(park)))
 check=1;
 if(check!=1)
 {fi.close();
  return 0;
 }
 else
 {fi.seekp(-1*sizeof(park),ios::end);
  cc=1+park.ocode;
 }
 fi.close();
 return cc;
}

int findc(char mm[])
{int c;
 ifstream f("acc",ios::binary);
 f.seekg(0,ios::beg);
 while(f.read((char*)&park,sizeof(park)))
 {if(strcmp(park.mob,mm)==0)
  {c=park.ocode;
   break;
  }
 }
 f.close();
 return c;
}
void div()
{
	   mci.req("i want to divert my msg to you",cd,n);
	   mci.c=findc(mci.mob1);
	   ofstream rq("box",ios::app|ios::binary);
	   rq.write((char*)&mci,sizeof(mci));
	   rq.close();
	   running("requesting");
}

void settings()
{ clrscr();
  cout<<"\n\n\t1.delete\n\n\t2.modify\n\n\t3.divert";
  ask=getch();
  switch(ask)
  {case '1' : delet(); break;
   case '2' : modify(); break;
   case '3' : cout<<"\n\n\t1. send request\n\n\t2.accept req\n\n\t3.back";
	    ask=getch();
	    if(ask=='1')
	    div();
  }

}

void changec()
{int p ;
 ifstream ac("acc",ios::binary);
 ofstream aco("acc",ios::ate|ios::binary);
 ac.seekg(0,ios::beg);
 while(ac.read((char*)&park,sizeof(park)))
 {if(cd==park.ocode)
  {p=ac.tellg();
   break;
  }
 }
 park.ncode=mci.cs;
 aco.seekp(p-sizeof(park),ios::beg);
 aco.write((char*)&park,sizeof(park));
 running("changing settings...");
}


void start()
{clrscr();
 textcolor(LIGHTCYAN);
 clrscr();
 int i,j,ch;
 for(i=1;i<50;++i)
 {delay(100);
  for(j=3;j<9;++j)
  {gotoxy(i,j);cout<<"------";
  }
  i+=5;
 }

 for(j=1;j<23;++j)
 {gotoxy(43,j);cout<<"||||||";
 }

 for(j=15;j<20;++j)
 {delay(200);
  for(i=10;i<30;++i)
  {gotoxy(i,j);cout<<"+";
  }
 }

 for(i=11;i<29;++i)
 {delay(50);
  for(j=16;j<19;++j)
  {gotoxy(i,j);cout<<"=";
  }
 }
 gotoxy(2,12);
 cout<<"WELCOME TO NEWLY INVENTED MESSANGER"
 <<"\ndon't miss,just connect your lovely";
 delay(900); gotoxy(2,12);
 cout<<"|||||||||||||||||||||||||||||||||||";
 delay(900); gotoxy(2,12);
 cout<<"WELCOME TO NEWLY INVENTED MESSANGER"
 <<"\n\t  things that connect us...";sleep(1);clrscr();
}
/*

 void tempe()
 { clrscr();
cout<<"\n\n\n\n\n\n\n";
cout<<"\n\t\tÉÍÍÍÏÍÏÍÍÍÍÍÍÍÍÍÍÍÍ»";
cout<<"\n\t\tº  1.Add New one   º";
cout<<"\n\t\tº  2.View & Send   º";
cout<<"\n\t\tº  =============   º";
cout<<"\n\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
gotoxy(1,18);
cout<<"\t\t\tEnter Choice";
cin>>i;

 switch(i)
  {case 1 :{clrscr();
	   fstream t("tm",ios::in|ios::out|ios::binary);
	   ad:
	   clrscr();
	   t.read((char*)&tm,sizeof(tm));
	   t.seekp(-sizeof(tm),ios::end);
	   tn=tm.rtmsgno();
	   ++tn;
	   t.seekp(0);
	   tm.in(tn);
	   t.write((char*)&tm,sizeof(tm));
	   gotoxy(5,30);
	   cout<<"\n\t\tADD MORE(y/n)";
	   cin>>ask;
	   if(ask=='y')
	   goto ad;
	   break;
	   }
  case 2 : clrscr();
	   fstream t1("tm",ios::in|ios::binary);
	   fstream ts("box",ios::app,ios::binary);
	   t1.seekp(0);
	   while(t1.read((char*)&tm,sizeof(tm)))
	   {
	    tm.out();
	   }
	   gotoxy(1,20);
	   cout<<"\n\t\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
	   cout<<"\n\t\t\tÝ                       Þ";
	   cout<<"\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßß";
	   gotoxy(5,22);
	   cout<<"Enter Type";
	   gotoxy(27,22);cin>>tmt;
	   t1.seekp(0);
	   while(!t1.eof())
	   {t1.read((char*)&tm,sizeof(tm));
	    if(tmt==tm.rtm())
	    tm.out();
	    else cout<<"not";
	    }
	   cout<<"Enter message no";
	   cin>>tmn;
	  temp.seekg(0);
	   while(temp.read((char*)&tm,sizeof(tm)))
	   { tm.out();
	   }
	   mc.tsend(tm.tmsg,park.name);
	   box.write((char*)&mc,sizeof(mc));
	   clrscr();
	   gotoxy(25,20);cout<<"SENDING";
	   for(i=27;i<=29;++i)
	   {sleep(1);gotoxy(i,21);cout<<"_";}
	   clrscr();
	   t1.close();
	   break;
  }
}

   */