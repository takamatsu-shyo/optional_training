#include <iostream>
#include <string>
#include <optional>

class UserProfile {
private:
	std::string username;
	std::optional<std::string> biography;

public:
	UserProfile(const std::string& username, const std::optional<std::string>& biography = std::nullopt)
		: username(username), biography(biography) {}

	void setBiography(const std::string& bio){
		biography = bio;
	}

	void clearBiography() {
		biography = std::nullopt;
	}

	void printProfile() const {
		std::cout << "Username: " << username << std::endl;
		if (biography) {
			std::cout << "Biography: " << *biography << std::endl;
		} else {
			std::cout << "No biography." << std::endl;
		}
	}
};

int main() {
	UserProfile user("alice");
	user.printProfile();
	user.setBiography("Enthusiast programmer and tech lover!");
	user.printProfile();
	return 0;
}
