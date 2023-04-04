--creating database
create database student;

--creating table in database
use student ;
create table student_data(std_id int primary key,std_name char(50),std_reg bigint);

--inseting some data in a database
insert into student_data values('1','ahmed','200901124');
insert into student_data values('2','usman','200901108');
insert into student_data values('3','awais','200901037');
insert into student_data values('4','mobeen','200901097');
insert into student_data values('5','hamza','200901019');
insert into student_data values('6','abdullah','200901019');
insert into student_data values('7','hasseb','200901019');
insert into student_data values('8','jameel','200901019');


