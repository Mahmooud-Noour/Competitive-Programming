/*
====================================================
 Problem   : Average Population of Each Continent
 Platform  : HackerRank
 Domain    : Basic Join
 Difficulty: Easy

 Approach:
* Perform an `INNER JOIN` between `COUNTRY` and `CITY` on `CITY.CountryCode = COUNTRY.Code`
* Group the results by `COUNTRY.Continent`
* Compute the average population of cities in each continent using `AVG(CITY.Population)`
* Use `FLOOR()` to round down the average to the nearest integer
* Select the continent and its average population


====================================================
*/

SET NOCOUNT ON;

SELECT COUNTRY.Continent , FLOOR(AVG(CITY.Population))
    FROM COUNTRY INNER JOIN CITY 
    ON  CITY.CountryCode = COUNTRY.Code
    GROUP BY COUNTRY.Continent ; 

go