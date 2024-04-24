class UserProfile:
	def __init__(self, username, biography=None):
		self.username = username
		self.biography = biography

	def set_biography(self, bio):
		self.biography = bio
	
	def clear_biography(self):
		self.biography = None

	def print_profile(self):
		print("Username:", self.username)
		if self.biography is not None:
			print("Biography: ", self.biography)
		else:
			print("No biography")

user = UserProfile("alice")
user.print_profile()
user.set_biography("A tech lover.")
user.print_profile()
