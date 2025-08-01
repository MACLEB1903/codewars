/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54fdaa4a50f167b5c000005f/train/java


Instructions:
Here is a piece of code:
java
public class Kata {

    public static HashMap <String, String> getStatus(boolean isBusy) {
        HashMap<String, String> status;
      
        if (isBusy) {
          status = "busy";
        } else {
          status = "available";
        }

        return status;
    }
}
    
Expected Behaviour
Function should return a dictionary/Object/Hash with "status" as a key, whose value can : "busy" or "available" depending on the truth value of the argument is_busy.

But as you will see after clicking RUN or ATTEMPT this code has several bugs, please fix them.

*/

import java.util.HashMap;public class Kata {    public static HashMap <String, String> getStatus(boolean isBusy) {
        HashMap<String, String> status = new HashMap<String,String>();
      
        if (isBusy) {
          status.put("status" , "busy");
        } else {
          status.put("status" , "available");
        }        return status;
    }
  
}