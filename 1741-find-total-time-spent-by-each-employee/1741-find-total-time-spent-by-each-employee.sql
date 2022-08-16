# Write your MySQL query statement below
WITH exp AS (SELECT event_day day,emp_id, (out_time - in_time) total_time FROM Employees)
SELECT day day,emp_id, SUM(total_time) total_time
FROM exp
GROUP BY emp_id, day;