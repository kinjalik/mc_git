
class Rooms {

	int number;
	int level;
	
	open(User u){
		if(u.level>level) {
			return true;
		}
		return false;
	}
}
