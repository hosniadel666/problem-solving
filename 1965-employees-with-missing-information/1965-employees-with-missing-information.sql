# Write your MySQL query statement below
# SELECT * FROM Employees
# LEFT JOIN Salaries ON Employees.employee_id = Salaries.employee_id
# UNION
# SELECT * FROM Employees
# RIGHT JOIN Salaries ON Employees.employee_id = Salaries.employee_id

WITH exp AS (SELECT employee_id FROM Employees INNER JOIN Salaries USING(employee_id))

SELECT employee_id FROM Employees WHERE employee_id NOT IN (SELECT * FROM exp)
UNION
SELECT employee_id FROM Salaries WHERE employee_id NOT IN (SELECT * FROM exp) 
ORDER BY employee_id;