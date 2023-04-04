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
select * from student inner join courses ON student.course_id=courses.course_id

select * from student s inner join courses c ON s.course_id=c.course_id
select * from student s left outer join courses c ON s.course_id=c.course_id
select * from student s right outer join courses c ON s.course_id=c.course_id
select * from student s full outer join courses c ON s.course_id=c.course_id
