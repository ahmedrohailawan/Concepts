-- select all data of a table
select * from student_data

--select top elements
select top 3 * from student_data

--select distinct or unique values
select distinct std_name from student_data

--using select change table name to display user
select std_id as id from student_data

--select to display data in descending order
select *  from student_data order by std_name desc

--select a row with condition of null column
select * from student_data where std_reg is NULL

--select with or condition and using id
select * from student_data where std_id=1 or std_id=2

--select with and condition and using id
select * from student_data where std_reg=200901124 and std_id = 1

--slect data using specific std_name
select * from student_data where std_name in ('ahmed rohail')

