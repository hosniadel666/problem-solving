
WITH exp AS (SELECT name, 
             CASE 
                WHEN SUM(distance) IS NULL THEN 0
                ELSE SUM(distance)
                END travelled_distance
             FROM Users LEFT JOIN Rides
             ON Users.id = Rides.user_id
             GROUP BY Users.id)
             
SELECT * FROM exp  ORDER BY travelled_distance DESC, name ASC;
