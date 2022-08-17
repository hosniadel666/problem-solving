# Write your MySQL query statement below
WITH exp AS (
    SELECT O.buyer_id, U.join_date, COUNT(*) orders_in_2019 FROM 
    Users U INNER JOIN Orders O ON U.user_id = O.buyer_id
    WHERE O.order_date REGEXP '^2019'
    GROUP BY O.buyer_id)
SELECT * FROM exp
UNION
SELECT user_id, join_date, 0 orders_in_2019
FROM Users 
WHERE user_id NOT IN (SELECT buyer_id FROM exp);