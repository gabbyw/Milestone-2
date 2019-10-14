#include "emergency.hpp"


  Emergency create_emergency() {
  Emergency obj;
  std::string description;
  std::string location;
  int report_time;
  std::cout << "Please describe the emergency: ";
  std::getline(std::cin,description);
  std::cout << "Provide the location of the emergency: ";
  std::getline(std::cin,location);
  std::cout << "Please enter the time that the emergency was reported: ";
  std::cin >> report_time;
  obj.Emergency_info(description, location, report_time);
  return obj;
}
