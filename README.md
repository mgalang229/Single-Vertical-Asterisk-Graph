# Single-Vertical-Asterisk-Graph
---  
# Sample Input 0
4  
2 3 7 6  
# Sample Output 0
<pre>
  *
  **
  **
  **
 ***
****
****
</pre>
---  
# Explanation
<pre>
0 + 2 = 2 >= 7 ? SPACE
0 + 3 = 3 >= 7 ? SPACE
0 + 7 = 7 >= 7 ? ASTERISK
0 + 6 = 6 >= 7 ? SPACE
ENDL
1 + 2 = 3 >= 7 ? SPACE
1 + 3 = 4 >= 7 ? SPACE
1 + 7 = 8 >= 7 ? ASTERISK
1 + 6 = 7 >= 7 ? ASTERISK
ENDL
2 + 2 = 4 >= 7 ? SPACE
2 + 3 = 5 >= 7 ? SPACE
2 + 7 = 9 >= 7 ? ASTERISK
2 + 6 = 8 >= 7 ? ASTERISK
ENDL
3 + 2 = 5 >= 7 ? SPACE
3 + 3 = 6 >= 7 ? SPACE
3 + 7 = 10 >= 7 ? ASTERISK
3 + 6 = 9 >= 7 ? ASTERISK
ENDL
4 + 2 = 6 >= 7 ? SPACE
4 + 3 = 7 >= 7 ? ASTERISK
4 + 7 = 11 >= 7 ? ASTERISK
4 + 6 = 10 >= 7 ? ASTERISK
ENDL
5 + 2 = 7 >= 7 ? ASTERISK
5 + 3 = 8 >= 7 ? ASTERISK
5 + 7 = 12 >= 7 ? ASTERISK
5 + 6 = 11 >= 7 ? ASTERISK
ENDL
6 + 2 = 8 >= 7 ? ASTERISK
6 + 3 = 9 >= 7 ? ASTERISK
6 + 7 = 13 >= 7 ? ASTERISK
6 + 6 = 12 >= 7 ? ASTERISK
</pre>
---  
