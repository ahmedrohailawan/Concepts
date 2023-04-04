--creating a departement table
create table departement (dept_no int primary key, dept_name varchar(50),dept_strength int)

insert into departement values('1','computer science','300');
insert into departement values('2','Electrical','500');
insert into departement values('3','Mechanical','1000');

select * from departement




--creating a table std_data and linking it with departement
create table std_data(std_id int, std_name varchar (50),std_cgpa float, dept_no int foreign key references departement (dept_no))

insert into std_data values('1','ahmed','3.0','1');
insert into std_data values('2','mobeen','3.4','2');
insert into std_data values('3','awais','3.7','3');

select * from std_data




--creating a cs_std data table and exploring unique functions
create table cs_std(std_id int unique, std_name varchar(50) unique)

insert into cs_std values('1','ahmed');
insert into cs_std values('2','mobeen');

insert into cs_std values('2','mobeen');     --it will not accept this value because both already exist
insert into cs_std values('1','mobeen');	 --it will not accept this value because id already exist

select * from cs_std



-- cs_std1 data table and exploring not null functionalities
create table cs_std1(std_id int not null, std_name varchar(50) not null)

insert into cs_std1 values('1','mobeen');
insert into cs_std1 values('2','ahmed');
insert into cs_std1 values('2','awais');

insert into cs_std1 values(null,'awais')           --it will not accept this value because id can not be null 

select * from cs_std1




-- cs_std2 data table and exploring check functionalities
create table cs_std2(std_id int, std_name varchar(50),std_age int check(std_age>18))

insert into cs_std2 values('1','awais','20');
insert into cs_std2 values('2','ahmed','19');
insert into cs_std2 values(null,null,null);
insert into cs_std2 values('1','awais','20');

insert into cs_std2 values('2','ahmed','14');         --it will not accept this because of std_age check which is 18+

select * from  cs_std2


--cs_std3 data table and exploring check functionalities
create table cs_std3(std_id int, std_name varchar(50) check(std_name like 'a%a'),std_age int check(std_age>18))

insert into cs_std3 values('1','ahmed','20')
insert into cs_std3 values('1','Mobeen','20')
insert into cs_std3 values('1','bca','20')

insert into cs_std3 values('1','aa','20')
insert into cs_std3 values('1','asa','20')