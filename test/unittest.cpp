#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "gtest_ext.h"
#include "../emergency.hpp"
 
using ::testing::HasSubstr;

TEST(EmergencyClass, DescriptionAccessorMutator) {
  Emergency your_emergency;
  std::string description = "Wildland Fire";
  your_emergency.set_description(description);
  ASSERT_EQ(your_emergency.description(), "Wildland Fire") << "Hint: The mutator was used to set the description to Wildland Fire so the accessor needs to return the same value.";
}

TEST(CreateEmergency, CheckDescription) {
  Emergency your_emergency;
  SIMULATE_CIN("Magnitude 5.0 Earthquake\nLittle Lake\n2049\n", { 
    your_emergency = create_emergency();
  });
  ASSERT_EQ(your_emergency.description(), "Magnitude 5.0 Earthquake") << "Hint: The function should assign Wildland Fire as the description for the Emergency object.";
}
 
TEST(Input, RetrieveEmergenciesAndTimes) {
    std::string user_input = "Magnitude 5.0 Earthquake\nLittle Lake\n2049\nWildland Fire\nBeaumont\n922\nVegetation Fire\nAguanga\n1602\n";
    ASSERT_EXECEXIT("tuffyaid", user_input, 3);
}

TEST(Output, ShowOldestEmergencyFirst) {
    std::string user_input = "Wildland Fire\nBeaumont\n922\nMagnitude 5.0 Earthquake\nLittle Lake\n2049\nVegetation Fire\nAguanga\n1602\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("Wildland Fire"))
      << "Hint: Your program should select Wildland Fire as the oldest emergency.";
}

TEST(Output, ShowOldestEmergencyLocationFirst) {
    std::string user_input = "Wildland Fire\nBeaumont\n922\nMagnitude 5.0 Earthquake\nLittle Lake\n2049\nVegetation Fire\nAguanga\n1602\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("Beaumont"))
      << "Hint: Your program should display the location of the oldest emergency, Beaumont.";
}
 
TEST(Output, ShowOldestEmergencyTimeFirst) {
  std::string user_input = "Wildland Fire\nBeaumont\n922\nMagnitude 5.0 Earthquake\nLittle Lake\n2049\nVegetation Fire\nAguanga\n1602\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("922"))
      << "Hint: Your program should display the report time of the oldest emergency, 922.";
}
 
TEST(Output, ShowOldestEmergencyMid) {
    std::string user_input = "Magnitude 5.0 Earthquake\nLittle Lake\n2049\nWildland Fire\nBeaumont\n922\nVegetation Fire\nAguanga\n1602\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("Wildland Fire"))
      << "Hint: Your program should select Wildland Fire as the oldest emergency.";
}

TEST(Output, ShowOldestEmergencyLocationMid) {
    std::string user_input = "Magnitude 5.0 Earthquake\nLittle Lake\n2049\nWildland Fire\nBeaumont\n922\nVegetation Fire\nAguanga\n1602\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("Beaumont"))
      << "Hint: Your program should display the location of the oldest emergency, Beaumont.";
}
 
TEST(Output, ShowOldestEmergencyTimeMid) {
  std::string user_input = "Magnitude 5.0 Earthquake\nLittle Lake\n2049\nWildland Fire\nBeaumont\n922\nVegetation Fire\nAguanga\n1602\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("922"))
      << "Hint: Your program should display the report time of the oldest emergency, 922.";
}

TEST(Output, ShowOldestEmergencyLast) {
    std::string user_input = "Magnitude 5.0 Earthquake\nLittle Lake\n2049\nVegetation Fire\nAguanga\n1602\nWildland Fire\nBeaumont\n922\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("Wildland Fire"))
      << "Hint: Your program should select Wildland Fire as the oldest emergency.";
}

TEST(Output, ShowOldestEmergencyLocationLast) {
    std::string user_input = "Magnitude 5.0 Earthquake\nLittle Lake\n2049\nVegetation Fire\nAguanga\n1602\nWildland Fire\nBeaumont\n922\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("Beaumont"))
      << "Hint: Your program should display the location of the oldest emergency, Beaumont.";
}
 
TEST(Output, ShowOldestEmergencyTimeLast) {
  std::string user_input = "Magnitude 5.0 Earthquake\nLittle Lake\n2049\nVegetation Fire\nAguanga\n1602\nWildland Fire\nBeaumont\n922\n";
  ASSERT_EXECTHAT("tuffyaid", user_input, HasSubstr("922"))
      << "Hint: Your program should display the report time of the oldest emergency, 922.";
}
  
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);    
    ::testing::UnitTest::GetInstance()->listeners().Append(new SkipListener());
    return RUN_ALL_TESTS();
}