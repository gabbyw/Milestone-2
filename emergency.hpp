#include <iostream>
#include <string>

class Emergency {
private:
  std::string description_;
  std::string location_;
  int report_time_;
public:
  void Emergency_info(std::string descrip, std::string locate, int time) {
    description_ = descrip;
    location_ = locate;
    report_time_ = time;
  }
  std::string set_description() {
    return description_;
  }
  //void set_location_(std::string location) {
    //location_ = location;
  std::string set_location() {
    return location_;
  }
  //void set_report_time_(int report_time) {
    //report_time_ = report_time;
  int set_report_time() {
    return report_time_;
  }
};

  Emergency create_emergency();
