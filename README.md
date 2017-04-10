# HTML-Table-generator


this program generates html code for a table of characters(5 per line).  The table merges together all characters that are the same given they are vertically adjacent for example 

a b c d e

a b w x y

a x y a w

b b y a w

generates this table 
<table border='1'>
<tr><td rowspan='3'>a</td><td rowspan='2'>b</td><td rowspan='1'>c</td><td rowspan='1'>d</td><td rowspan='1'>e</td></tr>
<tr><td rowspan='1'>w</td><td rowspan='1'>x</td><td rowspan='1'>y</td></tr>
<tr><td rowspan='1'>x</td><td rowspan='2'>y</td><td rowspan='2'>a</td><td rowspan='2'>w</td></tr>
<tr><td rowspan='1'>b</td><td rowspan='1'>b</td></tr>

</table>


and 

1 2 a b s

1 3 4 b s

2 3 f x s

2 4 f z 1

5 6 2 z 1

2 z q 2 3 

3 5 q 2 2

generates this table 
<table border='1'>
<tr><td rowspan='2'>1</td><td rowspan='1'>2</td><td rowspan='1'>a</td><td rowspan='2'>b</td><td rowspan='3'>s</td></tr>
<tr><td rowspan='2'>3</td><td rowspan='1'>4</td></tr>
<tr><td rowspan='2'>2</td><td rowspan='2'>f</td><td rowspan='1'>x</td></tr>
<tr><td rowspan='1'>4</td><td rowspan='2'>z</td><td rowspan='2'>1</td></tr>
<tr><td rowspan='1'>5</td><td rowspan='1'>6</td><td rowspan='1'>2</td></tr>
<tr><td rowspan='1'>2</td><td rowspan='1'>z</td><td rowspan='2'>q</td><td rowspan='2'>2</td><td rowspan='1'>3</td></tr>
<tr><td rowspan='1'>3</td><td rowspan='1'>5</td><td rowspan='1'>2</td></tr>

</table>




The program can generate how ever many rows you wish but is currently fixed at 5 columns
