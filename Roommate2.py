class Roommate:
	def __init__(self,Name,Age,StudentId,Course,College):
		self.Name=Name
		self.Age=Age
		self.StudentId=StudentId
		self.Course=Course
		self.College=College
		
	def describe_roommate(self):
		 	print("The description of my roommate is!!")
		 	print("Name -",self.Name,
		 	 "\nAge-",self.Age, 
		 	 "\nStudentId -" ,self.StudentId,
		 	 "\nCourse -",self.Course,
		 	 "\nCollege -",self.College)
		 	

my_roommate=Roommate(Name="Robert",Age=22,StudentId="ENC221-0123/2024",Course="Geomatic Engineering",College="COETEC" )
		 
my_roommate.describe_roommate()