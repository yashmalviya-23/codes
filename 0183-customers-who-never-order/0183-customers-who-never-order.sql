# Write your MySQL query statement below
SELECT name AS Customers FROM customers c WHERE c.id NOT IN (SELECT customerid FROM orders);