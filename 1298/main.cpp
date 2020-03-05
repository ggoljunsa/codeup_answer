#include <bits/stdc++.h>
using namespace std;

int main()
{
   char word[110];
   gets(word);
   int len = strlen(word);
   for(int i=len-1; i>=0; i--)
   {
       printf("%c", word[i]);
   }
   return 0;
}
