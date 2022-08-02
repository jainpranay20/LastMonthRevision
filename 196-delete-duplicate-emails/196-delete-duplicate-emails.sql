# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE p1
FROM Person p1, Person p2
WHERE (
    p1.email = p2.email AND p1.id > p2.id
)



# natural join

#DELETE tb1
#FROM Person tb1
#JOIN Person tb2 
#ON tb1.email = tb2.email
#WHERE tb1.id > tb2.id