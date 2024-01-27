//PRIME NUMBER CHECKING

#include <stdio.h>
int main() {
  int n, i, flag = 0;
  printf("Enter a positive integer: \n");
  scanf("%d", &n); 
  if (n == 0 || n == 1)
    flag = 1;
  for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
      flag = 1;
      break;
    }
  }
   if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}




//&& is used for and operator which stops for single false value , & is used for and operator which checks all condition before giving resulas true or false
//similarluy | is used for or which checks all cases before result, while || is used for or which stops on first true value




//TRIANGULAR PATTERN OF STARS

#include <stdio.h>
int main(){
for (int i=5;i>0;i--){
    for (int j=0;j<i;j++)
        {printf("*");
        }
    printf("\n");
    }
    
    return 0;
}


//REVERSE TRIANGULAR PATTERN OF STARS



#include <stdio.h>
int main(){
for (int i=0;i<5;i++){
    for (int j=0;j<=i;j++)
        {printf("*");
        }
    printf("\n");
    }
    
    return 0;
}



//PRINT THE REVERSE OF AN INTEGER 



#include <stdio.h>
int main(){
    long int p,q;
    printf("Enter the number:\n");
    scanf("%ld",&p);
    while (p>0)
       { q=p%10;
        printf("%ld",q);

        p=p/10;
        }
return 0;
}



//PRINT ALPHABETIC TREE TYPE 1



#include <stdio.h>
int main(){
    int i;
    for (i=0;i<=5;i++){
            char m = 'A';
        for (int j=0;j<i;j++){
            printf("%c",m);
        
            m++;
        }
        printf("\n");
    }
return 0;
}



//PRINT APLPHABETIC TREE TYPE 2



#include <stdio.h>
int main(){
    int i;
        char m = 'A';
    for (i=0;i<5;i++){
        for (int j=0;j<=i;j++){
            printf("%c",m);
        }
        m++;
        printf("\n");
    }
return 0;
}


//SUM OF DIGITS OF 5 DIGIT INTEGER



#include <stdio.h>
int main(){
    int num;
    printf("Enter the 5 digit number:");
    scanf("%d",&num);
    int sum=0;
    int n=5;
    for(int i=0;i<n;i++){
        int temp=num%10;
        sum+=temp;
        num/=10;
    }
    printf("%d",sum);
    return 0;
}



//SIZE OF DATA TYPES 


#include <stdio.h>
int main(){
printf("%lu\n",sizeof(int));
printf("%lu\n",sizeof(char));
printf("%lu\n",sizeof(float));
printf("%lu\n",sizeof(double));
printf("%lu\n",sizeof(long long));
printf("%lu\n",sizeof(long double));

return 0;
}
