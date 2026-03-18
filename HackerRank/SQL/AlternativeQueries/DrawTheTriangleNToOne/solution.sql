/*
====================================================
 Problem   : Draw The Triangle 1
 Platform  : HackerRank
 Domain    : Alternative Queries
 Difficulty: Easy

 Approach:

* Use a recursive CTE (`Numbers`) to generate a sequence from `N` down to `1`
* For each number `N` in the sequence, use `REPLICATE('* ', N)` to print that many asterisks
* This produces a triangle of stars, starting from the largest row down to 1


====================================================
*/

SET NOCOUNT ON;

WITH Numbers AS
(
    SELECT 20 AS N 
    UNION ALL 
    
    SELECT N - 1 
    FROM Numbers 
    WHERE N > 1 
)

SELECT REPLICATE('* ' , N)
FROM Numbers;

go