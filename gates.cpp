/* This is a ASCII version of a logic gate simulator, Written in C 
 *
 * Still Under Development
 *
 * */

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class gates_2
{


  public:
          int a,b,op,n;

          void read()
          {
             cout<<"\tEnter the 2 inputs(0,1) of the gate seperated by a space \n\n\n\t";
             cin>>a>>b;
          }

          void readnot()
          {
            cout<<"Enter the input (1,0) of the NOT gate\n\n\t";
            cin>>n;
          }
          void andg() // Logical AND gate
          {
            op = ((a==1)&&(b==1)) ? 1:0;
          }

          void org() // Logical OR gate
          {
            op = ((a==0)&&(b==0)) ? 0:1;
          }

          void notg() // Logical NOT gate
          {
             if((n==0)||(n==0))
             {
                op=  (n==0) ? 1 : 0;
             }
             else
             {
                op = (op==0) ? 1 : 0;
             }
          }

          void xorg() // Logical XOR Exclusive OR gate
          {
            op = (((a==0)&&(b==0))||(a==1)&&(b==1)) ? 0 : 1;
          }

          void disp()
          {
                system("clear");
                cout<<"\tInput       "<<"Output\n";
                cout<<"\t "<<a<<"  "<<b<<"       "<<op<<"\n\n\n";
          }
};

int main()
{
  gates_2 r;
  r.n=2;
  int i;
  system("clear");
  cout<<"\n\nWelcome to the Virtual ASCII Logic Gate Simulator V 1.0 \n\n"<<"\tThis version supports Logic gate simulation of one gate only\n\n";
  cout<<"Please enter your choice of gate\n\n";
  cout<<" 1 for AND gate simulation\n"<<"\n 2 for OR gate simulation\n"<<"\n 3 for NOT gate simulation\n"<<"\n 4 for NAND gate simulation\n";
  cout<<"\n 5 for NOR gate simulation\n"<<"\n 6 for XOR (Exclusive OR) gate simulation\n"<<"\n 7 for Exclusive NOR gate simulation\n\n\t";
  cin>>i;
  system("clear");

  switch(i)
  {
    case 1: // and gate
            r.read();
            r.andg();
            r.disp();
            break;
   case 2: // or gate
            r.read();
            r.org();
            r.disp();
            break;
case 3: // not gate
            r.readnot();
            r.notg();
            r.disp();
            break;
case 4: // nand gate
            r.read();
            r.andg();
            r.notg();
            r.disp();
            break;
case 5: // nor gate
            r.read();
            r.org();
            r.notg();
            r.disp();
            break;
case 6: // xor gate
            r.read();
            r.xorg();
            r.disp();
            break;
case 7: // n-xor gate
            r.read();
            r.xorg();
            r.notg();
            r.disp();
            break;

default:
            cout<<"Invalid Option \n\n"<<"Exiting the program";
  }
  return 0;
}
