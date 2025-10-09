-- Last updated: 09/10/2025, 09:39:59
# Write your MySQL query statement below
select eu.unique_id, e.name from employees e left join employeeuni eu on e.id = eu.id;