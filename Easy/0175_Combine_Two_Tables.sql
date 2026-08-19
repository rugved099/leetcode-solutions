-- Problem: Combine Two Tables
-- Problem ID: 175
-- Difficulty: Easy
-- Language: MySQL
-- Runtime: 420 ms
-- Memory: 0B
-- Synced From: LeetCode
-- Date: 2026-08-19

# Write your MySQL query statement below
SELECT
p.firstName,
p.lastName,
a.city,
a.state

FROM
Person p

LEFT JOIN
Address a on  p.personId=a.personId;