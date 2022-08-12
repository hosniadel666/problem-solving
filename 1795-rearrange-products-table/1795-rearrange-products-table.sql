# Write your MySQL query statement below
WITH store_1 AS (SELECT product_id, 'store1' as store,store1 AS price FROM Products WHERE store1 IS NOT NULL),
     store_2 AS (SELECT product_id, 'store2' as store, store2 AS price FROM Products WHERE store2 IS NOT NULL),
     store_3 AS (SELECT product_id, 'store3' as store, store3 AS price FROM Products WHERE store3 IS NOT NULL)
SELECT * FROM store_1
UNION 
SELECT * FROM store_2
UNION 
SELECT * FROM store_3
ORDER BY product_id
;