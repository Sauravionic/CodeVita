#include <iostream>

using namespace std;

int main(void) {

  long long t,length = 1,maxl = 0,i;

  cin >> t;

  long long s[t];

  for(i = 0; i< t; i++){
      cin >> s[i];  
  }
   int lastindex = 0;
   int beginindex = 0;
   for(i = 0; i < t-1; i++)
    {
        if(s[i] <= s[i+1]  ){
            length++;
        }

         else {
             if(length > maxl)
             {
                 maxl = length;
                 lastindex = i;
                 beginindex = lastindex-(length-1);
             }
             length = 1;
         } 
           
    }
    if(length > maxl)
             {
                 maxl = length;
                 lastindex = i;
                 beginindex = lastindex-(length-1);
             }

    for(i = beginindex; i <= lastindex; i++)
     {
         cout << s[i] << " ";
     }
    return 0;

}



