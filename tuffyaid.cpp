#include "emergency.hpp"
#include <iostream>
#include <string>
int main() {

  Emergency emergency1, emergency2, emergency3;
  std::string prioritized_emergency_description;
  std::string prioritized_emergency_location;
  int prioritized_emergency_time;
  std::cout << "Welcome to TuffyAid Emergency Response!\n\n";
  std::cout << "Emergency 1:\n";
  emergency1 = create_emergency();
  std::cin.ignore();
  std::cout << "\nEmergency 2:\n";
  emergency2 = create_emergency();
  std::cin.ignore();
  std::cout << "\nEmergency 3:\n";
  emergency3 = create_emergency();
  std::cin.ignore();
  if (emergency1.set_report_time() <= emergency2.set_report_time()
     && emergency1.set_report_time() <= emergency3.set_report_time()) {
     prioritized_emergency_description = emergency1.set_description();
     prioritized_emergency_location = emergency1.set_location();
     prioritized_emergency_time = emergency1.set_report_time();
   } else if (emergency2.set_report_time() <= emergency1.set_report_time()
              && emergency2.set_report_time() <= emergency3.set_report_time()) {
      prioritized_emergency_description = emergency2.set_description();
      prioritized_emergency_time = emergency2.set_report_time();
      prioritized_emergency_location = emergency2.set_location ();
   } else if (emergency3.set_report_time() <= emergency1.set_report_time()
              && emergency3.set_report_time() <= emergency2.set_report_time()) {
      prioritized_emergency_description = emergency3.set_description();
      prioritized_emergency_time = emergency3.set_report_time();
      prioritized_emergency_location = emergency3.set_location();
    }
  std::cout << "\n\nThe latest incident is " << prioritized_emergency_description
            << " at " << prioritized_emergency_location << " reported on "
            << prioritized_emergency_time << ". Please " << "prioritize this"
            << "area.\n";
}
