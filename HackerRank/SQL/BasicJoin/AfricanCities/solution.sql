/*
====================================================
 Problem   : African Cities
 Platform  : HackerRank
 Domain    : Basic Join
 Difficulty: Easy

 Approach:
* Perform an `INNER JOIN` between `city` and `country` tables on `city.countrycode = country.code`
* Filter the results where `country.continent = 'Africa'`
* Select and return the `city.name` values


====================================================
*/

SET NOCOUNT ON;

SELECT city.name 
    FROM city INNER JOIN  Country 
    ON city.countrycode = country.code 
    where country.continent = 'Africa';
    
go