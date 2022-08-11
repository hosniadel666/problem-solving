# Write your MySQL query statement below
SELECT sell_date, COUNT(DISTINCT(product)) num_sold, group_concat(DISTINCT(product)) products
FROM Activities GROUP BY sell_date ORDER BY sell_date ;