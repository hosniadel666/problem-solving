# Write your MySQL query statement below
WITH exp1 AS (SELECT COUNT(*) order_number, customer_number FROM Orders 
             GROUP BY customer_number ),
     exp2 AS (SELECT MAX(order_number) FROM exp1)

SELECT customer_number FROM exp1 WHERE order_number IN (SELECT * FROM exp2);