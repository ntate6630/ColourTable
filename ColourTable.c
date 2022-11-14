/* ASCII Escape code text and background colour table */<
<
#include <stdio.h><
<
main()<
{<
     int i, j;<
     int colour[1];<
<
     printf("\n\n  256 Extended text colours\n\n");<
<
     for(i = 0; i <= 15; i++)<
     {<
          for(j = 0; j <= 15; j++)<
          {<
               colour[0] = i * 16 + j;<
               printf("\x1b[38;5;%dm", colour[0]);
               printf("%5d", i * 16 + j);<
          }<
          printf("\n");
     }<
     printf("\x1b[0m");               /* Reset */<I
     printf("\n");<
<
     printf("\n  256 Extended background colours\n\n");<
<
     for(i = 0; i <= 15; i++)<
     {<
          for(j = 0; j <= 15; j++)<
          {<
               colour[0] = i * 16 + j;<
               printf("\x1b[48;5;%dm", colour[0]);<
               printf("%5d", i * 16 + j);<
          }<
          printf("\x1b\[0m");<
          printf("\n");<
     }<
     printf("\x1b[0m");               /* Reset */<
     printf("\n");<
}<
