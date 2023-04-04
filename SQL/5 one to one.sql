--one to one relation start from here
--creating a table employee
create table employee (id int primary key, name varchar(50))

--creating a table salary
create table salary(employee_id int unique not null,salary_amount int)

--linking tables using foreign key
alter table salary add constraint fk_salary_employee foreign key (employee_id) references employee (id)

--inserting data in employee
insert into employee values ('1','ahmed')
insert into employee values ('2','mobeen')

--insert data in salary
insert into salary values ('1','200')
insert into salary values ('2','400')

--to display both table data
select * from employee
select * from salary