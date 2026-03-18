/*
====================================================
 Problem   :  all American cities
 Platform  : HackerRank
 Domain    : Basic Select
 Difficulty: Easy

 Approach:

* Select all columns from the `city` table
* Filter rows where `countrycode = 'USA'` **and** `population > 100000`
* This returns all American cities with more than 100,000 people


====================================================
*/

SET NOCOUNT ON;
SELECT * FROM city
	WHERE countrycode = 'USA' and population > 100000 ; 
go