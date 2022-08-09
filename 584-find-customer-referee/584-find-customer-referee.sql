# Write your MySQL query statement below
#SOL. 1
# SELECT name 
# FROM Customer
# WHERE referee_id <> 2 OR referee_id IS NULL;

#SOL. 2
#COALESCE used to replace all null values in 
#referee with zeros before check if it's not equal 2

SELECT name 
FROM Customer
WHERE COALESCE(referee_id, 0) <> 2;
