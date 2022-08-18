# Write your MySQL query statement below
SELECT email Email FROM PERSON GROUP BY email HAVING COUNT(*) > 1;