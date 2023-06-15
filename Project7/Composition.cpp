// composition
//#include <iostream>
//using namespace std;
//
//class Speaker 
//{
//public:
//    void PlaySound(const char* sound) 
//    {
//        cout << "Playing sound: " << sound << endl;
//    }
//};
//
//class Phone {
//private:
//    Speaker speaker;
//
//public:
//    void MakeCall(const char* number)
//    {
//        cout << "Dialing " << number << "..." << endl;
//        // Sound of dialing
//        speaker.PlaySound("Dialing");
//        // Connecting
//        speaker.PlaySound("Connecting");
//        // Razqovor
//        speaker.PlaySound("Hello, how are you...");
//    }
//};
//
//int main() 
//{
//    Phone phone;
//    phone.MakeCall("+0123456789");
//
//    return 0;
//}