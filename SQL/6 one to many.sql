--one to manay start from here
--creating a table city
CREATE TABLE city(city_id int IDENTITY,city varchar(255) NOT NULL,country_id int NOT NULL,CONSTRAINT fk_city PRIMARY KEY CLUSTERED(city_id));

--creating a table country
CREATE TABLE country(country_id int IDENTITY,country varchar(255) NOT NULL,CONSTRAINT fk_country PRIMARY KEY CLUSTERED(country_id));

--linking tables with foreign key
ALTER TABLE city ADD CONSTRAINT cityX FOREIGN KEY(country_id) REFERENCES country(country_id);

--insertion in country table
INSERT INTO country(country) VALUES ('Pakistan'),('Turkey');

--insertion in city table
INSERT INTO city(city,country_id) VALUES ('Islamabad',1),('Quetta',1),('Karachi',1);
INSERT INTO city(city,country_id) VALUES ('Istanbul',2),('Antalya',2),('Izmir',2),('Uskudar',2)

--to display both table data
SELECT * FROM country;
SELECT * FROM city;
