import<stdio.h>

int isPower(int n)
{
  if(n>0 && (n & (n-1)) == 0)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int n:
  printf("Enter n:");
  scanf("%d",n);
   if(isPowerOfTwo(n))
        printf("%d is Power of 2", n);
    else
        printf("%d is NOT Power of 2", n);

    return 0;
}
