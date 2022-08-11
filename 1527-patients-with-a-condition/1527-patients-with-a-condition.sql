# Write your MySQL query statement below
#Method 1 using LIKE clause
# SELECT patient_id, patient_name, conditions 
# FROM Patients
# WHERE conditions LIKE 'DIAB1%'
# OR conditions LIKE '% DIAB1%';

#Method 2 using REGEXP
SELECT patient_id, patient_name, conditions 
FROM Patients
WHERE conditions REGEXP '^DIAB1| DIAB1' ;