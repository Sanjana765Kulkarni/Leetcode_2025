-- Last updated: 09/10/2025, 09:40:03
# Write your MySQL query statement below
select p.product_name, s.year, s.price from sales s join product p on s.product_id = p.product_id;