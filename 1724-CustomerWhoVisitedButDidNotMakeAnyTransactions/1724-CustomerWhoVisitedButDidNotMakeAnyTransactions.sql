-- Last updated: 03/03/2026, 20:06:06
-- Solution using LEFT JOIN
SELECT
  v.customer_id,
  COUNT(*) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
  ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL   -- keep only visits with no transactions
GROUP BY v.customer_id;
