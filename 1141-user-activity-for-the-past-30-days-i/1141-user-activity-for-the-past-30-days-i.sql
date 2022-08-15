# Write your MySQL query statement below

WITH exp AS (SELECT * FROM Activity GROUP BY user_id, activity_date)

SELECT activity_date day, COUNT(*) active_users FROM exp
WHERE activity_date BETWEEN '2019-06-28' AND '2019-07-27'
GROUP BY activity_date 
ORDER BY activity_date;
