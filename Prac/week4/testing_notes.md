# White-box vs Regression Testing 

## 1) White-box testing: What is it? Who writes it? What code artefacts does it typically exercise (e.g.,branches/paths/conditions)? Give one small example of a function and what a white-box test would assert.
	It is the internal examination and working of an application. It is to ensure the code logic, flow and implementation behave as required. Developers who are active in the devolopment of the software are  typically the ones to test the software as they know the internal workings of the software and are able to write tests that effectively cover all the possible known cases. 

The code artefacts tested usually are statement coverage, which is validating whether every line of the code is executed at least once. 
	Branch coverage is validating whether each branch is executed at least once. 
Path coverage it all paths have been traversed once. 

'''
int main(int argc, char *argv[]) {
  if (argc < 3) {
    cout << "Usage: " << argv[0] << " <FirstName> <LastName>"
         << endl; // usage guide if user does not input two strings
    return 1;
'''

For this scenario, it would test input. No input to test if usage guide appears, one input for testing if it accepts just the firstname and nothing else (could be desired/allowed for the function.) and finally two inputs to see if the action is satisfied and works correctly. 



## 2) Regression testing: What is it? When is it run (e.g., after refactoring, bug fixes, dependency upgrades)? Why is it important for preventing the re-introduction of old defects?

It is the rerunning of functional and non-functional tests to ensure that software still performs as expected after a change. As software is changed and updated, the emergence of new and/or old faults is quite common. 

Regression testing can occur after a fix to a problem has been made, sometimes fixes are "fragile" in the sense that they fix the problem in the narrow case but introduces another somewhere else. Any change in the source code, automated regression testing should be used on a recurring cycle to catch any potential bugs/problems to minimise the downtime or failure the program might have. 

Without regression testing, fixes for old bugs reintroduce old bugs or create new ones, leading to a detoriation in software quality. 

