# Write your MySQL query statement below
WITH exp AS (SELECT DISTINCT(salary) FROM Employee ORDER BY salary DESC LIMIT 2)
SELECT
CASE 
    WHEN 1 = (SELECT COUNT(salary) FROM exp) THEN NULL
    ELSE (SELECT salary FROM exp ORDER BY salary ASC LIMIT 1)
END SecondHighestSalary
FROM exp LIMIT 1;
    