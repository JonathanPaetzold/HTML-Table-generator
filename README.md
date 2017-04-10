# HTML-Table-generator


this program generates html code for a table of letters(5 letters per line).  The table merges together all letters that are the same given they are vertically adjacent for example 

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


The program can generate how ever many rows you wish but is currently fixed at 5 columns
