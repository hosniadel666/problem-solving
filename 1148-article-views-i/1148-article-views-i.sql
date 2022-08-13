# Write your MySQL query statement below

WITH exp AS (SELECT * FROM Views GROUP BY article_id, author_id, viewer_id, view_date)
SELECT author_id id FROM exp
WHERE author_id = viewer_id
GROUP BY author_id
ORDER BY author_id ASC;