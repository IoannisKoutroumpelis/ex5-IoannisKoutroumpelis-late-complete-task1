#include <stdio.h>  
#include <string.h>  
  // inspired from https://www.javatpoint.com/reverse-a-string-in-c


// use recursion function   
void revstr(char *str1)  
{   
     int i, len, temp,k,j;  
    len = strlen(str1); // use strlen() to get the length of str string  
      // for evrey
    for(i=0;i<len;i++){
            if(str1[i]=='\n') { // for evry row of the string recursing the characters with their symmetric
                k=i;
                // the -1 on evry k is used because the last character was the '\n' which we what to be static
                int h=k-1; // the pointer which defines the posision of it's symmetric
                while(j<k-1){ // changes the characters
                    temp = str1[j];  
                    str1[j] = str1[h];  
                    str1[h] = temp;
                    j++;
                    h--;
                }
                j=k;
            }    
    }     
}  
      
int main()  {  
        char *str1;   
        scanf("%s", &str1);  
          
        // call revstr() function   
        revstr(str1);  
        printf (" %s", str1);  
      return 0;
}


