# Write your MySQL query statement below
WITH exp AS(SELECT product_id FROM Sales 
            WHERE sale_date BETWEEN '2019-01-01' AND '2019-03-31'),
     exp2 AS(SELECT product_id FROM Sales 
            WHERE sale_date NOT BETWEEN '2019-01-01' AND '2019-03-31'),
     exp3 AS (SELECT product_id FROM exp WHERE product_id 
              NOT IN (SELECT * FROM exp2))
SELECT product_id, product_name 
FROM Product WHERE product_id IN (SELECT * FROM exp3);

#Better solution
# WITH exp AS (SELECT product_id FROM Sales 
#              GROUP BY product_id
#              HAVING MAX(sale_date) <= '2019-03-31'
#                     AND MIN(sale_date) >= '2019-01-01')
# SELECT product_id, product_name 
# FROM Product WHERE product_id IN (SELECT * FROM exp);