/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/547c71fdc5b2b38db1000098/train/java


Instructions:
We want to create a constructor function 'NameMe', which takes first name and last name as parameters. The function combines the first and last names and saves the value in "name" property.

We already implemented that function, but when we actually run the code, the "name" property is accessible, but the "firstName" and "lastName" is not accessible. All the properties should be accessible. Can you find what's wrong with it?
A test fixture is also available

java
public class NameMe {
    private String firstName;
    private String lastName;
    private String fullName;

    public NameMe(String first, String last) {
        this.firstName = first;
        this.lastName = last;
   }
 }

NameMe nameMe = new NameMe("John", "Doe");
nameMe.getFirstName(); //Expected: John
nameMe.getLastName(); //Expected: Doe
nameMe.getFullName(); //Expected: John Doe

*/

public class NameMe {
  public static final String thisKata = "This Kata has serious issues. Do you want us to use getters or not?"
      + "Why is there a member for fullName when it is a calculated result?"
      + "Why do the tests require that the fields be public; why are they testing the fields at all?";
  public String firstName;
  public String lastName;
  public String fullName;
  
  public String getFirstName() {
    return firstName;
  }
  
  public String getLastName() {
    return lastName;
  }
  
  public String getFullName() {
    return fullName;
  }
  
  public NameMe(String first, String last) {
    this.firstName = first;
    this.lastName = last;
    this.fullName = firstName + " " + lastName;
  }
}