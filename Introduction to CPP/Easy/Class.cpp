#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
private:
	string name,surname;
	int age,standart;
public:
	void set_age(int a){age=a;}
    void set_standard(int st){standart=st;}
    void set_first_name(string first_name){name=first_name;}
    void set_last_name(string last_name){surname=last_name;}
	int get_age(){return age;}
	int get_standard(){return standart;}
	string get_first_name(){return name;}
	string get_last_name(){return surname;}
	string to_string(){
		string final;
		stringstream fx;
		// final.append( to_string(get_age());
		// final.append(",");
		// final.append(get_first_name());
		// final.append(",");
		// final.append(get_last_name());
		// final.append(",");
		// final.append(to_string(get_standard()));
		fx  <<get_age() << "," << get_first_name()<<","<<get_last_name()<<","<<get_standard();
		final=fx.str();
		return final;
	}
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
