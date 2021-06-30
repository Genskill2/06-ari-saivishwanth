#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>

string ari(string);

string grade (int);

string ari(string a)
{
  //a="Even aside from the rain and wind it hadn't been a happy practice session. Fred and George, who had been spying on the Slytherin team, had seen for themselves the speed of those new Nimbus Two Thousand and Ones. They reported that the Slytherin team was no more than seven greenish blurs, shooting through the air like missiles.";
  int w=0,s=0,c=0;
 for(int i=0;i<strlen(a);i++)
 {
   
   if(a[i]>='0' && a[i]<='9')
    c++;
   else if(a[i]>='a' && a[i]<='z')
    c++;
   else if(a[i]>='A' && a[i]<='Z')
    c++;
    
   if(a[i]==' ')
    w++;
   else if(a[i]=='.' || a[i]=='?')
    s++;
    else if(a[i]=='!')
    s++;
   
 }
 
  //printf("%d %d %d",c,w,s);
   
  float sum = (4.71*(float)(c)/w)+(0.5*((float)(w)/s))-21.43;
  
  a= grade((int)(sum)+1);
  //printf("%s",a);
  return a;
}


string grade(int sum)
{
    switch(sum){
  case  1  : return"Kindergarten";
  
 case 2 :return "First/Second Grade";
 case   3  : return "Third Grade";
  case 4 : return "Fourth Grade";
case     5 : return " Fifth Grade";
 case 6 : return "Sixth Grade";
   case 7  : return "Seventh Grade";
    case  8 : return "Eighth Grade";
    case  9 : return "Ninth Grade";
  case  10 : return "Tenth Grade";
   case 11 : return "Eleventh Grade";
 case   12 : return "Twelfth grade";
  case 13  : return "College student";
  case  14: return "Professor";
  
 
    
    }
    return " ";
    
}

