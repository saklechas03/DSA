# Write your MySQL query statement below
select  v.customer_id,count(*) AS count_no_trans 
from Visits v
left join Transactions t
on v.visit_id = t.visit_id
where transaction_id IS NULL
GROUP BY v.customer_id
Order by customer_id;