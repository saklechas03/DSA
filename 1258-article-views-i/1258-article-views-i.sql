# Write your MySQL query statement below
select Distinct author_id AS id FROM Views
WHERE author_id=viewer_id
ORDER BY id;