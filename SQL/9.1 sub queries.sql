--creating database
create database subquery

--creating table student
create table student(
	s_id int,
	s_name varchar(20),
	s_cgpa float,
	s_dep varchar(50),
)
-- finding maximum cgpa of student
select MAX(s_cgpa) from student

--finding maximum cgpa using inner and outer query
select * from student where s_cgpa = (select MAX(s_cgpa) from student)

--finding department of other student as first two student department 
select * from student where s_cgpa = (select s_cgpa from student where s_name = 'ahmed') or s_cgpa = (select s_cgpa from student where s_name = 'mobeen')