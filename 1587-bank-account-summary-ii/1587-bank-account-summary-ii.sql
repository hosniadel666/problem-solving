# Write your MySQL query statement below
WITH exp AS( SELECT account, SUM(amount) balance FROM Transactions
             GROUP BY account)
SELECT U.name, T.balance 
FROM Users U INNER JOIN exp T
USING(account)
WHERE T.balance > 10000;