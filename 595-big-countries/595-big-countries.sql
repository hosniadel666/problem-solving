SELECT name, population, area 
FROM World AS W
WHERE W.area >= 3000000 OR W.population >= 25000000;