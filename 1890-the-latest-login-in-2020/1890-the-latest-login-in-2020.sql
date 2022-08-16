# Write your MySQL query statement below
SELECT user_id, MAX(time_stamp) last_stamp
FROM Logins
WHERE time_stamp REGEXP '^2020'
GROUP BY user_id;
