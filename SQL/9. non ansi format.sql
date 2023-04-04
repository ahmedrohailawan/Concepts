create database cs
use cs

create table student(
	s_id int,
	s_name varchar(20),
	course_id int
)

create table courses(
	course_id int,
	cname varchar(20),
	chrs int,
)

select * from student
select * from courses



select * from student s ,courses c WHERE s.course_id =c.course_id
select * from student s ,courses c WHERE s.course_id !=c.course_id
select * from student s ,courses c WHERE s.course_id <=c.course_id
select * from student s ,courses c WHERE s.course_id >=c.course_id

select * from student s1,student s2 where s1.course_id =  s2.course_id
select * from student s1,student s2 where s1.course_id =  s2.course_id and s2.course_id = 3
select * from student s1,student s2 where s1.course_id =  s2.course_id and s1.s_id = 1