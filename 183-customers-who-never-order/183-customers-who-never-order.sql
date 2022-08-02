# Write your MySQL query statement below
select name as Customers 
from Customers 
left join orders
ON Customers.id=orders.CustomerId
where orders.customerId Is NULL