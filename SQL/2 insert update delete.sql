--insert start form here

--inseting a column
use student
alter table student_data add std_cgpa float

-- updating a whole specific column
use student;
update  student_data set std_cgpa = '3.0' where std_id  between 1 and 8

-- updating only one row of a specific column
use student;
update  student_data set std_cgpa = '3.5' where std_id =1 and std_id =3 and std_id = 5 and std_id=7

--deleting a specific row
delete from student_data where std_id = 8


--deleteing any column
alter table student_data drop column std_cgpa

-- deleting all rows
truncate table student_data 



--updating database name
sp_rename 'student_data.std_name','name'
sp_rename 'student_data.name','std_name'