# TuffyAid Milestone 2

This is milestone 2 of the [TuffyAid Project](https://docs.google.com/document/d/1EnnXKjPqJ8is-26wZSQtQQw73b3VPEALkzfunsEkbVU/edit?usp=sharing).

# Requirements
Design and implement an `Emergency` class that will store the *description_*, *location_* and *report_time_* of an emergency. For example, a Wildland Fire at Beaumont reported at 9:22am. Please use the previously mentioned member variable names and their corresponding accessors and mutators to ensure your program will pass the unit test. 

Create a function called *create_emergency* that asks the user to provide the description of the emergency, its location, and its report time. Use the information provided by the user to create an `Emergency` object and return it.

Modify your Milestone 1 program so that it calls the *create_emergency* function to create three `Emergency` objects. Use the accessors and mutators of each `Emergency` object to figure out which one first responders should prioritize.


The code should be organized so that class and function prototypes are placed in a header file (`emergency.hpp`) while their implementations are placed in a source file (`emergency.cpp`). Finally, the *main* method should be in the driver file (`tuffyaid.cpp`).

Please see the sample output below to guide the design of your program.

# Sample output
<pre>
Welcome to TuffyAid Emergency Response!

Emergency 1:
Please describe the emergency: <b>Magnitude 5.0 Earthquake</b>
Provide the location of the emergency: <b>Little Lake</b>
Please enter the time that the emergency was reported: <b>2049</b>

Emergency 2:
Please describe the emergency: <b>Wildland Fire</b>
Provide the location of the emergency: <b>Beaumont</b>
Please enter the time that the emergency was reported: <b>922</b>

Emergency 3:
Please describe the emergency: <b>Vegetation Fire</b>
Provide the location of the emergency: <b>Aguanga</b>
Please enter the time that the emergency was reported: <b>1602</b>

The latest incident is a Wildland Fire at Beaumont reported on 922. Please prioritize this area.
</pre>

# Submission checklist
1. Created function prototype.
1. Created function implementation.
1. Called functions in the driver accordingly.
1. Followed the [proper file structure for using functions](https://github.com/ILXL-guides/function-file-organization)
1. Compiled and ran the driver (`tuffyaid`).
1. Manually checked for compilation and logical errors.
1. Designed and tested your own test cases.
1. Ensured no errors on the unit test (`make test`).
1. Ensured no errors on the style check (`make stylecheck`).
1. Ensured no errors on the format check (`make formatcheck`).
1. Completed reflection file ([reflection.md](reflection.md))

# Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/ms01-tuffy` and you are currently in `/home/student` you can issue the following commands

```
cd ms01-tuffy
```

Use the `clang++` command to compile your code and the `./` command to run it. The sample code below shows how you would compile code save in `tuffyaid.cpp` and into the executable file `tuffyaid`. Make sure you use the correct filenames required in this problem.  Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ -std=c++17 tuffyaid.cpp emergency.cpp -o tuffyaid
./tuffyaid
```

You can run one, two, or all the commands below to `test` your code, `stylecheck` your code's design, or `formatcheck` your work. Kindly make sure that you have compiled and executed your code before issuing any of the commands below to avoid errors.

```
make test
make stylecheck
make formatcheck
```

A faster way of running all these tests uses the `all` parameter.

```
make all
```

# Submission
1. When everything runs correctly,  let's copy your code into the Github repository. The first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file you want to add. There are cases when you have multiple changed files, so you can just type . (period) to add all modified files.

    ```
    git add tuffyaid.cpp
    ```
1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area.

    ```
    git commit
    ```
1. In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```
    When you're done, make sure you type `git commit` again.    
1. Git will ask you to describe what you have added to the staging area. By default, you will use a command-line based editor called *nano*. Go ahead and provide a description then press <kbd>Ctrl</kbd> + <kbd>x</kbd> to exit. Press <kbd>Y</kbd> to confirm that you want to make changes and then press <kbd>Enter</kbd>.
1. Lets push all changes to the Github repository using git's `push` command. Provide your Github username and password when you are asked.

    ```
    git push
    ```
1. When you finish the exercise, go back to Titanium and click on the `Add submission` button in the lab exercise page. Provide a short message in the text area such as "finished lab exercise" and click on `Save changes`. Finally click on `Submit assignment` to inform your instructor that you are done.
