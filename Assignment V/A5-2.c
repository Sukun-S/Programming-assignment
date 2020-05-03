  #include<stdio.h>
    #define MAX_SIZE 100
    int main()
    {
      //1
      char input_string[MAX_SIZE];
      char final_string[MAX_SIZE];
      int i,j = 0;
  
      printf("Enter your number : ");
      scanf("%[^\n]s",input_string);
      
      for(i = 2; input_string[i] != '\0'; i++){
        final_string[j] = input_string[i];
        if(input_string[i] == ' ' && input_string[i+1] != ' '){
          i++;
        }
        j++;
      }
      printf("\nFinal number: %s \n",final_string);
        return 0;
    }
