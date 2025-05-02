/*
Problem
Today, people from StartLink are going to get together and play soccer. Soccer is on a weekday afternoon and it is not mandatory to attend.
There are a total of N people who have gathered to play soccer, and curiously, N is an even number. Now we have to divide people into a start team of N/2 and a link team.

Like the company that runs the BOJ, people were assigned numbers from 1 to N, and the following capabilities were examined. 
The capability value Sij is the sum of the capability values of all pairs of a team. The capability value of a team is the sum of the capability values Sij of all pairs of a team. 
Sij may be different from Sji, and when people i and j are on the same team, the capability values added to a team are Sij and Sji.

Let's look at the case where N = 4, and S is as follows.

i\j	1	2	3	4
1	 	1	2	3
2	4	 	5	6
3	7	1	 	2
4	3	4	5	 
For example, if No. 1 and No. 2 belong to the start team and No. 3 and No. 4 belong to the link team, the ability values of the two teams are as follows.

Start Team: S12 + S21 = 1 + 4 = 5
Link Team: S34 + S43 = 2 + 5 = 7
If No. 1 and No. 3 belong to the start team and No. 2 and No. 4 belong to the link team, the ability values of the two teams are as follows.

Start Team: S13 + S31 = 2 + 7 = 9
Link Team: S24 + S42 = 6 + 4 = 10
In order to make soccer fun, the difference between the starting team's ability value and the link team's ability value is minimized. In the case of the above example, 
if teams 1 and 4 belong to the starting team, and teams 2 and 3 belong to the link team, the difference becomes 6 and the link team's ability value becomes 6, 
so the difference becomes 0, and this value is the minimum.

Input
The first line is given N (4 ≤ N ≤ 20, where N is even). From the second line, N lines are given S. Each line is made up of N numbers, 
and the jth number of line i is Sij. Sii is always 0, and the remaining Sij is an integer greater than or equal to 1, and less than or equal to 100.

Output
On the first line, output the minimum value of the difference between the ability values of the start team and the link team.
*/