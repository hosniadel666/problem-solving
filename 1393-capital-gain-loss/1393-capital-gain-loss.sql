# Write your MySQL query statement below
WITH exp AS (SELECT stock_name, 
             CASE
                WHEN operation = 'Buy' THEN -1 * price
                ELSE price
                END price
             FROM Stocks
            )
SELECT stock_name, SUM(price) capital_gain_loss FROM exp GROUP BY stock_name;