
#include <stdlib.h>
#include <stdio.h>   //standart input output kütüphanesi
#include <stdbool.h>  
#include <time.h>  //random sayı üretmek için gerekli olan kütüphane
#include <math.h>
#define NumSim 100000 

void main() {
      unsigned long int i,stay=0;
      int SecilenKapi,KazananKapi;
      bool kapi[6]={0,0,0,0,0,0}; 
      
      srand(time(NULL));  
	 
	  for(i=0;i<=NumSim;i++){
	  
	      KazananKapi=rand() % 6; 
	  
	      SecilenKapi=rand() % 6;  
	  
	      if(kapi[ KazananKapi ]=true,kapi[ SecilenKapi ])stay++;
	  
	      kapi[ KazananKapi ]=false;
	  
      } 
	  
     printf("\n %lu Secim sonrasi: \n sectim kapida kalirsam %u kere kazanirim . kapida kaldigimda kazanma oranim: %f%%. \n eger kapiyi degistirirsem %lu kere kazanirim. kapiyi degistirdimde kazanma oranim: %f%%",NumSim, stay, (float)stay*100.0/(float)i,abs(NumSim-stay),100-(float)stay*100.0/(float)i);
	
  }
