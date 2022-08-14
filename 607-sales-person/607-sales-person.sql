# Write your MySQL query statement below
WITH exp AS 
(SELECT SP.sales_id
FROM Orders O INNER JOIN SalesPerson SP USING(sales_id)
     INNER JOIN Company  C USING(com_id ) WHERE C.name = 'RED'
 )
 SELECT name FROM SalesPerson 
 WHERE sales_id NOT IN (SELECT * FROM exp);