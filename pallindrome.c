import<stdio.h>
import<string.h>

int main()
{
  int i;
  int flag=1;
  char str[100];
  scanf("%s",&str);
  len=strlen(str);
  for(i=0;i<len/2;i++)
    {
      if(str[i] == str[i-len-1])
      {
        flag=0;
        break;
      }
    }
  if(flag)
  {
    printf("pellindrome\n");
  }
    else
  {
    printf("not");
  }
  retun 0;
}
