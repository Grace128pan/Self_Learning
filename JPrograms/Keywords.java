/*
 1. keywords can not be used as names for a variable, class or method
 2. there are 16 keywords in Java
 abstract/asset/boolean/break/byte/case
 catch/char/class/const/continue/default
 do/double/else/enum/exports/extends
 final/finally/float/for/goto/if
 implements/import/instanceof/int/interface/long
 module/native/new/non-sealed/open/opens
 package/permits/private/protected/public
 record/requires/return/sealed/short/static
 strictfp/super/switch/synchronized/this/throw
 throws/to/transient/transitive try/uses/var
 void/volatile/while/with/yield
 3. ten keywords relate to modules: exports, module, open, opens. provides, requires, to, transitive, uses and with
 4. records are declared by record; sealed classes and interfaces use sealed, non-sealed and permits
 yield is used by the enhanced switch
 var supports local variable type inference
 5. const and goto are reserved for future use
 6. true, false and null are not keywords but literals, they can not be used as names for a variable, class or method
 7. In java, a variable can start with a letter, $ or _ but not with a digit; then it can have any number of letters, digits, $ or _;
 uppercase and lowercase letters are distinct
 8 legal identifiers examples:
 Test, up, x, _top, y2, my_var, MaxLoad, sample123
 9. we can not use keywords as identifier names
 10.print() and println() are methods of the out object of the System class

 This program is to calculate the weight of a person on the moon
 */



public class Keywords {
    public static void main(String[] args) {
        double moonWeight, earthWeight;
        earthWeight = 150;
        moonWeight = earthWeight * 0.17;
        System.out.println("you weight on the moon is: " + moonWeight + " kg");
    }

}
