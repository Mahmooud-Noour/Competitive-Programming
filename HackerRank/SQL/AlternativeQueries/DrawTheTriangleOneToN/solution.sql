/*
====================================================
 Problem   : Draw The Triangle 2
 Platform  : HackerRank
 Domain    : Alternative Queries
 Difficulty: Easy

 Approach:

* Use a recursive CTE (`NUMBERS`) to generate numbers from 1 up to 20
* For each number `N`, use `REPLICATE('* ', N)` to print a row with `N` asterisks
* This creates a triangle of stars that grows from 1 to 20 rows


====================================================
*/

SET NOCOUNT ON;

WITH NUMBERS AS 
(
    SELECT 1 AS N 
    UNION ALL 
    SELECT N + 1 
    FROM NUMBERS 
    WHERE N < 20
)
SELECT REPLICATE ('* ' , N)
FROM NUMBERS 
OPTION (MAXRECURSION 20) ;
go