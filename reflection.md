# Reflection

## Program description
// Describe your program using your own words.

## Test cases
### Test case 1: Retrieving emergencies and times
#### Inputs: 

Emergencies and times: 

Magnitude 5.0 Earthquake  
Little Lake  
2049

Wildland Fire  
Beaumont  
922

Vegetation Fire  
Aguanga  
1602

#### Output:

No errors

### Test case 2: Show oldest emergency when oldest emergency is inputted first
#### Inputs:

Emergencies and times: 

Wildland Fire  
Beaumont  
922

Magnitude 5.0 Earthquake  
Little Lake  
2049

Vegetation Fire  
Aguanga  
1602

#### Output:

Output should contain Wildland Fire

### Test case 3: Show oldest emergency location when oldest emergency is inputted first
#### Inputs:

Emergencies and times: 

Wildland Fire  
Beaumont  
922

Magnitude 5.0 Earthquake  
Little Lake  
2049

Vegetation Fire  
Aguanga  
1602

#### Output:

Output should contain Beaumont

### Test case 4: Show oldest emergency time when oldest emergency is inputted first
#### Inputs:

Emergencies and times: 

Wildland Fire  
Beaumont  
922

Magnitude 5.0 Earthquake  
Little Lake  
2049

Vegetation Fire  
Aguanga  
1602

#### Output:

Output should contain 922

### Test case 5: Show oldest emergency when oldest emergency is inputted second
#### Inputs:

Emergencies and times: 

Magnitude 5.0 Earthquake  
Little Lake  
2049

Wildland Fire  
Beaumont  
922

Vegetation Fire  
Aguanga  
1602

#### Output:

Output should contain Wildland Fire and Beaumont

### Test case 6: Show oldest emergency location when oldest emergency is inputted second
#### Inputs:

Emergencies and times: 

Magnitude 5.0 Earthquake  
Little Lake  
2049

Wildland Fire  
Beaumont  
922

Vegetation Fire  
Aguanga  
1602

#### Output:

Output should contain Beaumont

### Test case 7: Show oldest emergency time when oldest emergency is inputted second
#### Inputs:

Emergencies and times: 

Magnitude 5.0 Earthquake  
Little Lake  
2049

Wildland Fire  
Beaumont  
922

Vegetation Fire  
Aguanga  
1602

#### Output:

Output should contain 922

### Test case 8: Show oldest emergency when oldest emergency is inputted last
#### Inputs:

Emergencies and times: 

Magnitude 5.0 Earthquake  
Little Lake  
2049

Vegetation Fire  
Aguanga  
1602

Wildland Fire  
Beaumont  
922

#### Output:

Output should contain Wildland Fire and Beaumont

### Test case 9: Show oldest emergency location when oldest emergency is inputted last
#### Inputs:

Emergencies and times: 

Magnitude 5.0 Earthquake  
Little Lake  
2049

Vegetation Fire  
Aguanga  
1602

Wildland Fire  
Beaumont  
922

#### Output:

Output should contain Beaumont

### Test case 10: Show oldest emergency time when oldest emergency is inputted last
#### Inputs:

Emergencies and times: 

Magnitude 5.0 Earthquake  
Little Lake  
2049

Vegetation Fire  
Aguanga  
1602

Wildland Fire  
Beaumont  
922

#### Output:

Output should contain 922


### Test case 11: Emergency class' access and mutator functions for description

Given an Emergency object my_emergency object:

my_emergency.set_description("Wildland Fire");

#### Output:

Calling my_emergency.description() returns "Wildland Fire"

### Test case 12: Description of the object created using create_emergency

Input the following values after calling create_emergency()

Magnitude 5.0 Earthquake  
Little Lake  
2049

#### Output:

Calling my_emergency.description() returns Magnitude 5.0 Earthquake

### Test case n: Other test cases
#### Inputs:
// provide inputs here
#### Output:
// provide outputs here

// Add as many test cases as you think is necessary to check your program


## Issues encountered
### Open issues
// Describe each of the issues you are currently having with your program. If you had more time, describe how you would you fixed the issue. If there are no open issues then just say "No open issues".

### Resolved issues
// Describe the issues you encountered while developing your project and how you resolved them.