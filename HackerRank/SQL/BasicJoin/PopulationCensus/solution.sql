/*
====================================================
 Problem   : Population Census
 Platform  : HackerRank
 Domain    : Basic Join
 Difficulty: Easy

 Approach:

* Perform an `INNER JOIN` between `City` and `Country` on `City.CountryCode = Country.Code`
* Filter rows where `Country.continent = 'Asia'`
* Use `SUM(City.population)` to calculate the total population of all cities in Asia

 
====================================================
*/

SET NOCOUNT ON;

SELECT SUM(City.population) 
    FROM City INNER JOIN Country
    ON CITY.CountryCode = COUNTRY.Code
    WHERE  Country.continent = 'Asia'; 
go
