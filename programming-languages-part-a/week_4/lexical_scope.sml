(* Lexical Scoping *)

(* 1 *) val x = 1
            (* x maps to 1 *)
(* 2 *) fun f y = x + y
            (* f maps to a function that adds 1 to its arguments *)
(* 3 *) val x = 2
            (* x maps to 2 *)
(* 4 *) val y = 3
            (* y maps to 3 *)
(* 5 *) val z = f (x + y)
            (* call the function defined on line 5 *)
