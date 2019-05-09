#include<stdio.h>
int a[9][9];
int b[9][9];
int sayac6=0;
int sayac7=0;
int  S(int row,int col,int value)
{ 
int i,j;
int sayac=0;
int sayac2=0;

printf("writing %d into (%d,%d)\n",value,row,col);


if((row<0) || (row>=9) ||  (col<0) || (col>=9) || (value<0 || value>9)){
if((row<0) || (row>=9))
{
   printf("invalid row index: %d!\n",row);
}

if((col<0) || (col>=9))
{
   printf("invalid col index: %d!\n",col);
}
if(value<0 || value>9)
{
   printf("invalid cell value: %d!\n",value);
}
}


else {

  if(b[row][col]==0)
     {
     if(value==0)

{
  a[row][col]=value;
  printf("Done !\n");
return 0;
}
        for(i=0;i<9;i++)
        { 
            if(a[i][col]==value  )

            break;
   
        }
              if(a[i][col]==value  )
              {
           hata(value);
           rowcol(value);
           sayac2++;
              
              }
              
              for(i=0;i<9;i++)
                  {
            if(a[row][i]==value  )
 
            break;
   
                     }
             if(a[row][i]==value  )
              { if(!sayac2)
                  { 
                      hata(value);
                      rowcol(value);
                      sayac2++;
                  }
              }
              
        /////1.GRİD      
              
if(row>=0 && row<=2)
  {
     if(col>=0 && col<=2)
     {
        for(i=0;i<=2;i++)
        {
          for(j=0;j<=2;j++)
          {
             
             if(a[i][j]==value)
            {
              if(!sayac2)
              {
                hata(value);
                printf("%d already exists in the 3x3 grid\n",value);
                sayac2++;
            }
              else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; }        
     
            }        
             
    
          }
        }
         
           
     } ////2.GRİD
     if(col>=3 && col<=5)
     {
        for(i=0;i<=2;i++)
        {
          for(j=3;j<=5;j++)
          {
            
           if( a[i][j]==value)
           {
              if(!sayac2)
            {
               hata(value);
               printf("%d already exists in the 3x3 grid\n",value);
               sayac2++;
            }
            else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }
             
     
            
         }
         } 
     } ///////3.GRİD
      if(col>=6 && col<=8)
     {
        for(i=0;i<=2;i++)
        {
          for(j=6;j<=8;j++)
          {
            if( a[i][j]==value)
           {
               if(!sayac2)
               {
               hata(value);
               printf("%d already exists in the 3x3 grid\n",value);
               sayac2++;
                }
                else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }       
          }
        }
          
     }
   
  }
  ////////4.GRİD
  if(row>=3 && row<=5)
  {
     if(col>=0 && col<=2)
     {
        for(i=3;i<=5;i++)
        {
          for(j=0;j<=2;j++)
          {
            if( a[i][j]==value)
           {
              if(!sayac2)
            {
               hata(value);
               printf("%d already exists in the 3x3 grid\n",value);
               sayac2++;
            }
            else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }
            
          }
        }
         
     }/////////5.GRİD
     if(col>=3 && col<=5)
     {
        for(i=3;i<=5;i++)
        {
          for(j=3;j<=5;j++)
          {
            if( a[i][j]==value)
           {
              if(!sayac2)
            {
               hata(value);
               printf("%d already exists in the 3x3 grid\n",value);
               sayac2++;
            }
            else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }
            
          }
        }
         
     }////////6.GRİD
     if(col>=6 && col<=8)
     {
        for(i=3;i<=5;i++)
        {
          for(j=6;j<=8;j++)
          {
            if( a[i][j]==value)
           {
              if(!sayac2)
            {
               hata(value);
               printf("%d already exists in the 3x3 grid\n",value);
               sayac2++;
            }
            else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }
           
          }
        }
     }
    }
 ////////////////7.GRİD
     if(row>=6 && row<=8)
  {
     if(col>=0 && col<=2)
     {
        for(i=6;i<=8;i++)
        {
          for(j=0;j<=2;j++)
          {
           if( a[i][j]==value)
           {
              if(!sayac2)
           {
              hata(value);
              printf("%d already exists in the 3x3 grid\n",value);
              sayac2++;
           }
           else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }
             
          }
        }
          
     }///////////////8.GRİD
      if(col>=3 && col<=5)
     {
        for(i=6;i<=8;i++)
        {
          for(j=3;j<=5;j++)
          {
            if( a[i][j]==value)
           {
               if(!sayac2)
            {
               hata(value);
               printf("%d already exists in the 3x3 grid\n",value);
               sayac2++;
            }
            else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }
           
          }
        }
       
         
     }/////////////////9.GRİD
      if(col>=6 && col<=8)
     {
        for(i=6;i<=8;i++)
        {
          for(j=6;j<=8;j++)
          {
           if( a[i][j]==value)
           {
              if(!sayac2)
            {
                hata(value);
                printf("%d already exists in the 3x3 grid\n",value);
                sayac2++;
            }
            else if(sayac2>0)
             
             { printf("%d already exists in the 3x3 grid\n",value);
                sayac2++; } 
     
    }
             
          }
        }
          
     }
     
  
}            
            
  
  
  
 
              
 
            /*for(i=(row/3)*3;i<((row/3)+1)*3;i++)
            {
            for(j=(col/3)*3;j<((col/3)+1)*3;j++)
            {
            if(a[i][j]==value)
             break;
             }
             break;
}
 if(a[i][j]==value)
{
     if(!sayac2)
     {hata(value);
     printf("%d already exists in the 3x3 grid\n",value);}
     
}*/
    

if(!sayac2)
{
 printf("done !\n");
 a[row][col]=value;
}
 
  return 1;
  }


 

else
{
printf("you can not change the value of (%d,%d)\n",row,col);
}}
}


// hata row coloumn
int rowcol(int value)
{printf("%d already exists in the row or coloumn\n",value);}





//hata fonksiyonu
int hata(int value)
{

printf("you can not put %d there! \n",value);
}

int sifirkontrol()
{
int i,j;
int count=0;
for(i=0;i<9;i++)
  {
     for(j=0;j<9;j++)
     {
        if(a[i][j]==0)
        {count++;}
     }
         
   } if(!count)
   
       return 0;
     
   else
   return 1;
   }



int K()
{  printf("switched to the keypad mode!\n");
   static int str=0,p=0;
   int value,row,col;
   char ch;
   int sayac6=0;
   int i,j;
   int sayac5;
   
   
   while(sifirkontrol()){
   scanf("%c",&ch);
   if(ch=='s')
   
  { 
    if(str+1>8)
    printf("east:invalid move !\n");
    else
    {str++;
    
    printf("east\n");}}
     else if(ch=='a')
   { if(str-1<0)
      printf("west:invalid move !\n");
      else
      {str--;
      printf("west\n");}
    }
   else if(ch=='w')
    {
    if(p-1<0)
    {printf("north:invalid move !\n");}
    else
     {p--;
     printf("north\n");}
    }
    else if(ch=='z')
    {if(p+1>8)
    printf("south:invalid move !\n");
    else
     {p++;
     printf("south\n");}
    }
    
    else if(ch=='p')
    {
    {scanf("%d",&value);
     S(p,str,value);
     }
    
    }

      else if(ch=='x')
      {
         yildiz(p,str);
      
      } 
      else if(ch=='e')
      {
      printf("ended keypad mode !\n");
      break;
      }
   
   
   
   
   }   
   if(!sifirkontrol())
{if(sayac5){bitir();
sayac6++;}

}

   
}
int yildiz(int row,int col)
{
   int i,j;
   
  for(i=0;i<9;i++)
  {
     for(j=0;j<9;j++)
     {
     if(i==row && j==col)
     printf("* ");
     else
        printf("%d ",a[i][j]);
     }
         printf("\n");
    } 
  printf("------------------\n");
}

  
int P()
{
char ch;
   int i,j;
   
  if(!sayac7)
  {
  for(i=0;i<9;i++)
  {
     for(j=0;j<9;j++)
     {
        printf("%d ",a[i][j]);
     }
         printf("\n");
    } 
  printf("------------------\n"); }if(sayac7)sayac7--;
}
int R()
{
int i,j;

 printf("reloading the original puzzle\n");
 for(i=0;i<9;i++)
  {
     for(j=0;j<9;j++)
     {
        printf("%d ",b[i][j]);
     }
         printf("\n");
   } 
printf("------------------\n");
sayac7++;
}
int  Q()
{ 
   int i,j;
   for(i=0;i<9;i++)
  {
     for(j=0;j<9;j++)
     {
       if(a[i][j]==0)
       return 0;
     }
   }printf("Well Done :)\nTHE GAME İS OVER !\n");}
  
  
  
  
int bitir()
{
P();Q();

}


int main()
{
int i,j;
char ch;
int row,col,value;
int count;
int sayac5=0;
int sayac6;

  for(i=0;i<9;i++)
  {
  
    for(j=0;j<9;j++)
    {
    scanf("%d ",&a[i][j]);
    }
  }  
for(i=0;i<9;i++)
  {
     for(j=0;j<9;j++)
     {
       b[i][j]=a[i][j];
     }
  }
 while(sifirkontrol())
{scanf("%c",&ch);
if(ch=='S')
{scanf("%d %d %d",&row,&col,&value);
   S(row,col,value);
}
 else if(ch=='P')
{
   P();
}
else if(ch=='R')
{
   R();
}
else if(ch=='K')
{
   K();
} 
else if(ch=='Q')
{   
    P();
    if(Q())
    
    
 { printf("Well Done :)\nTHE GAME İS OVER!\n");}
   break;
}}
if(!sifirkontrol())
{
if(!sayac6){bitir();
sayac5++;
}}}
